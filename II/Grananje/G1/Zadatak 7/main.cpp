#include <iostream>
#include <cmath>
using namespace std;

int broj;

int main(int argc, char** argv) {
	
	cout << "Unesi cijeli broj: ";
	cin >> broj;
	
	if (broj%2==0){
		cout << "Broj " << broj << " je paran, njegova treca potencija iznosi: " << pow(broj,3);
	}
	
	if (broj%2!=0){
		cout << "Broj " << broj << " je neparan, njegova apsolutna vrijednost iznosi: " << abs(broj);
	}
	
	return 0;
}
