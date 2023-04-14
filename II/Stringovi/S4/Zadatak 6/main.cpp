#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	cout << "Unesite recenicu: ";
	getline(cin, str);
	
	int j = 0;
	int max = 0;
	int maxInd = 0;
	for (int i = 0; i < str.length(); i++){
		if (str[i] == ' ' || i == str.length()-1){
			if (j > max){
				max = j;
				maxInd = i-j;
			}
			j = 0;			
		}
		j++;
	}
	
	cout << str.substr(maxInd+1, max);

	return 0;
}
