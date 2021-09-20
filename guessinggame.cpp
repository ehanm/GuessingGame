// This program is a guessing game! The user must guess a number between 0-100!
// Made by Ehan Masud on September 14, 2021
#include <iostream>
using namespace std;
int main() {
  while (true){ // looping the program
  int guess;
  int guesses = 0;
  cout << "Insert your guess!\n";
  cin >> guess; //obtaining the guesses
  srand(time(NULL));
  int answer = (rand()% 100+1);
    while (guess != answer){
      if (guess > answer) {
	cout << "Lower!"; // tells the user that the guess is too high
	guesses++; //finds out how many guesses the user takes
      }
      if (guess < answer){
	cout << "Higher!";// tells the user that the guess is too low
	guesses++;
      }
      cout << " Insert your guess!\n";
      cin >> guess;
    }
    cout << "You got it!\n";
    guesses++;
    cout << "It took you ";
    cout << guesses;
    cout << " guesses!\n";
    cout << "Play again? (y/n)"; // gets player input on whether they want to play the game again or not
    char response;
    cin >> response;
    if (response == 'y') {
      continue; // if the player types "y", then the game starts over
    }
    else {
      break; // if the player doesn't type "y", then the game stops
    }
  }
  return 0;
}
