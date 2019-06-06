#include <iostream>
#include <string.h>
#define N 20
using namespace std;
int main()
{
	cout << "podaj ilosc wyrazow" << endl;
	int j;
	cin >> j;
	for  (int k = 0; k < j;k++ )
	{
		cout << "\npodaj wyraz" << endl;
		unsigned short dlugosc;
		char napis[N + 1];
		int i;
		cin >> napis;
		dlugosc = strlen(napis);
		for (i = dlugosc - 1; i >= 0; i--)
		{
			cout << napis[i];
		}

	}
	system("pause");
	return 0;
}