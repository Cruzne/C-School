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
		int a,b;
		cout<<"Podaj 2 liczby: ";
		cin>>a;
		cin>>b;
		system("cls");
		while(!(a=b))
		{
			if(a>b)
			a=a-b;
			else
			b=b-a;
		}
	cout<<"NWD= "<<a;
	system("pause");
	system("cls");
	
	cout<<"Jezeli chcesz powtorzyc program wpisz T/N :";
	odp=toupper(getch());
	system("cls");
	}
	while(odp=='T');
}

