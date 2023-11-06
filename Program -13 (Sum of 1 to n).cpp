//13.Write C++ Program to Calculate Sum of First n Natural Numbers using function.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
int sum(int);
int main()
{
	int n;
	cout<<"Enter Any Number :: ";
	cin>>n;
	cout<<"Sum Of 1 TO "<<n<<" Number Is :: "<<sum(n);
	return 0;
}
int sum(int n)
{
	int sum=0,i;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
