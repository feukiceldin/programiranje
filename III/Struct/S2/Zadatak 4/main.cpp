#include <iostream>

using namespace std;

struct Time {
	int h, m, s;
	
	void input() {
		cout << "Unesite sate: ";
		cin >> h;
		cout << "Unesite minute: ";
		cin >> m;
		cout << "Unesite sekunde: ";
		cin >> s;
	}
	
	void print() {
		cout << h << "h " << m << "m " << s << "s \n";
	}
	
	void addTime(Time t){
		int hh = (h + t.h + ((t.m+m)/60))%24;
		int mm = (m + t.m)%60 + ((t.s+s)/60);
		int ss = (s + t.s)%60;
		
		Time res = {hh, mm, ss};
		res.print();
	}
};

int main(int argc, char** argv) {
	
	Time t1, t2;
	t1.input();
	t2.input();

	t1.addTime(t2);

	return 0;
}