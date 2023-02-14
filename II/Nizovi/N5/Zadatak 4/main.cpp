#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	double minDiff;
	double prvi;
	double drugi;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	double arr[n];
	
	for (int i = 0; i < n; i++){
		cout << "A[" << i << "] = ";
		cin >> arr[i];
	}
	
	prvi = arr[0];
	drugi = arr[1];
	minDiff = abs(prvi-drugi);
	
	for (int i = 1; i < n-1; i++){
		if (minDiff > abs(arr[i] - arr[i+1])){
			minDiff = abs(arr[i] - arr[i+1]);
			prvi = arr[i];
			drugi = arr[i+1];
		}
	}
	
	cout << "Dva susjedna clana sa najmanjom medjusobnom razlikom su: " << prvi << " i " << drugi;
	
	return 0;
}
