#include <iostream>
using namespace std;

int n;
int broj;
int pSum = 0;
int nSum = 0;

int main(int argc, char** argv) {
	
	p: cout << "Unesite pozitivan cijeli broj: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Neispravan broj." << endl;
		goto p;
	}
	
	int i = 1;
	
	while (i <= n){
		cin >> broj;
		if (broj > 0){
			pSum += broj;
		} else {
			nSum += broj;
		} i++;
	}
	
	cout << "Suma pozitivnih brojeva: " << pSum << endl;
	cout << "Suma negativnih brojeva: " << nSum;
	
	return 0;
}
