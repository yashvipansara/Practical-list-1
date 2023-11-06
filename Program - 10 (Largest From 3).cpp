//10.Write C++ Program to Find Largest Among 3 Numbers.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Value of a :: ";
	cin>>a;
	cout<<"Enter Value of b :: ";
	cin>>b;
	cout<<"Enter Value of c :: ";
	cin>>c;

	if(a>b && a>c)
		cout<<a<<" Is Largest Number.";

	else if(b>c)
		cout<<b<<" Is Largest Number.";

	else
		cout<<c<<" Is Largest Number.";

	return 0;
}
