#include <bits/stdc++.h>
using namespace std;

/*
Problem: Reverse Vowels of a String
Given a string s, reverse only the vowels of the string and return it.
Vowels are 'a', 'e', 'i', 'o', 'u' (both lowercase and uppercase).
Example:
Input: s = "hello"
Output: "holle"
 ASKED BY--
 ZOHO,FACEBOOK,FLIPKART*/

bool isVowel(char ch) {
    // Check if character is a vowel (uppercase or lowercase)
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
}

string reverseVowels(string s) {
    int i = 0;
    int j = s.length() - 1;

    while(i < j) {
        if(!isVowel(s[i])) {
            i++; // move forward if s[i] is not vowel
        }
        else if(!isVowel(s[j])) {
            j--; // move backward if s[j] is not vowel
        }
        else {
            swap(s[i], s[j]); // swap vowels
            i++;
            j--;
        }
    }
    return s;
}

int main() {
    string s;
    cout << "Enter string";
    cin >> s;

    string result = reverseVowels(s);
    cout << "After reversing vowels: " << result << endl;

    return 0;
}
