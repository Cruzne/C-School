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
	int n,i,a,b,f;
	
	cout<<"Podaj n: "<<endl;
	do{
	cin>>n;}
	while(!(cin.good()&&n>0));
	system("cls");
	
	if(n>2)
	{
		i=2;
		a=1;
		b=1;
		do
		{
		f=a+b;
		a=b;
		b=f;
		i=i+1;	
		}
		while(!(i==n));
		cout<<"Fibo: "<<f<<endl;
		system("pause");
		system("cls");
	}
	else 
	{
	cout<<"Fibo: 1"<<endl;
	system("pause");
	system("cls");
	}


	cout<<"Jezeli chcesz powtorzyc program wpisz T/N :";
	odp=toupper(getch());
	system("cls");
	}
	while(odp=='T');
}

