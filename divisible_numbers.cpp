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
	cout<<"Bedziesz musial podac poczatek i koniec przedzialu, oraz liczbe przez ktora beda dzielone"<<endl;
	cout<<"Podaj poczatek: ";
	cin>>a;
	system ("cls");
	cout<<"Podaj koniec: ";
	cin>>b;
	system ("cls");
	cout<<"Podaj liczbe przez ktora beda dzielone: ";
	cin>>c;
	system ("cls");
	cout<<"To sa liczby podzielne przez "<<c<<": ";
	for(a;a<b;a++)
	{
		if(!(a%c))
		cout<<a<<"|";
	}
cout<<endl;
system ("pause");
return 0;
}
