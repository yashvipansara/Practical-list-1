//18.Write C++ Program to Calculate the Power of a Number using function.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
int pow(int b,int exp)
{
	int result=1;
	while(exp!=0)
	{
		result=result*b;
		exp--;
	}
	return result;
}
int main()
{
	int b,exp;
	cout<<"Enter The Base :: ";
	cin>>b;
	cout<<"Enter The Exponent :: ";
	cin>>exp;
	cout<<b<<" ^ "<<exp<<" = "<<pow(b,exp);
	return 0;
}
