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
	
	void input(){
		cout << "Unesite ime: ";
		getline(cin, name);
	
		cout << "Unesite drzavljanstvo: ";
		getline(cin, citizenship);
	
		cout << "Unesite broj godina: ";
		cin >> age; cin.clear(); cin.ignore();
	
		cout << "Unesite broj pasosa: ";
		getline(cin, passportNumber);
	}
};

int main(int argc, char** argv) {
	
	Person persona;
	
	persona.input();
	persona.print();
	
	return 0;
}