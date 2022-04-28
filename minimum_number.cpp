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
	int a,b,c;
	c=2;
	cout<<"Podaj 1 cyfre dwucyfrowa: ";
	cin>> a;
	cout<<"Podaj 2 cyfre dwucyfrowa: ";
	cin>> b;
	system ("cls");
	while(b>=10&&b<=100)
	{
		c++;
		cout<<"Podaj "<<c<<" liczbe dwucyfrowa: ";
		cin>>b;
		if(b<a&&b>=10&&b<=100)
		{
			a=b;
		}
	}
	cout<<"Najmniejsza liczba dwucyfrowa to: "<<a<<endl;
	system ("pause");
	return 0;
}

