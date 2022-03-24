//Дано літерний рядок, який містить послідовність символів s0, ..., sn, ... .
//1. Вияснити, чи є серед цих символів пара сусідніх букв “SQ” або ”QS”.


#include <iostream>
using namespace std;

bool Include(const char* s, const char* cs)
{
	bool b, r = true;
	for (int i = 0; cs[i] != '\0'; i++)
	{
		b = false;
		for (int j = 0; s[j] != '\0'; j++)
			if (cs[i] == s[j])
			{
				b = true;
				break;
			}
		r = r && b;
	}
	return r;
}

int main()
{
	char s[101];
	cout << "Enter string:" << endl;
	cin.getline(s, 100);
	char cs[] = "SQ";
	cout << "Included groups of 'SQ or QS': ";

	if (Include(s, cs))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	
	return 0;
}
