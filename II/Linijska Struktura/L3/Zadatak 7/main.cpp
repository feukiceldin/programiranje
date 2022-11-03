#include <iostream>
using namespace std;

int broj, prvi, drugi, treci, cetvrti;

int main(int argc, char** argv) {
	
	cout << "Unesite cetverocifreni broj: ";
	cin >> broj;
	
	prvi = (broj/1000);
	drugi = ((broj/100)%10);
	treci = (broj/10)%10;
	cetvrti = (broj%10);
	
	cout << "Proizvod cifara je: " << prvi*drugi*treci*cetvrti << endl;
	cout << "Razlika sume krajnjih i srednjih cifara je: " << (prvi+cetvrti)-(drugi+treci) << endl;
	cout << "Suma kvadrata cifara je: " << prvi*prvi+drugi*drugi+treci*treci+cetvrti*cetvrti << endl;
	cout << "Broj koji se dobije ispisom cifara u obrnutom redoslijedu je: " << cetvrti << treci << drugi << prvi << endl;
	cout << "Broj poslije zamjene cifre stotice i jedinice je: " << prvi << cetvrti << treci << drugi;
	
	return 0;
}
