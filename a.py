x = ((8**16) + (4**15) - 1)*(2**100)-1 + (2**10)

print(x)

a = 600
ans = 0
s = ""
while a >= 0:
	if x - 2**a >= 0:
		x -= 2**a
		ans += 1
		s+= '1'
	else:
		s += '0'
	a -= 1

print(ans)
print(s)

x += 1