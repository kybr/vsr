--Luajit GA generator
--Author: Pablo Colapinto
--Email:  wolftype@gmail.com

--[[

Builds Euclidean and Conformal Basis 
Operations In Arbitrary Metric

Space time Algebra, for instance,
is possible by setting metric to
{-1,-1,-1,1} and calling buildEuclidean
]]

package.path = "../util/?.lua;"..package.path
require "routines" 

local bit = require("bit")
local tobit = bit.tobit
local bnot = bit.bnot
local band = bit.band
local bxor = bit.bxor
local bor = bit.bor
local lshift = bit.lshift
local rshift = bit.rshift

module("bitBasis", package.seeall)

--Store Basis Combinatorics (a Cayley Graph)
S = {}


--[[
-------------------------------------
Below is our metric: 
{1,1,1} is 3D Euclidean (use buildEuclidean) 
{1,1,1,1,-1} is 3D Conformal (use buildConformal)
-------------------------------------
--]]

metric = {}			--METRIC (use {1,1,1,1,-1} for 3D Conformal or {-1,-1,-1,1} for Spacetime, etc )
basis = {}			--BASIS BLADES
subspace = {} 		--BASIC SUBSPACE CREATION
keys = {} 			--TYPE KEY STORAGE  
types = {}			--TYPES  

ORIGIN = 0
INFINITY = 0
EP = 0
EM = 0
EPLANE = 0

blade = function(b, wt)
	return {id = b, w = wt}
end

bitString = function(x)  
	local out = ""
	local tmp = x
	for i,iv in ipairs(metric) do
		if band(tmp,1) == 1 then out =  "1" ..out
		else out =  "0" .. out end
		tmp = rshift(tmp,1)
	end
	 
	return out
end


basisString = function(x)
	local tmp = x
	local n = 0
	local out = ""
	while tmp ~= 0 do
		n = n+1
		if band(tmp,1) == 1 then out = out .. n end
		tmp = rshift(tmp,1)
	end
	if n > 0 then return "e"..out 
	else return "s" end
end

basisBit = function(name)
	if(name == "s") then
		return 0
	end

	local x = 0
	local lastn = tonumber(name:sub(name:len()))
	for i=lastn, 1, -1 do
		x = lshift(x, 1)
		if(name:find(tostring(i), nil, false)) then
			x = x+1
		end
	end
	return x
end

bladeString = function(x)
	local out = bitString (x.id)
	out = out .. " " .. x.w .. " " .. basisString(x.id)
	return out
end

keyString = function(x)
	local out = ""
	for k, kv in ipairs( keys[ x ] ) do
		if (kv ~= 0 ) then out = out .. k .. "\t" .. kv end
	end
	return out
end

