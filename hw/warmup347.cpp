#include <iostream>
#include <string>

// this is a program warm up that convers abbrevations such as LOL or IDK into Laugh out loud and I dont know..
//
using namespace std;

string convertAbbreviation (const string & abbreviation) {
	string upperAbbreviation;
	for (char c : abbreviation) {
		upperAbbreviation += toupper(c);
	}

	if (upperAbbreviation == "LOL") {
		return "Laughing out loud";
	} else if (upperAbbreviation == "IDK"){
		return "I dont know";
	} else if (upperAbbreviation == "BFF"){
	       return "best friends forever";
	} else if (upperAbbreviation == "IMHO"){
		return "in my humble opinion"; 
	} else if (upperAbbreviation == "TMI"){
		return "too much information"; 
	}  else {
		return "Unknown";
	}
}



int main() {

	cout << "Enter an abbreviation: " << endl;
	string userAbbreviation;
	cin >> userAbbreviation;
	string fullForm= convertAbbreviation (userAbbreviation);
	cout << "Full form: " << fullForm << endl;

	return 0;
}
