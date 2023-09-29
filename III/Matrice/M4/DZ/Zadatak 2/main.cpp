#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	double a, b, c, d, e, f;

	cout << "Program za rjesavanje sistema jednacina u formi:\nax + by = e\ncx + dy = f\n";
	cout << "Unesite a, b, c, d, e, f: ";
	
	cin >> a >> b >> c >> d >> e >> f;
	
	double dd = a*d - b*c;
	
	if (dd == 0){
		cout << "Nema rjesenja";
	} else {
		double dx = e*d - b*f;
		double dy = a*f - e*c;
		
		double x = dx / dd;
		double y = dy / dd;
		
	    cout << "Rjesenje sistema jednacina je x = " << x << " i y = " << y;	
	}
	
	return 0;
}
