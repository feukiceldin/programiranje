#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

	int n;
	
	cout << "Unesite dimenzije matrice: ";
	cin >> n;
	
	int arr[n][n];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = i == j ? 0 : i < j ? 1 : -1;
		}
	}
	
	cout << "Elementi matrice su:\n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
            cout << setw(4) << left << arr[i][j];		
		}
		cout << endl;
    }
		
	return 0;
}

