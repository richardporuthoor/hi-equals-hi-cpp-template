#include <iostream>
#include "hello.hpp"
#include <string>
#include <cassert>
// compares 2 strings case insensitive
int strcmp_case_insensitive(std::string const &str1, std::string const &str2) {

  // finds smaller str
  std::string smallstr;
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
  assert(strcmp_case_insensitive("", "") == 0);
  assert(strcmp_case_insensitive("a", "b") == -1);
  assert(strcmp_case_insensitive("afsfd", "AfsFd") == 0);
  assert(strcmp_case_insensitive("zzzzzzzzzzzzzzzzzzza", "zzzzzzzzzzzzzzzzzzzb") == -1);
  assert(strcmp_case_insensitive("HELLO", "hello") == 0);
  assert(strcmp_case_insensitive("boom", "ahhh") == 1);


}   
