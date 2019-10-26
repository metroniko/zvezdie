#include <iostream>

using namespace std;

void main() {
	char pas[19];
	char spec[9] = { '~', '!' ,'@', '#' ,'$', '%' ,'^' ,'&', '*' };
	bool flag = false;
	bool flag1 = false;
	bool flag2 = false;
	bool flag3 = false;
	int i = 0;
	char a = 'a';
	cout << "input password: ";
	cin >> pas;
	string pasword = (string)pas;
	
	if (pasword.length() < 8 )
	{
		cout << "pasword mast be longer";
		system("pause");
		return;
	}
	for (int j = 0; j < 9; j++)
	{
		if ((int)spec[j] == (int)pasword[0] || ((int)pasword[i] > 47 && (int)pasword[i] < 58))
		{
			cout << "Something going wrong ";
			system("pause");

			return;
		}
	}
	for (int i = 0; i < pasword.length(); i++)
	{
		

		if (((int)pasword[i] > 47 && (int)pasword[i] < 58))
		{
			flag = true;
			continue;
		}
		if ((int)pasword[i] >= 65 && (int)pasword[i] < 91)
		{
			flag1 = true;
			continue;
		}
		if ((int)pasword[i] > 96 && (int)pasword[i] < 123)
		{
			flag3 = true;
			continue;
		}

		for (int j = 0; j < 9; j++)
		{
			if ((int)spec[j] == (int)pasword[i])
			{
				flag2 = true;
				break;
			}
		}
		break;
	}
	if (flag && flag1 && flag2 && flag3)
	{
		cout << "all right ";
	}
	else
	{
		cout << "Something going wrong ";
	}
	system("pause");
}

