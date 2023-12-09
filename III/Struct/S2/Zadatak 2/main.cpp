#include <iostream>

using namespace std;

struct Flat {
	double usage;
	int houseNumber;
	int residents;
		
	void input() {
		cout << "Unesite koliko vode trosite: ";
		cin >> usage;
		cout << "Vas broj kuce: ";
		cin >> houseNumber;
		cout << "Koliko zivi u kuci: ";
		cin >> residents;
	}
	
	void print() {
		cout << "Kuca broj " << houseNumber << " koristi " << usage << " m3 i ima " << residents << " clanova";
	}
};

double usageFloor(Flat arr[], int n) {
	double sum = 0;
	
	for (int i = 0; i < n; i++){
		sum += arr[i].usage;
	} 
	
	return sum;	
}

void usagePercentage(Flat arr[][10], int n, int m, double sum, int residents) {
	cout << "Prosjecna potrosnja po clanu: " << (sum/residents) << endl;
}

void verticalUsage(Flat arr[][10], int n, int m){
	for (int i = 0; i < n; i++){
		Flat maxi = arr[0][i], mini = arr[0][i];
		for (int j = 0; j < m; j++){
			if (maxi.usage < arr[j][i].usage){
				maxi = arr[j][i];
			}
			if (mini.usage > arr[j][i].usage){
				mini = arr[j][i];
			}
		}
		
		cout << "\nClan sa najvecom potrosnjom: \n";
		maxi.print();
		cout << "\nClan sa najmanjom potrosnjom: \n";
		mini.print();
	}
}

int main(int argc, char** argv) {
	
	int n, m;
	
	cout << "Unesite broj spratova: ";
	cin >> n;
	
	cout << "Unesite broj stanova po spratu: ";
	cin >> m;
	
	Flat arr[10][10];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			Flat temp;
			temp.input();
			arr[i][j] = temp;
		}
	}
	
	double sum = 0;
	for (int i = 0; i < n; i++){
		cout << "Sprat " << i+1 << " koristi " << usageFloor(arr[i], m) << " vode\n";
		sum += usageFloor(arr[i], m);
	}
	
	cout << "Potrosnja zgrade: " << sum << endl;
	
	int clanovi = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			clanovi += arr[i][j].residents;
		}
	}
	usagePercentage(arr, n, m, sum, clanovi);
	
	verticalUsage(arr, n, m);
	
	return 0;
}