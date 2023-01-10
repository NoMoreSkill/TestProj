#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const int C = 50;
	string a;
	char b[C];
	cout << "Insert string:";
	cin >> a;
	int l = a.length();
	transform(a.begin(), a.end(), a.begin(), tolower);//works ONLY with latin symbols. No ru letters!!!!
	for (int i = 0; i < l; i++)
		for (int j = 0; j < l; j++)
		{
			if (a[i] == a[j] && i != j)
				b[i] = ')';
			if ((j + 1) == l && b[i] != ')')
				b[i] = '(';
		}
	for (int i = 0; i < l; i++)
		cout << b[i];
	return 0;
}