#include <iostream>
#include <vector>

using namespace std;

struct Movie {
	string name;
	int year;
	
	void addMovie(){
		cout << "Unesite naziv filma: ";
		getline(cin, name);
		cout << "Unesite godiste filma: ";
		cin >> year; cin.ignore(); cin.clear();
	}
	
	void displayMovie(){
		cout << name << " " << year << ". godine";
	}
};

struct Friend {
	string name;
	string email;
	Movie favoriteMovie;
	
	void displayFriend(){
		cout << name << " voli film " << favoriteMovie.name;
	}
	
	void addFriend(){
		cout << "Unesite ime prijatelja: ";
		getline(cin, name);
		cout << "Unesite email prijatelja: ";
		getline(cin, email);
		favoriteMovie.addMovie();
	}
};

int main(int argc, char** argv) {
	
	Friend baks;
	
	baks.addFriend();	
	baks.displayFriend();
	
	return 0;
}