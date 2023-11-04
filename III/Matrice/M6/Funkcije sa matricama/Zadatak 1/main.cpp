#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

void unos (int n, int m, int arr[10][10]){
	
	cout << "Unesite elemente matrice: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> arr[i][j]; 
		}
	}
}

void ispis (int n, int m, int arr[10][10]){
	
	cout << "Elementi matrice: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << left << setw(4) << arr[i][j];
		} cout << endl;
	}
}

void sr (int n, int m, int arr[10][10]){
	
	int sum = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			sum += arr[i][j];
		}
	}
	
	cout << "Srednja vrijednost je: " << (sum / (n*m)) << endl;
}

void nule(int n, int m, int arr[10][10]) {
    
	int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                count++;
            }
        }
    }
	
	cout << "Broj nula je: " << count << endl;
}

void jedinice(int n, int m, int arr[10][10]) {

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i][m - 1] == 1) {
            count++;
        }
    }

    cout << "Broj jedinica u posljednjoj koloni je: " << count << endl;
}

void najveci(int n, int m, int arr[10][10]) {
    int maxi = arr[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            maxi = max(maxi, arr[i][j]);
        }
    }

    cout << "Najveci element u matrici je: " << maxi << endl;
}

void najmanji(int n, int m, int arr[10][10]) {
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

void sortiraj(int n, int m, int arr[10][10]) {
    int ukupno = n * m;
    int elements[ukupno] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            elements[i * m + j] = arr[i][j];
        }
    }

    sort(elements, elements + ukupno);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = elements[i * m + j];
        }
    }
}


int main(int argc, char** argv) {
	
	int n, m;
	
	p: cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	if (n < 0 || n > 10 || m < 0 || m > 10){
		cout << "Neispravan unos." << endl;
 		goto p;
	}
	
	int arr[10][10];
	unos(n, m, arr);	
	ispis(n, m, arr);
	sr(n, m, arr);
	nule(n, m, arr);
	jedinice(n, m, arr);
	najveci(n, m, arr);
	najmanji(n, m, arr);
	sortiraj(n, m, arr);
	ispis(n, m, arr);

	return 0;
}
