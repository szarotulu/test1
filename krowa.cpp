#include <iostream>
#include <cstring>
#include "cow.hpp"

using namespace std;

Cow::Cow()
{
	cout << "Podaj imie:";
	cin.get(name,20);
	cout << endl << "Podaj hobby: ";
	char * temp = new char * [20];
	cin.get(temp,20);
	hobby = new char * [20];
	strcpy(hobby,temp);
	cout << endl;
	cout << "Podaj wage:";
	cin >> Cow::weight;

}
void Cow::ShowCow() const
{

}
