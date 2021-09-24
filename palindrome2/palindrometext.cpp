#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char input[80];
  char converter[80];
  char checker[80];
  int convertercounter = 0;
  int finalcheck = 0;
  cin.get(input, 80);

  for (int i = 0; i < strlen(input); i++) {
    if (isalpha(input[i]) != 0){
      converter[convertercounter] = toupper(input[i]);
      convertercounter++;
    }
  
  }

  for (int i = 0; i < strlen(converter); i++){
    checker[i] = converter[strlen(converter)-1-i];
  }

  for (int i = 0; i < strlen(converter); i++) {
    if (checker[i] == converter[i]){
      finalcheck++;
    }
  }

  if (finalcheck == strlen(converter)) {
    cout << "Palindrome.";
  }
  else {
    cout << "Not a palindrome.";
  }
  
  return 0;
}
