#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	
	p: cout << "Unesite broj ucenika: ";
	cin >> n;
	
	if (n < 1 || n > 15){
		cout << "Neispravan unos.\n";
		goto p;
	}
	
	cout << "Unesite odgovore svakog ucenika: \n";
	
	char arr[n][5];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			pp: cin >> arr[i][j];
			if (arr[i][j] != 'T' && arr[i][j] != 'F'){
				cout << "Neispravan unos!\n";
				goto pp;
			}
		}
	}
	
	for (int i = 0; i < n; i++){
		int bod = 0;
		for (int j = 0; j < 5; j++){
			bod += arr[i][j] == 'T' ? 5 : 0;
		} cout << "Ucenik " << i+1 << " ima " << bod << " bodova\n";
	}
		
	return 0;
}
