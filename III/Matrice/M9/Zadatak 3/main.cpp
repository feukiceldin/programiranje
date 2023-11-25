#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	fstream file("matrix.txt");
	
	int n, m;
	cout << "Unesite n i m: ";
	cin >> n >> m;
	
	file << n << " " << m << "\n";
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			int temp;
			cin >> temp;
			file << to_string(temp) << " ";
		} file << "\n";
	}
	
	file.seekg(0);
	while (!file.eof()){
		string str;
		getline(file, str);
		cout << str << endl;
	}
	
	file.close();
	
	return 0;
}
