#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

void unos (int n, int m, int arr[7][7]){
	
	cout << "Unesite elemente matrice: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> arr[i][j]; 
		}
	}
}

void ispis (int n, int m, int arr[7][7]){
	
	cout << "Elementi matrice: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << left << setw(4) << arr[i][j];
		} cout << endl;
	}
}

void pozGD(int n, int m, int arr[7][7]) {
    int count = 0;

    for (int i = 0; i < n && i < m; i++) {
        if (arr[i][i] > 0) {
            count++;
        }
    }

    cout << "Broj pozitivnih elemenata na glavnoj dijagonali: " << count << endl;
}

void maxSD(int n, int m, int arr[7][7]) {
    int maxi = arr[0][m - 1]; 

    for (int i = 0, j = m - 1; i < n && j >= 0; i++, j--) {
		maxi = max(arr[i][j], maxi);        
    }

    cout << "Najveci element na sporednoj dijagonali: " << maxi << endl;
}


void najmanji(int n, int m, int arr[7][7]) {
    int mini = arr[0][0];
    int red = 0;
    int kolona = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < mini) {
                mini = arr[i][j];
                red = i;
                kolona = j;
            }
        }
    }

    cout << "Najmanji element u matrici je: " << mini << endl;
    cout << "Pozicija najmanjeg elementa: Red " << red + 1 << ", Kolona " << kolona + 1 << endl;
}


int main(int argc, char** argv) {
	
	int n, m;
	
	p: cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	if (n < 0 || n > 7 || m < 0 || m > 7){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	int arr[7][7];
	unos(n, m, arr);	
	ispis(n, m, arr);
	pozGD(n, m, arr);
	maxSD(n, m, arr);
	najmanji(n, m, arr);
	
	return 0;
}
