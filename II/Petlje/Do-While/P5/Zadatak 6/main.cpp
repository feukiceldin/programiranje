#include <iostream>
using namespace std;

int n;
int i = 1;
int c = 1;
int sum = 0;

int main(int argc, char** argv) {
	
	p: cout << "Unesite do kojeg broja se ispisuju savrseni brojevi: ";
	cin >> n;
	
	if (n <= 0){
		cout << "Neispravan unos." << endl;
		goto p;
	}
	
	do {
		sum = 0;
		c = 1;
		
		while (c < i){
			if (i % c == 0){
				sum += c;
			} c++;
		}
		
		if (sum == i){
			cout << i << " ";
		}		
		
		i++;
		
	} while (i <= n);
		
	return 0;
}
