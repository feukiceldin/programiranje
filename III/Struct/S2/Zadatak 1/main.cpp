#include <iostream>

using namespace std;

struct Product {
	int code;
	double price;
	string name;
	
	void input() {
		cout << "Unesite ime proizvoda: ";
		getline(cin, name);
		cout << "Unesite cijenu proizvoda po kg: ";
		cin >> price; cin.ignore();
		cout << "Unesite sifru proizvoda: ";
		cin >> code;
	}
	
	void print() {
		cout << "\nProizvod: " << name << endl;
		cout << "Cijena: " << price << "KM" << endl;
		cout << "Sifra: " << code << endl;
	}
};

int main(int argc, char** argv) {
	
	int n;
	
	cout << "Unesite koliko proizvoda zelite: ";
	cin >> n;	

	Product products[n];
	for (int i = 0; i < n; i++){
		Product temp;
		temp.input();
		products[i] = temp;
	}
	
	for (Product prod : products){
		prod.print();
	}

	return 0;
}