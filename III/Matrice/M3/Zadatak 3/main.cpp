#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

	int n;
	
	p: cout << "Unesite n: ";
	cin >> n;
	
	if (n > 20 || n < 0){
		cout << "Prevelike dimenzije!\n";
		goto p;
	}
	
	int arr[n][n];
	
	cout << "Unesite matricu:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	
	cout << "Matrica koju ste unijeli:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << arr[i][j];
		} cout << endl;
	}
	
	int gd[n], sd[n];
	int k = 0, h = 0;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (i == j){
				gd[k] = arr[i][j];
				k++;
			} 
			
			if (i + j == n-1){
				sd[h] = arr[i][j];
				h++;
			}
		}
	}
	
	int gdMax = gd[0];
	int sdMax = sd[0];
	cout << "Glavna dijagonala:\n";
	for (int i = 0; i < n; i++){
		cout << setw(4) << gd[i];
		gdMax = max(gd[i], gdMax);
	}
	
	cout << "\n\nSporedna dijagonala:\n";
	for (int i = 0; i < n; i++){
		cout << setw(4) << sd[i];
		sdMax = max(sd[i], sdMax);
	}
	
	cout << "\nMaksimalni element pripada " << (gdMax > sdMax ? "glavnoj" : gdMax == sdMax ? "glavnoj i sporednoj" : "sporednoj") << " dijagonali.";
	cout << "\nTo je element " << (max(gdMax, sdMax));
	
	return 0;
}
