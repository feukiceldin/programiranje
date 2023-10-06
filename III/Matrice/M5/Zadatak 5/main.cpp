#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	
	p: cout << "Unesite broj ucenika: ";
	cin >> n;
	
	if (n < 1 || n > 30){
		cout << "Neispravan unos.\n";
		goto p;
	}
	
	cout << "Unesite ocjene iz testa, projekta i aktivnosti svakog ucenika: \n";
	
	int arr[n][3];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			pp: cin >> arr[i][j];
			if (arr[i][j] > 5 || arr[i][j] < 1){
				cout << "Neispravan unos!\n";
				goto pp;
			}
		}
	}
	
	cout << left << setw(10) << "Ucenik" << setw(10) << "Test" << setw(10) << "Projekat" << setw(10) << "Aktivnost" << setw(10) << "Zakljucno" << setw(10) << "Ocjena" << endl;
	cout << left << setw(10) << "Redni broj" << setw(10) << "30%" << setw(10) << "50%" << setw(10) << "20%" << endl;
	
	for (int i = 0; i < n; i++){
		double sum = 0;
		cout << left << setw(10) << i+1 << setw(10);
		for (int j = 0; j < 3; j++){
			cout << arr[i][j] << setw(10);
			sum += j == 0 ? arr[i][j]*0.3f : j == 1 ? arr[i][j]*0.5f : arr[i][j]*0.2f;
		} cout << (double)(sum) << setw(10) << round(sum) << endl;
	}
		
	return 0;
}
