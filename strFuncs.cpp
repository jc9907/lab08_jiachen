#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
#include <bits/stdc++.h> 
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1 != n2) 
        return false; 

    sort(s1.begin(), s1.end()); 
    sort(s2.begin(), s2.end()); 
  
    for (int i = 0; i < n1; i++) 
        if (s1[i] != s2[i]) 
            return false;
  return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
  string s = "";
  string t = "";
  int l = s1.length();
  for (int i = 0; i<(l/2);i++){
    s[i] = s1[i];
  }
  for (int i = 0; i<(l/2);i++){
    t[l-i] = s1[l-i];
  }
  if (s==t){
    return true;
  }
  else {
    return false;}
}


