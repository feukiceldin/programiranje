#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int ind;
	double max;	
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	double arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "A[" << i << "] = ";
		cin >> arr[i];
	}
	
	max = arr[0];
	
	for (int i = 1; i < n; i++){
		if (max < arr[i]){
			max = arr[i];
			ind = i;
		}
	}
	
	cout << "Najveci element niza je: " << max << endl;
	if (ind == 0){
		cout << "Susjedni clanovi najveceg elementa niza su: " << arr[ind+1];
	} else if (ind == n-1){
		cout << "Susjedni clanovi najveceg elementa niza su: " << arr[ind-1];
	} else {
		cout << "Susjedni clanovi najveceg elementa niza su: " << arr[ind-1]<< " i " << arr[ind+1];
	}
	
	return 0;
}
