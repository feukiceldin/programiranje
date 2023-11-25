#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	fstream file;
	file.open("input.txt");
	
	int n, m;
	
	file >> n >> m;
	
	char arr[n][m];
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			file >> arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << arr[i][j] << " ";
		} cout << endl;
	}
	
	file.close();
	
	return 0;
}
