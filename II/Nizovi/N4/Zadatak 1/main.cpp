#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {

	int i, n;
	
	cout << "Unesite dimenzije niza: ";
	cin >> n;
	
	int arr[n];
	
	srand(time(0));
	for (int i = 0; i < n; i++){
		arr[i] = rand()%20;	
	}	

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

	return 0;
}
