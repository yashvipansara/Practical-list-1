//20.Write C++ program to find factorial of the given number with the use of function.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
long factorial(int n);
int main()
{
	int n;
	cout<<"Enter the Number To Find It's Factorial :: ";
	cin>>n;
	cout<<"Factorial Of Given Number Is :: "<<factorial(n);
	return 0;
}
long factorial(int n)
{
	int i;
	long fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
