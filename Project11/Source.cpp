#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");



	int numb, tempUnits, tempTeen, tempDozens, tempHundreds;
	string frst, secnd, thrd, frth, pyat, shest; //переменные дл€ целого


	string units[] = { "одна", "две", "три", "четыре", "п€ть", "шесть", "семь", "восемь", "дев€ть" };
	string teen[] = { "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "п€тнадцать", "шестнадцать", "семнадцать", "восемнадцать", "дев€тнадцать" };
	string dozens[] = { "двадцать", "тридцать", "сорок", "п€тьдес€т", "шестьдес€т", "семьдес€т", "восемьдес€т", "дев€носто" };
	string hundreds[] = { "сто", "двести", "триста", "четыреста", "п€тьсот", "шестьсот", "семьсот", "восемьсот", "дев€тьсот" };
	string thousand[] = { "одна тыс€ча", "две тыс€чи", "три тыс€чи", "четыре тыс€чи", "п€ть тыс€ч", "шесть тыс€ч", "семь тыс€ч", "восемь тыс€ч", "дев€ть тыс€ч" };
	

	cout << "¬ведите число: ";
	cin >> numb;

	tempUnits = numb % 10;                 
	tempTeen = (numb % 100) / 10;         
	tempDozens = (numb % 1000) / 100;       
	tempHundreds = (numb % 10000) / 1000;    


	if (numb == 10000)
	{
		cout << "дес€ть тыс€ч";
		system("pause");
		return 0;
	}
	if (numb == 10000)
	{
		cout << "дес€ть тыс€ч";
		system("pause");
		return 0;
	}


	if (tempUnits != 0 && tempTeen != 1) 
	{
		frst = units[tempUnits - 1];
	}
	else if (tempUnits == 0 && tempTeen == 1) {
		frst = "дес€ть";
	} 
	else if (tempUnits == 0 && tempTeen == 0)
	{
		frst = "";
	}	
	if (tempUnits == 1)
	{
		frst = "один";
	}
	if (tempUnits == 2)
	{
		frst = "два";
	}	
	
	if (tempTeen == 0)
	{
		secnd = "";
	}
	else if (tempTeen == 1 && tempUnits != 0) {
		secnd = teen[tempUnits - 1];
		frst = "";
	}	 	
	else if (tempTeen != 1)
	{
		secnd = dozens[tempTeen - 2];
	}


	if (tempDozens != 0)
	{
		thrd = hundreds[tempDozens - 1];
	}	

	if (tempUnits == 0 && tempTeen == 0 && tempDozens == 0) 
	{
		frst = "ноль";
	}

	
	if (tempHundreds != 0)
	{
		frth = thousand[tempHundreds - 1];
	}
		

	cout << frth << " " << thrd << " " << secnd << " " << frst << " ";

	system("pause");
	return 0;





}