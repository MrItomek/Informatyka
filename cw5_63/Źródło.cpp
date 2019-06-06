#include <iostream>
#include <string>
using namespace std;
void Wyraz()
{
	string a;
	cin >> a;
	cout << "Ostatnia litera: " << a[a.size() - 1]<< endl;
	cout << "Pierwsza litera: " << a[0] << endl;
}
int main()
{
	cout << "Napisz wyraz"<<endl;
	Wyraz();
	system("pause");
	return 0;
}