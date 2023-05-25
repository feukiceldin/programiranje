#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	ifstream ulaz;
	ulaz.open("ulaz.txt");
	
	int samo = 0;
	int sugl = 0;
	
	cout << "Unijeli ste: ";
	while (!ulaz.eof()){
		string str;
		getline(ulaz, str);
		cout << str;
		for (int i = 0; i < str.length(); i++){
			if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u'){
				samo++;
			} else if (tolower(str[i]) >= 97 && tolower(str[i]) <= 122){
				sugl++;
			}
		}
	}
	
	ulaz.close();
	
	printf("\nUnesena recenica ima %d samoglasnika i %d suglasnika", samo, sugl);
	
	return 0;
}
