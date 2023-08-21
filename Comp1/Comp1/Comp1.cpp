// Comp1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sal;
int s1;
int n1;
int n2;

int recur(int n)
{
	n1 = n;
	if(n==1||n==0)
	{
		sal = 1;
	}
	else
	{
		s1 = recur(n - 1);
		sal = n * s1;
	}
	return sal;
}



int fibbo(int n)
{
	n2 = n;
	int t1 = 0, t2 = 1, next = 0;

	for(int i = 1; i <= n; ++i)
	{
		if ( i == 1)
		{
			cout << t1 << ", ";
			continue;
		}
		if (i == 2) {
			cout << t2 << ", ";
			continue;
		}
		next = t1 + t2;
		t1 = t2;
		t2 = next;

		cout << next << ", ";
	}
	return next;
}

int main()
{
	cout << "Please enter an integer value for the Factorial: ";
	cin >> n1;
	cout << "Please enter an integer value for the Fibonacci: ";
	cin >> n2;
	cout << "this is the Factorial: " <<  recur(n1) << endl;
	cout << fibbo(n2) << endl;

	return 0;

}



