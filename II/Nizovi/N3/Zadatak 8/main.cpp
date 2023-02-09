#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	double sum = 0;
	double raz = 0;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	double arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "A[" << i << "]: ";
		cin >> arr[i];
		sum+= arr[i];
	}
	
	double arit = sum/(double)n;
	
	cout << "Prosjecna vrijednost unesenih brojeva je: " << arit << endl;
	
	raz = abs(arit-arr[0]);
	
	for (int i = 1; i < n; i++){
		if (abs(arit - arr[i]) < raz){
			raz = arit - arr[i];
		}
	}
	
	cout << "Najmanje apsolutno odstupanje od prosjecne vrijednosti unesenih brojeva je: " << raz;
	
	return 0;
}
