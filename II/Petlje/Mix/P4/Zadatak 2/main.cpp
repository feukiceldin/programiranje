#include <iostream>
using namespace std;

int n;
double sum = 0;
int i = 1;

int main(int argc, char** argv) {
	
	p: cout << "Unesite vrijednost za N: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Unesite prirodan broj." << endl;
		goto p;
	}
	
	while (i <= n){
		sum += 1.0f/i;
		i++;
	}

	cout << "Suma je: " << sum;
	
	return 0;
}