flag = function() 	
	local numKeys = math.ceil( #basis / 32 )
	local tmp = {}
	for i=1,numKeys do tmp[i] = 0 end
	return tmp
end


buildBasis = function() 
	
	m = metric

	--make e1, e2, e3, e4 . . .
	table.insert(basis,0)
	local nb = 1
	for i,iv in ipairs(m) do
		table.insert(basis,nb)
		nb = lshift(nb,1)
	end
	
	--make e12, e23 . . .
	local tally = {}
	for i, iv in ipairs(basis) do
		for j, jv in ipairs(basis) do
			if (i~=j) then 
				local r = outer(iv,jv)
				if ( r.id ~= 0 ) and ( isMember(r.id,basis) == nil )  then 
					table.insert(basis, r.id )
				end
			end
		end
	end
	
	table.sort(basis, compareBasis)
	
	-- for i, iv in ipairs(basis) do
	-- 	print ( basisString(iv), bitString(iv) )
	-- end
	
	for i, iv in ipairs(basis) do

		local f = flag()

		local k = math.ceil( i / 32 );
		--print(k)
		local shft = i - (32 * (k-1) )
		--print(shft)
		f[k] = lshift(1, shft-1) 
		local id = basisString(iv)
		keys[ id  ] = f
        types[ id ] = {iv} --{ desc = id, bases = {iv} }
	end
	
end		

compareBasis = function(a,b)
	local l = grade(a) - 1.0 / a
	local r = grade(b) - 1.0 / b
	return l < r
end


printBasis = function()
	for i,iv in ipairs(basis) do
		print( bitString(iv), basisString(iv), keyString(basisString(iv) ) )
	end
end

sign = function(a,b)
	local n = rshift(a,1)
	local sum = 0
	while n ~= 0 do
		sum = sum + grade( band(n,b) )
		n = rshift(n,1)
	end
	if band(sum,1) == 0 then return 1
	else return -1 end
end

grade = function (x)
	local n = 0
	while( x ~= 0 ) do
		if ( band(x,1) == 1 ) then n = n + 1 end
		x = rshift(x,1)
	end
	return n
end

inner = function(a,b)
	local tmp = product(a,b)
	local g = grade(b) - grade(a)
	if grade(a) > grade(b) or grade(tmp.id) ~= g then 
		return blade(0,0)
	else return tmp end
end

outer = function(a, b)
	if ( band(a,b) ~= 0 ) then return blade(0,0) end
	return product(a,b)
end

product = function(a, b)
	local res = bxor(a,b)
	local s = sign(a,b)
	return blade(res, s)
end


metricProduct = function(a,b)
	local tmp = product(a,b)
	local bs = band(a,b)
	local i = 1
	while bs ~= 0 do
		if band(bs,1) == 1 then tmp.w = tmp.w * metric[i] end
		bs = rshift(bs,1)
		i = i+1
	end
	return tmp
end



metricInner = function(a,b)
	local tmp = metricProduct(a,b)
	local g = grade(b) - grade(a)
	if grade(a) > grade(b) or grade(tmp.id) ~= g then 
		return blade(0,0)
	else return tmp end
end

--HERMITIAN OPERATORS 

involute = function(x)
	local g = grade(x)
	local n = math.pow(-1,g)
	return blade(x,n)
end

reverse = function(x)
	local g = grade(x)
	local n = math.pow( -1, ( g*(g-1) / 2.0 ) )
	return blade(x,n)
end

conjugate = function(x)
	local g = grade(x)
	local n = math.pow( -1, (g * (g+1) / 2.0) )
	return blade(x,n)
end

--Check For presence of Minkowskian Basis
checkMink = function(x)
	if ( band(x, EPLANE) == 0 ) or ( band(x, EPLANE) == EPLANE ) then 
		return false else return true end
end

--Push into e+.e- Minkowskian diagonal metric from a null basis (for calculating metric products)
pushMink = function(x)	
	if (band(x, ORIGIN)==ORIGIN) then
		local t = bxor(x, ORIGIN)
		-- print( bitString(x),"push origin", bitString(t))
		return { blade( bxor(t,EP), .5),  blade( bxor(t,EM), .5) }
	elseif (band(x,INFINITY)==INFINITY) then
		local t = bxor(x, INFINITY)
		-- print(bitString(x),"push infinity", bitString(t))
		return { blade( bxor(t,EP), -1),  blade( bxor(t,EM), 1) }	
	end
end

--Pop back into degenerate null basis from nondegenerate Minkowskian (after xor-ing)
popMink = function(x)
	if (band(x, EP)==EP) then
		local t = bxor(x, EP)
		-- print(bitString(x), "pop ep", bitString(t))
		return { blade( bxor(t,ORIGIN), 1),  blade( bxor(t,INFINITY), -.5) }
	elseif (band(x,EM)==EM) then
		local t = bxor(x, EM)
		-- print(bitString(x), "pop em", bitString(t))
		return { blade( bxor(t,ORIGIN), 1),  blade( bxor(t,INFINITY), .5) }	
	end	
end

--feed in a table of blades -> compress (combine like terms) and clean (remove zero terms)
compress = function(x)
	local tally = {}
	local res = {}
	
	--collect like terms
	for i,iv in ipairs(x) do
		--print (bladeString(iv))
		local exists = 0
		
		for k,kv in ipairs(tally) do
			if iv.id == kv.id then 
			--	print (iv.id, kv.id)
				exists = 1
			--	print (kv.w, iv.w)
				kv.w = kv.w + iv.w -- sum in weight
				--print (kv.w)
			end
		end
		--if doesn't exist, add it
		if (exists == 0) then
			table.insert(tally,iv)
		end		
	end
	
	--remove zeros
	for i,iv in ipairs(tally) do
		if (iv.w ~= 0) then 
		--	print (bladeString(iv))
			table.insert(res, iv ) 
		end
	end
	
	return res
end


buildEuclidean = function()

	prepTable()
	
	for i,iv in ipairs(basis) do
		--local idA = basisString(iv)
		for j,jv in ipairs(basis) do
		--	local idB = basisString(jv)
			local gp_res = metricProduct(iv,jv)
			local op_res = outer( iv,jv) 
			local ip_res = metricInner( iv,jv)
			
			S[iv].gp[jv] = {gp_res}
			S[iv].op[jv] = {op_res}
			S[iv].ip[jv] = {ip_res}
			S[iv].involute = involute(iv)
			S[iv].reverse = reverse(iv)
			S[iv].conjugate = conjugate(iv)
		end
	end
					
	for i,iv in ipairs (basis) do
		print (S[iv].id )
	end
end



conformal = function(iv,jv)
		
	--get list of blades in minkowskian (diagonal) metric
	local tmpA
	if checkMink(iv)==true then tmpA = pushMink(iv)
	else tmpA = { blade(iv,1) } end
	
	local tmpB
	if checkMink(jv)==true then tmpB = pushMink(jv)
	else tmpB = { blade(jv,1) } end

	local gpTally = {}
	local opTally = {}
	local ipTally = {}

	local gpPop = {}
	local opPop = {}
	local ipPop = {}
	
	for k,kv in ipairs(tmpA) do
		--print (bladeString(kv))
		for l, lv in ipairs(tmpB) do
		--	print (bladeString(lv))
			--calculate products in mink metric
			local gp_res = metricProduct(kv.id,lv.id)
			--print ( bladeString(blade(gp_res.id, gp_res.w * kv.w * lv.w)) )
			local op_res = outer( kv.id,lv.id) 
			local ip_res = metricInner( kv.id,lv.id)
			--push onto tally stack
			table.insert(  gpTally, blade(gp_res.id, gp_res.w * kv.w * lv.w) )
			table.insert(  opTally, blade(op_res.id, op_res.w * kv.w * lv.w) )
			table.insert(  ipTally, blade(ip_res.id, ip_res.w * kv.w * lv.w) )
		end
	end
		
	local gpCompress = compress(gpTally)
	local opCompress = compress(opTally)
	local ipCompress = compress(ipTally)

	S[iv].ip[jv] = {}
	S[iv].op[jv] = {}
	S[iv].gp[jv] = {}
	S[iv].involute = involute(iv)
	S[iv].reverse = reverse(iv)
	S[iv].conjugate = conjugate(iv)
	
	for k, kv in ipairs(gpCompress) do		
		local tmp
		if checkMink(kv.id)==true then
			tmp = popMink(kv.id)
			for m, mv in ipairs(tmp) do
				mv.w = mv.w * kv.w
			end
		else tmp = {kv} end
		
		AddTab(gpPop, tmp)
	end

	for k, kv in ipairs(opCompress) do		
		local tmp
		if checkMink(kv.id)==true then
			tmp = popMink(kv.id)
			for m, mv in ipairs(tmp) do
				mv.w = mv.w * kv.w
			end
		else tmp = {kv} end
		
		AddTab(opPop, tmp)
	end

	for k, kv in ipairs(ipCompress) do		
		local tmp
		if checkMink(kv.id)==true then
			tmp = popMink(kv.id)
			for m, mv in ipairs(tmp) do
				mv.w = mv.w * kv.w
			end
		else tmp = {kv} end
		
		AddTab(ipPop, tmp)
	end

	
	AddTab( S[iv].gp[jv], compress(gpPop) )
	AddTab( S[iv].op[jv], compress(opPop) )
	AddTab( S[iv].ip[jv], compress(ipPop) )
		
end



buildConformal = function()
	
	prepTable()
	
	ORIGIN = lshift(1,#metric-2)
	INFINITY = lshift(1,#metric-1)
	EP = ORIGIN
	EM = INFINITY
	EPLANE = bor(ORIGIN,INFINITY)

	for i,iv in ipairs(basis) do

		--local idA = basisString(iv)
		S[iv].involute = involute(iv)
		S[iv].reverse = reverse(iv)
		S[iv].conjugate = conjugate(iv)
			
		for j, jv in ipairs(basis) do
			conformal(iv,jv)
		end

	end
	
	--[[
	for i,iv in ipairs(basis) do
		print ("bas",  S[iv].id )
	end
	--]]
end



buildSubspaces = function()
	
	local d = { "Vec", "Biv", "Tri", "Quad", "Penta", "Hexa", "Hepta", "Octo"}
	

	for i=1,#metric,1 do
		subspace[i] = { desc = d[i], bases = {} }
	end

	for i,iv in ipairs(basis) do
		local g = grade(iv)
		if g>0 then 
			table.insert(subspace[g].bases, iv)
		end
	end
	
	
	--PRINT
	for i,iv in ipairs(subspace) do
	
		print("SUBSPACE: "..i)
	
		for j, jv in ipairs(iv.bases) do
			print( bitString(jv), basisString(jv) )
		end
		
	end
end


prepTable = function()
	for i,iv in ipairs(basis) do
		local name = basisString(iv)
		S[iv] = { id = name, basis = iv, gp = {}, op = {}, ip = {} }
	end
end  


order = function(c)
	local res = {}
	local tblades = {}
	for i,iv in pairs(c) do
		table.insert( tblades, i )
	end
	
	table.sort(tblades, compareBasis)

	return { blades = tblades, inst = c }
end

keyBasis = function(x)
	local f = flag()
	
end

--pass in a list of bases
keyCalc = function(x) 
	local f = flag()
	for i, iv in ipairs(x) do
		for k, kv in ipairs( keys[ basisString(iv) ] ) do
			f[k] = bor( f[k], kv )
		end
	end
	return f
end

--check similarity of two flags
keyCheck = function(fa,fb)

	local res
	
	for i, iv in ipairs(fa) do
		if ( fa[i] == fb[i] ) then res = true
		else res = false return res end 
	end
	
	return res
end

basisKeys = function(basis)
	local ids = {}
	for i=1, #basis do
		local name = basis[i]
		local id = basisBit(name)
		ids[i] = id
	end
	return ids
end

basisKey = function(basis)
	local ids = basisKeys(basis)
	local keys = keyCalc(ids)
	local v = 0
	for i=1, #keys do
		v = v+keys[i]
	end
	return v
end

replaceType = function(oty, nty)
	local v = keys[oty]
	keys[oty] = nil
	keys[nty] = v
	
	local v = types[oty]
	types[oty] = nil
	types[nty] = v
	
	for i=1, #subspace do
		local subs = subspace[i]
		if(subs.desc == oty) then
			subs.desc = nty
			break
		end
	end
end

register= function()
	print"register"
	for i, iv in ipairs( subspace ) do
		keys[iv.desc] = keyCalc(iv.bases) 
		types[iv.desc] = iv.bases
		print (iv.desc, keyString(iv.desc) )
	end
	print ("\n")
end


metric = {1,1,1,1,-1}
-- 
buildBasis()
-- 
for i, iv in ipairs(basis) do print( bitString(iv) ) end  
--
buildConformal()
--                           
cayleyTable = function() 
	local out = " s is a scalar, e4 is origin and e5 is infinity\n"
	for i, iv in ipairs(basis) do  

		for k, kv in ipairs(basis) do
	      	 out = out .. basisString(iv) .. "\t*\t" .. basisString(kv) .. "\t=\t"  
			--out = out .. S[iv].gp[kv]
		    	for j, jv in ipairs( S[iv].gp[kv] ) do    
					if (jv.w == -1) then out = out .. "-"  end
					out = out .. basisString(jv.id)
					if (j < #S[iv].gp[kv]) then out = out .. "\t+\t" end
				   
					--else out = out .. "\n" end
				end  
				out = out .. "\n" 
		 end
	end 
	return out
end

print (cayleyTable()) 


