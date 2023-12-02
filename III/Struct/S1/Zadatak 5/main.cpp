#include <iostream>
#include <vector>

using namespace std;

struct Movie {
	string name;
	string genre;
	double length;
	vector<string> actors;
	
	void addMovie(){
		cout << "Unesite naziv filma: ";
		getline(cin, name);
		cout << "Unesite zanr filma: ";
		getline(cin, genre);
		cout << "Unesite trajanje filma: ";
		cin >> length; cin.ignore(); cin.clear();
		cout << "Unesite glumce: ";
		string str = "";		
		do {
			getline(cin, str);
			actors.push_back(str);
		} while (!str.empty());
	}
	
	void displayMovie(){
		cout << name << " trajanja " << length << "\n";
		cout << genre << " sa glumcima: \n";
		for (string actor : actors){
			cout << actor << "\n";
		}
	}
};

int main(int argc, char** argv) {
	
	Movie movie;
	
	movie.addMovie();
	movie.displayMovie();
	
	return 0;
}