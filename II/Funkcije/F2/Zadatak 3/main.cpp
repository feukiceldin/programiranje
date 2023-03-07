#include <iostream>
#include <cmath>
using namespace std;

int stepen2 (int);

int main(int argc, char** argv) {
	
	int n;

	cout << "Unesite n: ";
	cin >> n;

	for (int i = 0; i <= n; i++){
		cout << i << " " << stepen2(i) << endl;
	}

	return 0;
}

int stepen2 (int x){
	return pow(x, 2);
}
