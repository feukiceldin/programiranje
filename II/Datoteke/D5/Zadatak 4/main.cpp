#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ofstream izlaz;
	int n;
	int i = 0;
	int j = 0;
	string str;
	
	izlaz.open("izlaz.txt");
	
	cout << "Unesite n: ";
	cin >> n;
	
	while (j < n*4){
		cin >> str;
		
		if (i == 0){
			izlaz << str << ";";
		} else if (i % 3 == 0){
			izlaz << str << endl;
			i = -1;
		} else {
			izlaz << str << ";";
		}
		j++;
		i++;
	}
	
	izlaz.close();
	
	return 0;
}
