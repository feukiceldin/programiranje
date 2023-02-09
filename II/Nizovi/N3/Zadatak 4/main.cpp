#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int sumP = 0;
	int sumN = 0;
	int i = 0;
	
	int arr[10];
	
	while (i < 10){
		cout << "Unesite A[" << i << "]: ";
		cin >> arr[i];
		i++;
	}
	
	for (int i = 0; i < 10; i++){
		if (arr[i] % 2 == 0){
			sumP+=arr[i];
		} else if (arr[i] % 2 == 1){
			sumN+=arr[i];
		}
	}
	
	cout << "Razlika suma parnih i neparnih clanova niza je: " << (sumP-sumN);
	
	return 0;
}
