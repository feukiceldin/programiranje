#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int radnici, radniciBez, radniciSa;
	
	cin >> radnici >> radniciBez >> radniciSa;
	
	int brojBez[radniciBez];
	int brojSa[radniciSa];
	
	for (int i = 0; i < radniciBez; i++){
		int cigla;
		cin >> cigla;
		brojBez[i] = cigla;		
	}
	
	for (int i = 0; i < radniciSa; i++){
		int cigla;
		cin >> cigla;
		brojSa[i] = cigla;		
	}
	
	int broji = radniciBez;
	
	for (int i = 0; i < radniciBez; i++){
		for (int j = 0; j < radniciSa; j++){
			if ((brojBez[i] + 1 == brojSa[j] && brojBez != 0) || (brojBez[i] - 1 == brojSa[j] && brojBez != 0)){
				broji--;
				brojSa[i] = 0;
				brojBez[j] = 0;
			}
		}	
	}
	
	cout << broji;
		
	return 0;
}
