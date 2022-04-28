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
	int n,x,y;
	cout<<"Podaj sume cyfr: ";
	n=0;
	cin>>x;
	system("pause");
	system("cls");
	for(int i=1;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			for(int k=0;k<=9;k++)
			{
			if(i+j+k==x)
			{
			y=i*100+j*10+k;
			cout<<y<<"|";
			n++;
			}
}}}
	cout<<endl<<"Suma tych cyfr: "<<n<<endl;

	system("pause");
	system("cls");


}
