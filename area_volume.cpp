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
	int x;
	cout << "Wybierz jakiej fugry chcesz obliczyc pole i obwod"<<endl;
	system ("pause");
	system ("cls");
	cout <<"1-kwadrat";
	cout<<endl <<"2-prostokat";
	cout<<endl <<"3-trojkat";
	cout<<endl <<"4-romb";
	cout<<"Wybierz numer od 1-4: ";;
	cin>>x;
	system("cls");
	switch (x)
	{

	case 1:
	{
		float a;
		cout<<"Podaj nastepujace zmienne: "<<endl;
		cout<<"podaj 1 bok: ";
		cin>>a;
		cout<<endl<<"Pole wynosi:"<<a*a;
		cout<<endl<<"Obwod wynosi: "<<a*3<<endl;
		system ("pause");
		break;
	}
	case 2:
	{
		float a,b;
		cout<<"Podaj nastepujace zmienne: "<<endl;
		cout<<"podaj 1 bok: ";
		cin>>a;
		cout<<endl<<"podaj 2 bok: ";
		cin>>b;
		cout<<endl<<"Pole wynosi:"<<a*b;
		cout<<endl<<"Obwod wynosi: "<<a*2+b*2<<endl;
		system ("pause");
		break;
	}
	case 3:
	{
		float a,b,c,h;
		cout<<"Podaj nastepujace zmienne: "<<endl;
		cout<<"podaj 1 bok: ";
		cin>>a;
		cout<<endl<<"podaj 2 bok: ";
		cin>>b;
		cout<<endl<<"podaj 3 bok: ";
		cin>>c;
		cout<<endl<<"podaj wysokosc: ";
		cin>>h;
		cout<<endl<<"Pole wynosi:"<<a*h/2.0;
		cout<<endl<<"Obwod wynosi: "<<a+b+c<<endl;
		system ("pause");
		break;
	}
	case 4:
	{
		float a,e,f;
		cout<<"Podaj nastepujace zmienne: "<<endl;
		cout<<"podaj 1 bok: ";
		cin>>a;
		cout<<endl<<"podaj 1 przekatna: ";
		cin>>e;
		cout<<endl<<"podaj 2 przekatna: ";
		cin>>f;
		cout<<endl<<"Pole wynosi:"<<e*f/2.0;
		cout<<endl<<"Obwod wynosi: "<<a*4<<endl;
		system ("pause");
		break;
	}
		
	default: 
	{
		cout<<"Wpisz liczbe z menu!";
	}
	}
	return 0;
}
