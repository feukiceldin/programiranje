#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int n, m;
	
	p: cout << "Unesite dimenzije matrice: ";
	cin >> n >> m;
	
	if (n < 1 || n > 4 || m < 1 || m > 8){
		cout << "Neispravan unos.\n";
		goto p;
	}
	
	cout << "Unesite elemente matrice: \n";
	
	int arr[n][m];
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			count += arr[i][j] > 0;
		}
	}
	
	int pos[count];
	int k = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] > 0){
				pos[k++] = arr[i][j];
			}	
		}
	}
	
	sort(pos, pos + count);
	
	cout << "Pozitivni elementi u novom nizu:\n";
	for (int i = 0; i < count; i++){
		cout << setw(4) << pos[i];
	}
		
	return 0;
}