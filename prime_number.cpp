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
int n,z;
cout<<"Podaj liczbe: ";
do{
	cin>>n;
}
while(!(cin.good()));
z=0;
system("cls");
for (int x=2;x<=sqrt(n);x++)
{
	if(n%x==0)
	{
		cout<<"Nie jest to liczba pierwsza, dzieli sie miedzy innymi przez: "<<x<<endl;
		z=1;
		system("pause");
		system("cls");
		break;
	}
	
}
if(!(z==1)){
cout<<"Jest to liczba pierwsza"<<endl;
system("pause");
system("cls");
}

	
	cout<<"Jezeli chcesz powtorzyc program wpisz T/N :"<<endl;
	odp=toupper(getch());
	system("cls");
	}
	while(odp=='T');
}
