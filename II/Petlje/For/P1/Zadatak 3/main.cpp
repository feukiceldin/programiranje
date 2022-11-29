#include <iostream>
using namespace std;

int n;

int main(int argc, char** argv) {

	cout << "Unesite zavrsni broj raspona: ";
	cin >> n;
	
	cout << "Ispis parnih brojeva od 50 do " << n << ":" << endl;
	for (int i = 50; i <= n; i++){
		if (i % 2 == 0){
			cout << i << " ";
		}
	}

	return 0;
}
