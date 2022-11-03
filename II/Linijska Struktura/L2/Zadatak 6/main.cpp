#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int broj;
int main(int argc, char** argv) {
	
	cout << "Unesite cetverocifreni broj: ";
	cin >> broj;
	
	cout << "Cifra hiljade:  " << broj/1000 << endl;
	cout << "Cifra stotice:  " << (broj/100)%10  << endl;
	cout << "Cifra desetice: " << (broj/10)%10 << endl;
	cout << "Cifra hiljade:  " << broj%10;
	
	return 0;
}
