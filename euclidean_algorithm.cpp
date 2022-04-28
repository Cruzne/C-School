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
	char odp;
	do
	{
	int a,b,c,d,r;
	
	cout<<"Podaj a: ";
	cin>>a;
	cout<<"Podaj b: ";
	cin>>b;
	c=a;
	d=b;
	system("cls");
	do
	{
	r=a%b;
	a=b;
	b=r;
}
while(r!=0);
cout<<"NWD wynosi: "<<a<<endl;
cout<<"NWW wynosi: "<<c*d/a<<endl;


	cout<<"Jezeli chcesz powtorzyc program wpisz T/N :";
	odp=toupper(getch());
	system("pause");
	system("cls");
	}
	while(odp=='T');
}

