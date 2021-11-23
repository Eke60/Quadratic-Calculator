#include <iostream>
#include <cwchar>
#include <Windows.h>
using namespace std;
int main() {
	system("COLOR 70");
	int var1;
	int var2;
	int var3;
	cout << "Enter three variables: "<<endl;
	cout << "a = ";
	cin >> var1;
	cout << "b = ";
	cin >> var2;
	cout << "c = ";
	cin >> var3;
	if (var1 == 0) {
		cout << "Error, a has to be bigger than 0. "<<endl;
	}
	if ((var2 ^ 2) - (4 * var1 * var3) <= 0) {
		cout << "Error, the square root is negative. "<<endl;

	}
	if ((var2 ^ 2) - (4 * var1 * var3) >= 0 && var1 != 0) {
		cout << (-var2 + sqrt((var2 ^ 2) - (4 * var1 * var3))) / (2 * var1);
		cout << ", ";
		cout << (-var2 - sqrt((var2 ^ 2) - (4 * var1 * var3))) / (2 * var1);
		cout << "\n";
	}
	system("pause");
	

	return 0;
}