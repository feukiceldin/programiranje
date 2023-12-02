#include <iostream>

using namespace std;

struct Product {
	double weight;
	double price; 
	
	void print(){
		cout << "\nWeight: " << weight;
		cout << "\nPrice: " << price << "\n\n";
	}
	
	void input(){
		cout << "Unesite tezinu: ";
		cin >> weight;
		cout << "Unesite cijenu: ";
		cin >> price;
	}
};

int main(int argc, char** argv) {
	
	Product jabuka;
	Product dinja;
	Product ananas;
	
	jabuka.input();
	dinja.input();
	ananas.input();
	
	cout << "Jabuka: ";
	jabuka.print();
	cout << "Dinja: ";
	dinja.print();
	cout << "Ananas: ";
	ananas.print();
	
	return 0;
}