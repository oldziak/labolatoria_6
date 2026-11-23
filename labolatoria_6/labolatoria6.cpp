#include <iostream>
#include <string>
using namespace std;
int main() {
	/*zadanie 1
	int a = 7; 
	int b = 2;
	cout << a / b << "\n";
	cout << static_cast<double>(a) / b << "\n";
	cout << static_cast<double> (a / b);

	zadanie 2
	double a = -3.99;
	int b = a;
	cout << b << "\n";
	int c = static_cast<int> (a);
	cout << c;

	zadanie 3 
	char znak = 'A';
	cout << static_cast<int> (znak) << "\n";
	int liczba = 66;
	cout << static_cast<char> (liczba) << "\n";

	zadanie 4 
	int x = 3;
	int y = 6;
	cout << static_cast<double> (x + y) / 2;
	
	zadanie 5
	int dz = 0;
	int z = 0;
	cout << "Podaj liczbe zadan do wykonania: ";
	cin >> dz;
	if (dz == 0)
		cout << "Zla odpowiedz \n";
	else {
		cout << "Podaj liczbe zadan zrobionych: ";
		cin >> z;
		cout << static_cast <double> (z) / dz * 100 << "%";
	}

	zadanie 6
	string text;
	getline(cin, text);
	cout << "Dlugosc ciagu: " << text.length() << endl;

	zadanie 7 
	string text; 
	getline(cin, text);
	int a;
	int b;
	cin >> a;
	cin >> b; 
	cout << text.substr(a, b);

	zadanie 8*/
	string date = "2026-11-10";
	cout << date.substr(0, 4) << "\n";
	cout << date.substr(5, 2) << "\n";
	cout << date.substr(8, 2) << "\n";
}