#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string s1 = "pitanje je sada";
	string s2 = "biti ";
	string s3 = "ili ne biti ";
	
	string insertStr;
	insertStr.insert(0, s2);
	insertStr.insert(insertStr.length(), s3);
	insertStr.insert(insertStr.length(), s1);
	
	string str = s2 + s3 + s1;
	cout << insertStr << endl;
	cout << str;
	
	return 0;
}
