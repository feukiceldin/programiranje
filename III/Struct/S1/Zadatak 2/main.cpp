#include <iostream>

using namespace std;

struct Product {
	double weight;
	double price; 
	
	void print(){
		cout << "\nWeight: " << weight;
		cout << "\nPrice: " << price;
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
	
	jabuka.print();
	dinja.print();
	ananas.print();
	
	return 0;
}