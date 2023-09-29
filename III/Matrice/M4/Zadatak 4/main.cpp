#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

	int n;
	
	cout << "Unesite dimenzije matrice: ";
	cin >> n;
	
	int arr[n][n];
	
	cout << "Unesi elemente matrice:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	
	cout << "\nElementi matrice su:\n";
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
            cout << setw(4) << left << arr[i][j];		
		}
		cout << endl;
    }
    
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
    		if (arr[i][j] != arr[j][i]){
    			cout << "\nNije simetricna";
    			return 0;
			}
		}
	}
	
	cout << "\nSimetricna";
		
	return 0;
}
