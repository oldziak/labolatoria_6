#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
	/*zadanie 1
	int a = 7;
	int b = 2;
	cout << a / b << "\n";
	cout << static_cast<double>(a) / b << "\n";
	cout << static_cast<double> (a / b);

	//zadanie 2
	double a = -3.99;
	int b = a;
	cout << b << "\n";
	int c = static_cast<int> (a);
	cout << c;

	//zadanie 3
	char znak = 'A';
	cout << static_cast<int> (znak) << "\n";
	int liczba = 66;
	cout << static_cast<char> (liczba) << "\n";

	//zadanie 4
	int x = 3;
	int y = 6;
	cout << static_cast<double> (x + y) / 2;

	//zadanie 5
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

	//zadanie 6
	string text;
	getline(cin, text);
	cout << "Dlugosc ciagu: " << text.length() << endl;

	//zadanie 7
	string text;
	getline(cin, text);
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << text.substr(a, b);

	//zadanie 8
	string date = "2026-11-10";
	cout << date.substr(0, 4) << "\n";
	cout << date.substr(5, 2) << "\n";
	cout << date.substr(8, 2) << "\n";
	//zadanie 9
	string tekst;
	string wyraz;
	cout << "Podaj tekst: ";
	getline(cin, tekst);
	cout << "Podaj wyszukiwany wyraz: ";
	getline(cin, wyraz);
	cout << "wyraz pojawil sie na pozycji: " << tekst.find(wyraz, 0);
	//zadanie 10
	string mail;
	string name;
	string domain;
	getline(cin, mail);

	int n = mail.find("@", 0);
	domain = mail.substr(n);
	name = mail.substr(0, n);

	cout << "Domena: " << domain;
	cout << "\nNazwa uzytkowanika: " << name;

	//zadanie 11
	string name;
	string last_name;

	cout << "Podaj imie: ";
	getline(cin, name);
	cout << "Podaj nazwisko: ";
	getline(cin, last_name);

	string full_name = name + last_name;
	cout << name + last_name << "Dlugosc ciagu: " << full_name.length();
	//zadanie 12
	string text;
	cout << "Podaj liczbe: ";
	getline(cin, text);
	int number = stoi(text);

	cout << number;
	cout << "\nPodwojona wartosc: " << 2 * number;
	cout << "\nWartosc powiekszona o 10: " << number + 10;
	//zadanie 13
	string price;
	cout << "Podaj cene produktu: ";
	getline(cin, price);

	double cost = stod(price);
	cout << cost;

	int expenditure = stoi(price);
	cout << "\n" << expenditure;

	cout << "\nLiczba 5 sztuk produktu: " << 5 * cost;
	//zadanie 14
	string text = "123"; //wynik identyczny
	string text = "123abc"; //wynik zapisuje sie jako 123 bez czesc abc
	string text = "ąbc123"; //błąd programu
	string text = "12.5"; //wynik zapisuje sie jako 12 bez czesci ulamkowej

	int number = stoi(text);
	cout << number;
	//zadanie 15
	string text = "123"
	string text = "ąbc";
	try {
		int number = stoi(text);
		cout << number;
	}
	catch (...){
		cout << "Nieprawidowy zapis";
	}
	//zadanie 16
	string age;
	cout << "Podaj wiek: ";
	getline(cin, age);
	try {
		int number = stoi(age);
		if (number > 0 && number < 150) {
			cout << number << " lat skonwertowane poprawnie";
		}
		else {
			cout << "wiek spoza zakresu";
		}
	}
	catch (...) {
		cout << "Wynik niepoprawnie skonwertowany";
	}
	//zadanie 17 
	string text;
	string age;
	string name;

	cout << "Podaj imie nazwisko;wiek: ";
	getline(cin, text);

	int n = text.find(";", 0);
	age = text.substr(n+1);
	name = text.substr(0, n);

	int years = stoi(age);
	if (years > 0 && years < 150) {
		cout << "Wiek: " << age;
	}
	cout << "\nImie i nazwisko: " << name;
	//zadanie 18*/
	string number = "10 20 30";
	```
	stringstream ss(number);
	int a, b, c;
	ss >> a >> b >> c;
	cout << a + b + c;
	cout << (a + b + c) / 3;
	```

}