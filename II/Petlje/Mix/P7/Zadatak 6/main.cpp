#include <iostream>
using namespace std;

double visina , maxi, mini;

int main(int argc, char** argv) {

	cout << "Unesite visinu: ";
	cin >> visina;
	
	maxi = visina;
	mini = visina;
	
	while (visina != 0) {
		cin >> visina;
		
		if (visina == 0){
			break;
		}
		
		if (visina > maxi){
			maxi = visina;
		} 
		if (visina < mini){
			mini = visina;
		} 
		
	}

	cout << "Razlika izmedju najvece i najmanje je: " << maxi-mini;

	return 0;
}
