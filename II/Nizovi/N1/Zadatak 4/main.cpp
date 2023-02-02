#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n, maxi;
	
	p: cout << "Unesite velicinu niza: ";
	cin >> n;
	
	if (n > 10){
		cout << "Velicina niza mora biti <= 10" << endl;
		goto p;
	}
	
	cout << endl;
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "Unesite " << i+1 << ". element: ";
		cin >> arr[i];
		
		if (i == 0){
			maxi = arr[0];
		}
		
		if (arr[i] > maxi){
			maxi = arr[i];
		}
	}
	
	cout << endl << "Najveci element niza je " << maxi;
	
	return 0;
}
