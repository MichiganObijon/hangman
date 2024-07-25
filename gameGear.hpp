#ifndef MAX_HPP
#define MAX_HPP
#include <iostream>
#include <array>
#include <vector>
#include <string>
using namespace std;

// Requires: Nothing 
// Modifies: Nothing
// Effect: Print out message for player to enter mystery word
void mysteryWordPromptMesg();

// Requires: Nothing 
// Modifies: Nothing
// Effect: Print out message for player to enter guess character
void guessPromptMesg();

// Requires: booleam variable 'outcome'   
// Modifies: Nothing
// Effect: Print out message for winner or loser
void finalMesg(bool outcome);

// Requires: Nothing
// Modifies: Nothing
// Effect: Print out available letters
void printLetterRoster();

// Requires: string variable userInput
// Modifies: Nothing
// Effect: returns true if the player enters a valid mystery word, else it returns false
bool checkValidity(string userInput);




#endif