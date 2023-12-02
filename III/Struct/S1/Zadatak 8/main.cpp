#include <iostream>

using namespace std;

struct Time {
	int h = 0;
	int m = 0;
	int s = 0;
	
	void calculateTimeDiff(Time t){
		cout << "Vremenska razlika je: " << abs((h*3600)+m*60+s - ((t.h*3600)+t.m*60+t.s)) << "s";
	}
};

int main(int argc, char** argv) {
	
	Time t1, t2;
	
	cout << "Unesite pocetno vrijeme (h, m, s): ";
	cin >> t1.h >> t1.m >> t1.s;
	
	cout << "Unesite zavrsno vrijeme (h, m, s): ";
	cin >> t2.h >> t2.m >> t2.s;

	t1.calculateTimeDiff(t2);

	return 0;
}
