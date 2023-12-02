#include <iostream>

using namespace std;

struct Complex {
	int x = 0;
	int y = 0;
	
	void input(){
		cout << "Unesite realni dio kompleksnog broja: ";
		cin >> x;
		cout << "Unesite imaginarni dio kompleksnog broja: ";
		cin >> y;
	}	
	
	void complexSum(Complex b){
		x += b.x;
		y += b.y;	
	}	
	
	void print(){
		cout << "Realni dio: " << x << endl;
		cout << "Imaginarni dio " << y << "i";
	}
};

int main(int argc, char** argv) {
	
	Complex a;
	a.input();
	
	Complex b;
	b.input();
	
	a.complexSum(b);
	
	a.print();
	
	return 0;
}