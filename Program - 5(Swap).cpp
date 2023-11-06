//5. Write C++ program to swap two numbers.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a first number :: ";
	cin>>a;
	cout<<"Enter a second number:: ";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"Value Of a After Swapping Is :: "<<a<<endl;
	cout<<"Value Of b After Swapping Is :: "<<b<<endl;
	return 0;
}
