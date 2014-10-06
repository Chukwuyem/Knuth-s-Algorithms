/*
 * gcd.cpp
 *
 *  Created on: 5 Oct 2014
 *      Author: Chukwuyem
 *
 *      This is created as part of the Knuth's Algorithms project
 */
#include <iostream>
#include <string>
using namespace std;

//gcd = greatest common divisor

int gcd (int m, int n)
/*
 * takes m and n. make sure m >= n.
 * divides m and n. if the remainder
 * is 0, return n. Else, set m to n
 * and n to r.
 */
{
	if(n>m)
	{
		int t= m;
		m = n;
		n = t;
	}
	int r = m % n;
	int a; //answer
	cout<< "This greatest common divisor of "<<m<<" and "<<n<<" is ";

	while (r != 0)
	{
		m = n;
		n = r;
		r = m % n;
	}

	a = n;

	cout << a;

	return 0;
}

int main(){
	gcd(1344, 1440); //these are test values

	return 0;
}


