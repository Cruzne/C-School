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
	
	int n;
	long long x;
	x=1;
	cout<<"Wprowadz liczbe n: ";
	cin>>n;
	system("cls");
	if(!(n==0))
	{
	for(int y=1;y<=n;y++)
	{
	x=x*y;	
	}
	cout<<"Silnia jest równa: "<<x<<endl;
	system("pause");
	system("cls");
}
else
{
cout<<"Silnia jest rowna: 1"<<endl;
system("pause");
system("cls");

}


	
	cout<<"Jezeli chcesz powtorzyc program wpisz T/N :";
	odp=toupper(getch());
	system("cls");
	}
	while(odp=='T');
}

