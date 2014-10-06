def gcd(m, n):
	'''given two numbers, it finds their greatest common divisor'''
	if m < n :
		t = m
		m = n
		n = t
	r = m % n
	a_str = "This greatest common divisor of "+str(m)+" and "+str(n)+" is "
	while (r != 0):
		m = n
		n = r
		r = m % n
	a = n
	print a_str,a



gcd(1344, 1440)
