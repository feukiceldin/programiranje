#include <iostream>

using namespace std;

int main() {
    
	int n;

    cout << "Unesite dimenzije matrice: ";
    cin >> n;

    int A[n][n];
    int B[n][n];

    cout << "Unesite matricu A: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Unesite matricu B: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    int E[n][n]; 
    int O[n][n]; 

    int C[2*n][2*n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
        	if (i == j){
        		E[i][j] = 1;
			} else {
				E[i][j] = 0;
			}
		}
    }
    
    for (int i = 0; i < n; i++){
    	for (int j = 0; j < n; j++){
    		O[i][j] = 0;
		}
	}

    for (int i = 0; i < 2 * n; i++) {
    	for (int j = 0; j < 2 * n; j++) {
	        int Ai = i % n;
	        int Aj = j % n;
	        
			if (i < n && j < n) {
	            C[i][j] = A[Ai][Aj];
	        } else if (i < n && j >= n) {
	            C[i][j] = E[Ai][Aj];
	        } else if (i >= n && j < n) {
	            C[i][j] = O[Ai][Aj];
	        } else {
	            C[i][j] = B[Ai][Aj];
	        }
    }
}

    cout << "Matrica C: \n";
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

