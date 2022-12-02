#include <iostream>
using namespace std;

int n;
int i = 50;

int main(int argc, char** argv) {
	
	cout << "Unesite zavrsni broj raspona: ";
	cin >> n;
	
	while (i <= n){
		if (i % 2 == 0){
			cout << i << " ";
		}
		i++;
	}
	
	return 0;
}
