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
	
	float a,b,srednia;
	int i,n;
	b=0;
	cout<<"Podaj ile liczb bedzie w sredniej: ";
	do
	cin>>n;
	while(!(n>0));
	n=n+1;
	system("cls");
	for(i=1;i<n;i++)
	{
		cout<<"Wpisz "<<i<<" liczbe: ";
		do
		cin>>a;
		while(!(a>0&&a<100));
		b=b+a;
		system("cls");
	}
n=n-1;
srednia=b/n;
cout<<"Srednia arytmetyczna to: "<<fixed<<setprecision(2)<<srednia<<endl;
system("pause");
system("cls");


cout<<"Jezeli chcesz powtorzyc program wpisz T/N :";
odp=toupper(getch());
system("pause");
system("cls");
}
while(odp=='T');
}
