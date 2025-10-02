//Amazon, Microsoft, MentorGraphics, MakeMyTrip,Adobe,Accolite,GoldmanSachs//
#include <bits/stdc++.h>
using namespace std;

/*
Problem: Reverse Words in a String
Given a string s, reverse the order of words in it.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
*/

string reverseWords(string s) {
    int n = s.size();
    int i = 0;
    vector<string> words;

    // Extract words from string
    while(i < n) {
        // Skip leading spaces
        while(i < n && s[i] == ' ') i++;
        if(i >= n) break;

        int start = i;
        while(i < n && s[i] != ' ') i++;
        int end = i - 1;

        string word = s.substr(start, end - start + 1);
        words.push_back(word);
    }

    // Concatenate words in reverse order
    string ans = "";
    for(int i = words.size() - 1; i >= 0; i--) {
        ans += words[i];
        if(i != 0) ans.push_back(' ');
    }

    return ans;
}

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);  // read full line with spaces

    string reversed = reverseWords(s);
    cout << "Reversed words: " << reversed << endl;

    return 0;
}
