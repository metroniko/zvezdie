#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");



	int numb, tempUnits, tempTeen, tempDozens, tempHundreds;
	string frst, secnd, thrd, frth, pyat, shest; //���������� ��� ������


	string units[] = { "����", "���", "���", "������", "����", "�����", "����", "������", "������" };
	string teen[] = { "�����������", "����������", "����������", "������������", "����������", "�����������", "����������", "������������", "������������" };
	string dozens[] = { "��������", "��������", "�����", "���������", "����������", "���������", "�����������", "���������" };
	string hundreds[] = { "���", "������", "������", "���������", "�������", "��������", "�������", "���������", "���������" };
	string thousand[] = { "���� ������", "��� ������", "��� ������", "������ ������", "���� �����", "����� �����", "���� �����", "������ �����", "������ �����" };
	

	cout << "������� �����: ";
	cin >> numb;

	tempUnits = numb % 10;                 
	tempTeen = (numb % 100) / 10;         
	tempDozens = (numb % 1000) / 100;       
	tempHundreds = (numb % 10000) / 1000;    


	if (numb == 10000)
	{
		cout << "������ �����";
		system("pause");
		return 0;
	}
	if (numb == 10000)
	{
		cout << "������ �����";
		system("pause");
		return 0;
	}


	if (tempUnits != 0 && tempTeen != 1) 
	{
		frst = units[tempUnits - 1];
	}
	else if (tempUnits == 0 && tempTeen == 1) {
		frst = "������";
	} 
	else if (tempUnits == 0 && tempTeen == 0)
	{
		frst = "";
	}	
	if (tempUnits == 1)
	{
		frst = "����";
	}
	if (tempUnits == 2)
	{
		frst = "���";
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
		frst = "����";
	}

	
	if (tempHundreds != 0)
	{
		frth = thousand[tempHundreds - 1];
	}
		

	cout << frth << " " << thrd << " " << secnd << " " << frst << " ";

	system("pause");
	return 0;





}