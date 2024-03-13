// frequency of each character in a string 
#include <iostream>
using namespace std;

int main() {
  string str = "Hello world!";
  string str;
  cout << "Enter a string: ";
  getline(cin, str); 
  int freq[256] = {0};

  for (char c : str) {
    freq[c]++;
  }

  for (int i = 0; i < 256; i++) {
    if (freq[i] > 0) {
      cout << (char)i << ": " << freq[i] << endl;
  for (int i = 0; i < str.length();i++){
    if (freq[str[i]] != 0){
      cout << str[i] << ": " << freq[str[i]] << endl;
      freq[str[i]] = 0;
    }
  }
