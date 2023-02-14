#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int uk;
	int ind;
	bool nula = true;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	double arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "A[" << i << "] = ";
		cin >> arr[i];
		
		if (arr[i] == 0 && nula){
			ind = i;
			nula = false;
		}
	}

	uk = n - ind - 1;

	cout << "U unesenom nizu poslije prve nule ima " << uk << " elemenata";
	
	return 0;
}
