#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(const string &s) {
    string filtered;
    for (char ch : s) {
        if (isalnum(ch)) {
            filtered += tolower(ch);
        }
    }

    int n = filtered.length();
    for (int i = 0; i < n / 2; i++) {
        if (filtered[i] != filtered[n - i - 1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}