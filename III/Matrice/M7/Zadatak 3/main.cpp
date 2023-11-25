#include <iostream>
#include <iomanip>

using namespace std;

const int studenti = 40;
const int rezultati = 14;

int labScores[studenti][rezultati];

void InsertLabScores() {
    for (int i = 0; i < studenti; i++) {
        cout << "Unesite laboratorijske rezultate za studenta " << i + 1 << ":\n";
        for (int j = 0; j < rezultati; j++) {
            cin >> labScores[i][j];
        }
    }
}

void printLabScores() {
    cout << "Tabela rezultata:" << endl;
    for (int i = 0; i < studenti; i++) {
        cout << "Student " << i + 1 << ": \n";
        for (int j = 0; j < rezultati; j++) {
            cout << setw(4) << labScores[i][j];
        } cout << endl;
    }
}

void StudentAvg() {
    cout << "Laboratorijski prosjek za svakog ucenika:\n";
    for (int i = 0; i < studenti; i++) {
        double sum = 0.0;
        for (int j = 0; j < rezultati; j++) {
            sum += labScores[i][j];
        }
        double avg = sum / rezultati;
        cout << "Student " << i + 1 << ": " << avg << endl;
    }
}

int main() {
    InsertLabScores();
    printLabScores();
    StudentAvg();

    return 0;
}

