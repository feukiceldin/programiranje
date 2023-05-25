#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	int k;
	string str;
	ifstream ulaz;
	ulaz.open("ulaz.txt");
	
	cout << "Unesite k: ";
	cin >> k;	
	
	while (ulaz.good()){
		getline(ulaz, str);
		if (str.length() > k){
			cout << str << endl;
		}
	}
	
	ulaz.close();
	
	return 0;
}
