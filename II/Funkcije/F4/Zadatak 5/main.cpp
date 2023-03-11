#include <iostream>
using namespace std;

void ispisiSumu(int n);

int main(int argc, char** argv) {

	int n;

	cout << "Unesite dokle zelite sumu: ";
	cin >> n;

	ispisiSumu(n);	
	
	return 0;
}

void ispisiSumu(int n){
	double sum = 0;
	for (double i = 1; i <= n; i++){
		sum += 1/i;
	} cout << "Suma je: " << sum;
}
