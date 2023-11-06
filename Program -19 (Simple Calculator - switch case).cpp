//19.Write C++ Program to Make a Simple Calculator with the use of switch case.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
int main()
{
	char op;
	float a,b;
	cout<<"Enter a value of a :: ";
	cin>>a;
	cout<<"Enter The Operator ( + , - , * , / ) :: ";
	cin>>op;
	cout<<"Enter a vaalue of b :: ";
	cin>>b;
	cout<<endl;
	switch(op)
	{
		case '+':
			cout<<a<<" + "<<b<<" = "<<a+b;
			break;
			
		case '-':
			cout<<a<<" - "<<b<<" = "<<a-b;
			break;
			
		case '*':
			cout<<a<<" * "<<b<<" = "<<a*b;
			break;
			
		case '/':
			cout<<a<<" / "<<b<<" = "<<a/b;
			break;

		default:
			cout<<"Error ! You Have Entered An Invalid Operator :(";
			break;
	}
	return 0;
}
