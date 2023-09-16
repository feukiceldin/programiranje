#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{ /* NAPRAVITI JEDNODIMENZIONALNI NIZ CIJELIH BROJEVA SA MAKSIMALNO DESET
 ELEMENATA UNIJETI ELEMN. ISPISATI NIZ ISPISATI MINAMALAN I MAKSIMALAN ELEMENT 
 NIZA I ISPISATI SUMU I PROIZVOD ELEMENATA NIZA */

	int broj;
	q: cin >> broj;
	
	if(broj > 10 || broj < 0) {
		goto q;
	}
	
	int arr[broj];
	
	cin >> arr[0];
	int max = arr[0];
	int min = arr[0];
	int suma = arr[0];
	int proizvod = arr[0];
	
	for(int i = 1; i < broj; i++) {
		cin >> arr[i];
		
		if(arr[i] > max) {
			max = arr[i];
		} // maxi = max(arr[i], maxi);
		
		if(arr[i] < min) {
			min = arr[i];
		}
		
		suma += arr[i];
		proizvod *= arr[i];
	}
	
	cout << "\nMaksimalan broj je: " << max << endl;
	cout << "Minimalan broj je: " << min << endl;
	cout << "Suma jednodimenzionalnog niza je: " << suma << endl;
	cout << "Proizvod jednodimenzionalnog niza je: " << proizvod << endl;
	
	// sort(arr, arr+broj);
	
	for(int i = 0; i < broj; i++) {
		for(int j = i + 1; j < broj; j++) {
			if(arr[j] < arr[i]) {
				swap(arr[j],arr[i]);
			}
		}
	} 
	
	for(int i = 0; i < broj; i++) {
		cout << arr[i] << setw(3);
	}
	
	return 0;
}

