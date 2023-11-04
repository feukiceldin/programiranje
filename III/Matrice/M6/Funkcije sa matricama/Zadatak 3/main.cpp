#include <iostream>
#include <iomanip>

using namespace std;

void unos(int matrica[35][15], int redovi, int kolone) {
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            cout << "Ocjena ucenika " << i + 1 << " za predmet " << j + 1 << ": ";
            cin >> matrica[i][j];
        }
    }
}

void ispis(int matrica[35][15], int redovi, int kolone) {
    for (int i = 0; i < redovi; i++) {
        cout << "Ocjene ucenika " << i + 1 << ": ";
        for (int j = 0; j < kolone; j++) {
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }
}

void sr(int matrica[35][15], int redovi, int kolone) {
    int suma = 0;
    int brojElemenata = redovi * kolone;

    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            suma += matrica[i][j];
        }
    }

    cout << "Srednja vrijednost: " << (double)suma / brojElemenata << endl;
}

void nule(int matrica[35][15], int redovi, int kolone) {
    int count = 0;

    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            if (matrica[i][j] == 0) {
                count++;
            }
        }
    }

    cout << "Broj nula u matrici: " << count << endl;
}

void jedinice(int matrica[35][15], int redovi, int kolone) {
    int brojJedinica[15] = {0}; 

    for (int j = 0; j < kolone; j++) {
        for (int i = 0; i < redovi; i++) {
            if (matrica[i][j] == 1) {
                brojJedinica[j]++;
            }
        }
    }

    for (int j = 0; j < kolone; j++) {
        cout << "Kolona " << j + 1 << " ima " << brojJedinica[j] << " jedinica" << endl;
    }
}

void maxPonavljanja(int matrica[35][15], int redovi, int kolone) {
    int najveci = matrica[0][0];
    int brojPojavljivanja = 0;

    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            if (matrica[i][j] > najveci) {
                najveci = matrica[i][j];
            }
        }
    }

    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            if (matrica[i][j] == najveci) {
                brojPojavljivanja++;
            }
        }
    }

    cout << "Najveci broj se ponavlja " << brojPojavljivanja << " puta" << endl;
}

int main(int argc, char** argv) {
	
	int redovi, kolone;
	
	p:
	cout << "Unesite broj redova (do 35): ";
    cin >> redovi;
    cout << "Unesite broj kolona (do 15): ";
    cin >> kolone;
	
	if (redovi > 35 || redovi < 0 || kolone > 15 || kolone < 0){
		cout << "Neispravan unos.\n";
		goto p;
	}
	
	int arr[35][15];
	
	unos(arr, redovi, kolone);
	ispis(arr, redovi, kolone);
	sr(arr, redovi, kolone);
	nule(arr, redovi, kolone);
	jedinice(arr, redovi, kolone);
	maxPonavljanja(arr, redovi, kolone);
	
	return 0;
}
