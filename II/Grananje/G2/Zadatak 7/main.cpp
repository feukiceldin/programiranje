#include <iostream>
using namespace std;

float a, b, c, maxi, mini, midi;

int main(int argc, char** argv) {
	
	cout << "Unesite tri pozitivna i razlicita broja: ";
	cin >> a >> b >> c;
	
	maxi = a;
	
	if (b > maxi && b > c){
		maxi = b;
	} else if (c > maxi && c > b) {
		maxi = c;
	}
	
	mini = b;
	
	if (a < mini && a < c){
		mini = a;
	} else if (c < mini && c < b){
		mini = c;
	} 
	
	midi = c;
	
	if (b > mini && b < maxi){
		midi = b;
	} else if (a > mini && a < maxi){
		midi = a;
	}
	
	cout << "Konacan rezultat je: " << (maxi-mini)/midi;
	
	return 0;
}
