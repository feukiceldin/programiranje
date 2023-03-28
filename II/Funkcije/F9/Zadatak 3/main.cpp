#include <iostream>
using namespace std;

void unesiNiz(float arr[], int n){
	cout << "Unesite niz: " << endl;
	for (int i = 0; i < n; i++){
		cout << "Niz[" << i << "]: ";
		cin >> arr[i];
	}
}

void ispisiNiz(float arr[], int n){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}

void as(float arrA[], float arrB[], float arrC[], int n){
	for (int i = 0; i < n; i++){
		arrC[i] = (arrA[i] + arrB[i])/2;
	}
}

int main(int argc, char** argv) {
	int n;
	
	p: cout << "Unesite dimenzije niza: ";
	cin >> n;
		
	if (n > 30){
		cout << "Unesite manju dimenziju niza!" << endl;
		goto p;
	}
		
	float arrA[n];
	float arrB[n];
	
	unesiNiz(arrA, n);
	unesiNiz(arrB, n);
	
	float arrC[n];
	
	as(arrA, arrB, arrC, n);
	
	cout << "Treci niz: " << endl;
	ispisiNiz(arrC, n);

	return 0;
}
