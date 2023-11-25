#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int n, m;
	
	cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	int arr[n][m];
	cout << "Unesite elemente matrice: \n";
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}
	
	cout << "Vozila koja imaju sve kvarove: ";
	for (int i = 0; i < n; i++){
		int count = 0;
		for (int j = 0; j < m; j++){
			count += arr[i][j];
		}
		
		if (count == m){
			cout << i + 1 << ". ";
		}
	}
	
	int k;
	cout << "\nUnesite k: ";
	cin >> k;
	
	cout << "Vozila sa k kvarova: ";
	int maxi = 0;
	int brojKvara = 0;
	int broj = 0;
	for (int i = 0; i < m; i++){
		int count = 0;
		for (int j = 0; j < n; j++){
			count += arr[j][i];
		}
		
		if (count > maxi){
			maxi = count;
			brojKvara = i;
		}		
		
		if (count == k){
			cout << i + 1 << ". ";
			broj++;
		} 
	}
	
	cout << "\nNajcesci kvar je " << brojKvara + 1 << ".";
	
	return 0;
}