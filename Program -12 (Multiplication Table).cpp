//12.Write C++ Program To Print Multiplication Table of a Number.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter The Number To Print It's Table :: ";
	cin>>n;
	cout<<"Table Of "<<n<<" Is :: "<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
	return 0;
}
