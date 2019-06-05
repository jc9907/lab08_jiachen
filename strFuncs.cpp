
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1!=n2)
      return false;
  
    string new_1;
    string new_2;
    sort(s1.begin(), s1.end()); 
    sort(s2.begin(), s2.end()); 
  
    for (int i = 0; i < n1; i++) {
      new_1.append(tolower(s1[i], 1));
      sort(new_1.begin(), new_1.end());
      new_2.append(tolower(s2[i], 1));
      sort(new_2.begin(), new_2.end());
    }
  return new_1 == new_2;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
  int l = s1.length();
  if (l == 0 || l ==1)
    return true;
  if (tolower(s1[0])==tolower(s1[l-1])
    return isPalindrome(s1.substr(1,l-2));
  else 
    return false;
}


