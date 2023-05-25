#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream ulaz;
	ulaz.open("ulaz.txt");
	
	string str;
	
	cout << "Unijeli ste: ";
	while (ulaz.good()){
		string temp;
		getline(ulaz, temp);
		str += temp;
		cout << str;
	}
	
	ulaz.close();
	
	cout << "\nRecenica bez samoglasnika: ";
	
	for (int i = 0; i < str.length(); i++){
		if (!(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u')){
			cout << str[i];
		} else {
			continue;
		}
	}
	
	return 0;
}
