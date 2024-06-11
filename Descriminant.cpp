#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	float x,s,a,b,c,x1,x2,disc;
	cout<<"Enter the value of a ";
	cin>>a;
	cout<<"Enter the value of b ";
	cin>>b;
	cout<<"Enter the value of c ";
	cin>>c;
	disc=(b*b)-(4*a*c);
	s=sqrt(disc);
	x1=(-b+s)/(2*a);
	x2=(-b-s)/(2*a);
	cout<<"x1="<<x1;
	cout<<"\nx2="<<x2;
	getch();
	return 0;
}