#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;

    cout << "Unesite dimenzije matrice: ";
    cin >> n >> m;

    int arr[n][m];

    cout << "Unesite elemente matrice: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrica A:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << arr[i][j];
        } cout << endl;
    }

    cout << "Transponovana matrica: " << endl;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            cout << setw(4) << arr[i][j];
        } cout << endl;
    }

    int E[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            E[i][j] = 0;
            for (int k = 0; k < m; k++) {
                E[i][j] += arr[i][k] * arr[j][k];
            }
        }
    }

    cout << "Matrica E:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << E[i][j];
        } cout << endl;
    }

    return 0;
}

