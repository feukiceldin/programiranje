#include <iostream>
using namespace std;

bool prost (int broj){
	if (broj == 1 || broj == 2){
		return true;
	}
	for (int i = 2; i < broj; i++){
		if (broj % i == 0){
			return false;
		}
	} return true;
}

int main(int argc, char** argv) {
	int n;
	
	cout << "Unesite n: ";
	cin >> n;
	
	for (int i = 1; i < n; i++){
		if (prost(i)){
			cout << i << " ";
		}
	}
	
	return 0;
}
