#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	int n;
	int uk = 0;
	int sum = 0;
	
	cout << "Unesite n: ";
	cin >> n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "A[" << i << "]: ";
		cin >> arr[i];
		sum += arr[i];
	}
	
	double ar = (double)sum/(double)n;
	
	cout << "Aritmeticka sredina niza: " << ar << endl;
	
	sum = 0;
	
	for (int i = 0; i < n; i++){
		if (arr[i] < ar){
			sum+=arr[i];
			uk++;
		}
	} 
	
	cout << "Aritmeticka sredina clanova manjih od aritmeticke sredine svih clanova je: " << (double)sum/(double)uk;
	
	return 0;
}
