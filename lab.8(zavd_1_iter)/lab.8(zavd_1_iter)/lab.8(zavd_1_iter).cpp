//Дано літерний рядок, який містить послідовність символів s0, ..., sn, ... .
//1. Вияснити, чи є серед цих символів пара сусідніх букв “SQ” або ”QS”.


#include <iostream>
using namespace std;

bool Include(char* s)
{
	bool b = false;
	for (int j = 0; s[j] != '\0'; j++)
		if ((s[j] == 'S') && (s[j+1] == 'Q' || s[j - 1] == 'Q'))
		{
			b = true;	
			break;
		}
	return b;
}

int main()
{
	char s[101];
	cout << "Enter string:" << endl;
	cin.getline(s, 100);
	cout << "Included groups of 'SQ or QS': ";
	if (Include(s))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}
