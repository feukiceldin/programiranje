#include <iostream>
#include <cmath>
using namespace std;

double udaljenost(int x1, int y1, int x2, int y2){
	return (sqrt(pow((x2-x1), 2) + pow((y2-y1), 2)));
}

int main(int argc, char** argv) {
	int x1, x2, y1, y2;
	
	cout << "Unesite koordinate prve tacke: ";
	cin >> x1 >> y1;
	
	cout << "Unesite koordinate prve tacke: ";
	cin >> x2 >> y2;	
	
	cout << "Udaljenost izmedju te dvije tacke je: " << udaljenost(x1, y1, x2, y2);
	
	return 0;
}
