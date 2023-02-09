#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int sum;
	int i = 0;
	
	cout << "Unesite broj elemenata niza: ";
	cin >> n;
	
	int arr[n];
	
	while (i < n){
		cout << "Unesite A[" << i << "]: ";
		cin >> arr[i];
		i++;
	}
	
	cout << "Clanovi niza cija je suma parna: " << endl;
	
	for (int i = 0; i < n-1; i++){
		if ((arr[i] + arr[i+1]) % 2 ==0){
			cout << arr[i] << " " << arr[i+1];
		}
	}
	
	return 0;
}
