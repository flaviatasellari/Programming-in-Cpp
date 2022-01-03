/*
   CH-230-A
   a9_p9.cpp
   Flavia Tasellari
   ftasellari@jacobs-university.de
*/

#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

int main () {
	string s[] = {"computer", "television", "keyboard", "laptop", "mouse", "table",
	"phone", "board", "notebook", "paper", "calculator", "speaker", "chair",
	"remote", "furniture", "closet", "camera"};
	string s1;
	int n;

	while (true) {
	    srand (static_cast < unsigned int > (time(0)));
	    n = (rand() % 17);
	    s1 = s[n];

		string vowels = "aeiouy";

		while (s1.find_first_of(vowels) != string::npos) {
        /* Replace the vowels with underscores */
        s1[s1.find_first_of(vowels)] = '_'; 
        }

	   	cout << s1 << endl;

	   	string guess; 
	    int count = 1;
	    while (true) {
	        cin >> guess; // Get input everytime the player is guessing wrong 
	        if (guess != s[n]) { // Guess is wrong
	            cout << "Try again!" << endl;
	            count++;
	        }
	    	else {
				/* The case when the word is found in the first try */
	            if (count == 1) {
	                cout << "Yayy! You found the word in 1 try." << endl;
	            }
				/* The case when the word is found after some tries */
	            else {
	                cout <<"Yayy! You found the word in "<<count<<" tries." <<endl;
	            }
	            break;
	        }
	    }
	    /* Decide to play again or to quit */
	    cout << "Continue or quit" << endl;
		string choose;
	    cin >> choose;

	    if (choose == "quit") {
	    	break; // The program stops
		}
    }

    return 0;
}