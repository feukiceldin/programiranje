#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int i = 0;
	int sum = 0;
	int uk = 0;
	int n;
	
	p: cout << "Unesite broj elemenata niza: ";
	cin >> n;
	
	if (n > 10){
		cout << "Prevelik niz." << endl;
		goto p;
	}
	
	int arr[n];
	
	while (i < n){
		cout << "Unesite A[" << i << "]: ";
		cin >> arr[i];
		i++;
	}
	
	for (int i = 0; i < n; i++){
		if (arr[i] % 7 == 0){
			sum+=arr[i];
			uk++;
		} 
	}
	
	cout << "Suma elemenata niza djeljivih sa 7: " << sum << endl;
	cout << "Njihov ukupan broj je: " << uk;
	
	return 0;
}
