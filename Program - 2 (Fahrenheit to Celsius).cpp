//2. WAP to convert Fahrenheit into Celsius using class.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
int main()
{
	float f,c;
	cout<<"Enter The Temperature In Fahrenheit :: ";
	cin>>f;
	c=((f-32)*5)/9;
	cout<<"Temperature In Celsius :: "<<c;
	return 0;
}
