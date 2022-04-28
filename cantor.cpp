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
	double EUR,USD,CHF,a;
	int wybor;
	EUR=0,22;
	USD=0,25;
	CHF=0,23;
	cout <<"Podaj kwote pieniedzy: ";
	cin>>a;
	system ("cls");
	cout<<endl<<"1-Zlote";
	cout<<endl<<"2-Dolary";
	cout<<endl<<"3-Euro";
	cout<<endl<<"4-Franki";
	cout<<endl<<"Wybierz swoja walute: ";
	cin>>wybor;
	system ("cls");
if(cin.good())
{
	switch (wybor)
	{
		case 1:
			{
			cout<<"Dolary: "<<a*0.25;
			cout<<endl<<"Euro: "<<a*0.22;
			cout<<endl<<"Franki: "<<a*0.23;
			break;
			}
		case 2:
			{
			a=a*4.01;
			cout<<"Zlote: "<<a;
			cout<<endl<<"Euro: "<<a*0.22;
			cout<<endl<<"Franki: "<<a*0.23;
			break;	
			}
		case 3:
			{
			a=a*4.54;
			cout<<"Zlote: "<<a;
			cout<<endl<<"Franki: "<<a*0.23;
			cout<<endl<<"Dolary: "<<a*0.25;
			break;
			}
		case 4:
			{
			a=a*4.35;
			cout<<"Zlote: "<<a;
			cout<<endl<<"Euro: "<<a*0.22;
			cout<<endl<<"Dolary: "<<a*0.25;
			break;
			}
		
		default: cout<<"Nie ma takiej opcji w menu!";
	}
return 0;
}
else
{
	cout<<"Wpisz numer!";
	return 0;
}	
}
