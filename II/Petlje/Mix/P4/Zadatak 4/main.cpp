#include <iostream>
using namespace std;

int n;

int main(int argc, char** argv) {
	
	p: cout << "Unesite prirodan broj za n: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	int i = 1;
	int ip = 1;
	int ic = 1;
	int f;
	
	cout << "1 1 ";
		
	for (ic; ic < n-1; ic++){
		
		f = i + ip;
		ip = i;
		i = f;
		
		cout << f << " ";
	}
	
	return 0;
}
