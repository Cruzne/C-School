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
	float a,b,srednia;
	int i,n;
	b=0;
	cout<<"Podaj ile liczb bedzie w sredniej: ";
	cin>>n;
	n=n+1;
	system("cls");
	for(i=1;i<n;i++)
	{
		cout<<"Wpisz "<<i<<" liczbe: ";
		cin>>a;
		b=b+a;
		system("cls");
	}
n=n-1;
srednia=b/n;
cout<<"Srednia arytmetyczna to: "<<fixed<<setprecision(2)<<srednia<<endl;
system("pause");
return 0;
}
