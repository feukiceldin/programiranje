#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	int an, am, bn, bm, cn, cm;
	
	cout << "Unesite dimenzije matrice A: ";
	cin >> an >> am;

	int arr[an][am];
	cout << "Unesite matricu A: ";
	for (int i = 0; i < an; i++){
		for (int j = 0; j < am; j++){
			cin >> arr[i][j];
		}	
	}

	cout << "Unesite dimenzije matrice B: ";
	cin >> bn >> bm;
	
	int brr[bn][bm];
	cout << "Unesite matricu B: ";
	for (int i = 0; i < bn; i++){
		for (int j = 0; j < bm; j++){
			cin >> brr[i][j];
		}	
	}
	
	cout << "Unesite dimenzije matrice C: ";
	cin >> cn >> cm;
	
	int crr[cn][cm];
	cout << "Unesite matricu C: ";
	for (int i = 0; i < cn; i++){
		for (int j = 0; j < cm; j++){
			cin >> crr[i][j];
		}	
	}
	
	cout << "Matrica A: \n";
	for (int i = 0; i < an; i++){
		for (int j = 0; j < am; j++){
			cout << setw(4) << arr[i][j];
		} cout << endl;
	}
	
	cout << "Matrica B: \n";
	for (int i = 0; i < bn; i++){
		for (int j = 0; j < bm; j++){
			cout << setw(4) << brr[i][j];
		} cout << endl;
	}
	
	cout << "Matrica C: \n";
	for (int i = 0; i < cn; i++){
		for (int j = 0; j < cm; j++){
			cout << setw(4) << crr[i][j];
		} cout << endl;
	}
	
	int err[am][am];
	for (int i = 0; i < am; i++){
		for (int j = 0; j < am; j++){
			if (i == j){
				err[i][j] = 1;
			} else {
				err[i][j] = 0;
			}
		} 
	}
	
	int err1[an][an];
	for (int i = 0; i < an; i++){
		for (int j = 0; j < an; j++){
			if (i == j){
				err1[i][j] = 1;
			} else {
				err1[i][j] = 0;
			}
		} 
	}
	
	int resB[an][am];
	for (int i = 0; i < an; i++){
		for (int j = 0; j < am; j++){
			resB[i][j] = 0;
			for (int k = 0; k < am; k++){
				resB[i][j] = resB[i][j] + arr[i][k]*err[k][j];
			}
		}
	}
	
	cout << "A*E \n";
	for (int i = 0; i < an; i++){
		for (int j = 0; j < am; j++){
			cout << setw(4) << resB[i][j];
		} cout << endl;
	}
	
	int resB1[an][am];
	for (int i = 0; i < an; i++){
		for (int j = 0; j < am; j++){
			resB1[i][j] = 0;
			for (int k = 0; k < an; k++){
				resB1[i][j] = resB1[i][j] + err1[i][k]*arr[k][j];
			}
		}
	}
	
	cout << "E*A \n";
	for (int i = 0; i < an; i++){
		for (int j = 0; j < am; j++){
			cout << setw(4) << resB1[i][j];
		} cout << endl;
	}
	
	int nul[am][am];
	for (int i = 0; i < am; i++){
		for (int j = 0; j < am; j++){
			nul[i][j] = 0;
		} 
	}
	
	int resC[an][am];
	for (int i = 0; i < an; i++){
		for (int j = 0; j < am; j++){
			resC[i][j] = 0;
			for (int k = 0; k < am; k++){
				resC[i][j] = resC[i][j] + nul[i][k]*arr[k][j];
			}
		}
	}
	
	cout << "A*0 \n";
	for (int i = 0; i < an; i++){
		for (int j = 0; j < am; j++){
			cout << setw(4) << resC[i][j];
		} cout << endl;
	}
	
	if (am != bn || bm != cn){
		cout << "Ne mogu se mnoziti matrice takvih dimenzija";
	} else {
		int resAB[an][cm];
	    for (int i = 0; i < an; i++) {
	        for (int j = 0; j < cm; j++) {
	            resAB[i][j] = 0;
	            for (int k = 0; k < am; k++) {
	                resAB[i][j] += resB[i][k] * crr[k][j];
	            }
	        }
	    }
	
	    int resBC[an][cm];
	    for (int i = 0; i < an; i++) {
	        for (int j = 0; j < cm; j++) {
	            resBC[i][j] = 0;
	            for (int k = 0; k < bm; k++) {
	                resBC[i][j] += arr[i][k] * resB1[k][j];
	            }
	        }
	    }
	
	    cout << "(A*B)*C\n";
	    for (int i = 0; i < an; i++) {
	        for (int j = 0; j < cm; j++) {
	            cout << setw(4) << resAB[i][j];
	        }
	        cout << endl;
	    }
	
	    cout << "A*(B*C)\n";
	    for (int i = 0; i < an; i++) {
	        for (int j = 0; j < cm; j++) {
	            cout << setw(4) << resBC[i][j];
	        }
	        cout << endl;
	    }
	}
	
	int resE1[an][bm];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

	
	
	return 0;
}
