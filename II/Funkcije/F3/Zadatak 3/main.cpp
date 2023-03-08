#include <iostream>
using namespace std;

int brojiOdNDoM(int n, int m, int b){
	int uk = 0;
	for (int i = n; i < m; i++){
		if (i % b == 0){
			uk++;
		}
	}
	return uk;
}

int main(int argc, char** argv) {
	
	int n, m, b;
	
	p: cout << "Unesite m, n i b: ";
	cin >> n >> m >> b;
	
	if (m < n){
		cout << "Neispravan unos!\n";
		goto p;
	}
	
	printf("U intervalu od %d do %d brojeva djeljivih sa %d ima %d", m, n, b, brojiOdNDoM(n, m, b));
	
	return 0;
}
