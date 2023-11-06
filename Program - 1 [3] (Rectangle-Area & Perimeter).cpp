// Write a C program to enter length and breadth of a rectangle and find its perimeter & area.
//220130318046
//pansara yashvi
#include<iostream>
using namespace std;
int main()
{
	int len,bre,area,peri;
	cout<<"Enter The Length Of Rectangle :: ";
	cin>>len;
	cout<<"Enter The Bredth Of Rectangle :: ";
	cin>>bre;
	peri=2*(len+bre);
	area=len*bre;
	cout<<"Perimeter Of Rectangle Will Be :: "<<peri;
	cout<<"Area Of Rectangle Will Be      :: "<<area;
	return 0;
}
