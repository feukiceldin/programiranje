#include <iostream>

using namespace std;

struct Person {
	string name = "";
	string citizenship = "";
	int age = 0;
	string passportNumber = ""; 
	
	void print(){
		cout << "Name: " << name;
		cout << "\nCitizen of " << citizenship;
		cout << "\nAge: " << age;
		cout << "\nPassport number: " << passportNumber;
	}
};

int main(int argc, char** argv) {
	
	Person persona;
	
	cout << "Unesite ime: ";
	getline(cin, persona.name);
	
	cout << "Unesite drzavljanstvo: ";
	getline(cin, persona.citizenship);
	
	cout << "Unesite broj godina: ";
	cin >> persona.age; cin.clear(); cin.ignore();
	
	cout << "Unesite broj pasosa: ";
	getline(cin, persona.passportNumber);
	
	persona.print();
	
	return 0;
}