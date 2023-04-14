#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	int n;
	int i = 0;
	int count = 0;
	int num = 0;
	
	cout << "Unesi broj: ";
	cin >> n;
	
	while (count < n){
		int pom = i;
		while (pom != 0){
			if (pom % 10 != 5 && pom % 10 != 8){
				break;
			}
			pom /= 10;
			if (pom == 0){
				count++;
				num = i;
			}
		}
		i++;
	}
	
	cout << num;
	
	return 0;
}
