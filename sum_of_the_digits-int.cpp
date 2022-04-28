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
	long long x,y;
	cout<<"podaj liczbe: ";
	do
	{cin>>x;}
	while(!(cin.good()));
	y=0;
	if(x!=0)
	{
		do
		{
			y=y+x%10;
			x=x/10;
		}
		while(x>0);
		cout<<"suma wynnosi: "<<y<<endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout<<"suma cyfr wynosi: "<<y<<endl;
		system("pause");
		system("cls");
		
	}
	
	cout<<"Jezeli chcesz powtorzyc program wpisz T/N :";
	odp=toupper(getch());
	system("cls");
	}
	while(odp=='T');
}

