#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sekunde;

int main(int argc, char** argv) {
	
	cout << "Unesi vrijeme u sekundama: ";
	cin >> sekunde;
	
	cout << sekunde << " sekundi je " << sekunde/3600 << " sati, " << (sekunde%3600)/60 << " minuta i " << sekunde%60 << " sekundi.";
	
	return 0;
}
