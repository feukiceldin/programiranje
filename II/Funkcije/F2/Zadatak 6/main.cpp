#include <iostream>
using namespace std;

bool paran(int);

int main(int argc, char** argv) {
	
	int n;
	cout << "Unesite n: ";
	cin >> n;
	
	for (int i = 1; i < n; i++){
		if (paran(i)){
			cout << i << " ";
		}
	}
	
	return 0;
}

bool paran(int x){
	return x % 2 == 0;
}
