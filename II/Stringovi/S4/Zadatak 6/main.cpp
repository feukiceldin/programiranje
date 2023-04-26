#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string str;
	
	cout << "Unesite recenicu: ";
	getline(cin, str);
	
	if (str.find(' ') == -1){
		cout << str;
		return 0;
	}
	
	int i = 0;
	int j = 0;
	int max = 0;
	int maxInd = 0;
	for (i = 0; i < str.length(); i++){
		if (str[i] == ' '){
			if (j > max){
				max = j;
				maxInd = i-j;
			}
			j = 0;			
			continue;
		}
		j++;
	}
	
	if (j > max){
		max = j;
		maxInd = i-j;
	}
	
	cout << str.substr(maxInd, max);
	 
	return 0;
}
