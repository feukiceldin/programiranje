#include <iostream>
#include <cmath>

using namespace std;

struct Point {
	double x, y;	
	
	void input() {
		cout << "Unesite x koordinatu: ";
		cin >> x;
		cout << "Unesite y koordinatu: ";
		cin >> y;
	}
	
	void print() {
		cout << "x: " << x;
		cout << "y: " << y;
	}
	
	void distance(Point p) {
		double d = sqrt(pow((x-p.x), 2)+pow((y-p.y), 2));
		cout << "Udaljenost izmedju te dvije tacke je: " << d;
	}
};

int main(int argc, char** argv) {
	
	Point p1, p2;
	p1.input();
	p2.input();	
	
	p1.distance(p2);
	
	return 0;
}