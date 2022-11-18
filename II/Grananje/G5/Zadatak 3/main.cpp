#include <iostream>
using namespace std;

int progBodovi1, matBodovi1, progBodovi2, matBodovi2, pobjednik;

int main(int argc, char** argv) {

	p: cout << "Unesite bodove iz matematike i programiranja za prvog takmicara: ";
	cin >> matBodovi1 >> progBodovi1;

	if (progBodovi1 > 50 || matBodovi1 > 50 || progBodovi1 < 0 || matBodovi1 < 0){
		cout << "Neispravan broj bodova. Ponovni unos!" << endl;
		goto p;
	}

	pp: cout << "Unesite bodove iz matematike i programiranja za drugog takmicara: ";
	cin >> matBodovi2 >> progBodovi2;

	if (progBodovi2 > 50 || matBodovi2 > 50 || progBodovi2 < 0 || matBodovi2 < 0){
		cout << "Neispravan broj bodova. Ponovni unos!" << endl;
		goto pp;
	}

	if ((progBodovi1 + matBodovi1) > (progBodovi2 + matBodovi2)){
		pobjednik = 1;
	} else if ((progBodovi1 + matBodovi1) < (progBodovi2 + matBodovi2)){
		pobjednik = 2;
	} else {
		if (progBodovi1 > progBodovi2){
			pobjednik = 1;
		} else if (progBodovi1 < progBodovi2){
			pobjednik = 2;
		} else {
			pobjednik = 1;
		}
	}

	switch (pobjednik){
		case 1:
			cout << "Pobjednik je takmicar 1 sa ostvarenih " << progBodovi1 + matBodovi1 << " bodova";
			break;
		
		case 2:
			cout << "Pobjednik je takmicar 2 sa ostvarenih " << progBodovi2 + matBodovi2 << " bodova";
			break;
			
		default:
			cout << "Nesto nije uredu.";
	}

	return 0;
}
