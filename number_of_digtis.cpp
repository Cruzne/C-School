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
	int a;
	cout<<"Podaj liczbe z przedzialu <0-1000000000>: ";
	cin>>a;
	system ("pause");
	system ("cls");
	switch (a)
	{
			case 1 ... 9:
		{
		cout<<"W liczbie jest 1 cyfra"<<endl;
		system ("pause");
		break;
		}
		case 10 ... 99:
		{
		cout<<"W liczbie sa 2 liczby"<<endl;
		system ("pause");
		break;
		}
		case 100 ... 999:
		{
		cout<<"W liczbie sa 3 liczby"<<endl;
		system ("pause");
		break;
		}
		case 1000 ... 9999:
		{
		cout<<"W liczbie sa 4 liczby"<<endl;
		system ("pause");
		break;
		}
		case 10000 ... 99999:
		{
		cout<<"W liczbie jest 5 liczb"<<endl;
		system ("pause");
		break;
		}
		case 100000 ... 999999:
		{
		cout<<"W liczbie jest 6 liczb"<<endl;
		system ("pause");
		break;
		}
		case 1000000 ... 9999999:
		{
		cout<<"W liczbie jest 7 liczb"<<endl;
		system ("pause");
		break;
		}
		case 10000000 ... 99999999:
		{
		cout<<"W liczbie jest 8 liczb"<<endl;
		system ("pause");
		break;
		}
		case 100000000 ... 999999999:
		{
		cout<<"W liczbie jest 9 liczb"<<endl;
		system ("pause");
		break;
		}
		case 1000000000 ... 1000000000:
		{
		cout<<"W liczbie jest 10 liczb"<<endl;
		system ("pause");
		break;
		}
	default:
	{
	cout<<"Wpisz liczbe z przedzialu"<<endl;
	system ("pause");
	}
return 0;	
		
	}
}
