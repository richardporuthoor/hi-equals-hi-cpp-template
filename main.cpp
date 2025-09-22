#include <iostream>
#include "src/hello.hpp"
#include <string>

using namespace std; 

// compares 2 strings case insensitive
int strcmp_case_insensitive(string str1, string str2) {

  // finds smaller str
  string smallstr;
  if (str1.length() <= str2.length()) {
    smallstr = str1;
  } else {
    smallstr = str2;
  }

  // compares each char
  for (size_t i = 0; i < smallstr.size(); i++) {
    char c1 = tolower(str1[i]);
    char c2 = tolower(str2[i]);

    if (c1 > c2) {
      return 1;
    } else if (c1 < c2) {
      return -1;
    }
  }

  // if they're the same till now, check length
  if (str1.length() > str2.length()) {
    return 1;
  } else if (str1.length() < str2.length()) {
    return -1;
  } else {
    return 0;
  }
}


int main() {
  string first;
  string second;

  std::cout << "Enter first string to compare (case insensitive): ";
  std::cin >> first;
  std::cout << "Enter second string: ";
  std::cin >> second;
  std::cout << strcmp_case_insensitive(first, second) << "\n";
}   

