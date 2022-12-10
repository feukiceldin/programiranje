#include <iostream>
using namespace std;

int n;
int sum = 0;

int main(int argc, char** argv) {
	
	p: cout << "Unesite prirodan broj: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Unesite prirodan broj." << endl;
		goto p;
	}
	
	int i = 1;
	
	while (i < n){
		if (n % i == 0){
			sum += i;
		} i++;
	}

	if (sum == n){
		cout << "Broj " << n << " je savrsen";
	} else {
		cout << "Broj " << n << " nije savrsen";
	}
	
	return 0;
}
