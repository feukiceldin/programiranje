#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int n, m;
	
	p: cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	int arr[n][m];
	
	if (n != m){
		cout << "Potrebna je kvadratna matrica\n";
		goto p;
	}
	
	cout << "Unesite elemente matrice: \n";
	pp: for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}
	
	int visePob = 0;
	int bezPor = 0;
	
	for (int i = 0; i < n; i++){
		int pob = 0;
		int por = 0;
		for (int j = 0; j < n; j++){
			if ((arr[i][j] == 2 && arr[j][i] != 0) || (arr[i][j] == 0 && arr[j][i] != 2) || (arr[i][j] == 1 && arr[j][i] != 1)){
				cout << "Neispravan je unos.";
				goto pp;
			}
			
			if (arr[i][j] == 2){
				pob++;
			}
			if (arr[i][j] == 0){
				por++;
			}
		} 
		
		if (pob > por){
			visePob++;
		}
		
		if (por == 0){
			bezPor++;
		}
	}
	
	cout << "Ekipa sa vise pobjeda ima: " << visePob;
	cout << "\nEkipa sa 0 poraza ima: " << bezPor;
	
	return 0;
}