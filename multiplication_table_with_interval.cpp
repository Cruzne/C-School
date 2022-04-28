#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cctype>
#include<conio.h>
#include<windows.h>
#include<cmath>
#include<iomanip>
#include<string>

using namespace std;


 
int main()
{
int a,b,n1,n2;
do
{
	cout<<"Podaj poczatek: ";
	cin>>a;
	system("cls");
}
while(!(a>=-15&&a<=15));

do
{
	cout<<"Podaj koniec: ";
	cin>>b;
	system("cls");
}
while(!(b>=-15&&b<=15&&a<b));

n1=a;
while(n1<=b)
{
n2=a;
while(n2<=b)
	{
		cout.width(5);
		cout<<n1*n2;
		n2=n2+1;
	}	
n1=n1+1;
cout<<endl;
}	
system("pause");
return 0;
	
	
	
	
	
	

}
	
