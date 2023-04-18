#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	cout << "Unesite recenicu: ";
	cin >> str;
	
	int j = 0;
	int max = 0;
	char maxC;
	
	for (int i = 0; i < str.length()-1; i++){
		if (str[i+1] != str[i]){
			if (j > max){
				max = j;
				maxC = str[i];
			} j = 0;
		} j++;
	}
	
	string strr = "";
	strr.assign(max, maxC);
	cout << "Najduzi niz ponavljajucih karaktera je duzine: " << max << endl;
	cout << "To je string: \"" << strr << "\"";
	
	return 0;
}
