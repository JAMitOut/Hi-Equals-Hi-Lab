#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int strcmp_case_insensitive(const string& a, const string& b) {
    size_t i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        unsigned char a1 = static_cast<unsigned char>(a[i]);
        unsigned char b1 = static_cast<unsigned char>(b[j]);
        int a2 = tolower(a1);
        int b2 = tolower(b1);

        if (a2 != b2) {
            return (a2 - b2);
        }

        ++i; ++j;
    }

    if (i < a.size()) {
        return 1;
    }
    else if (j < b.size()) {
        return -1;
    }
    else {
        return 0;
    }
}

int main() {
    string str1, str2;

    //Input
    cout << "Enter String 1: ";
    getline(cin, str1);
    cout << "Enter String 2: ";
    getline(cin, str2);

    int result1 = strcmp_case_insensitive(str1, str2);
    int result2 = strcmp_case_insensitive(str1, str1);
    int result3 = strcmp_case_insensitive(str2, str1);

    //Output
    cout << "\nThe comparison of " << str1 << " and " << str2 << " returns " << result1;
    cout << "\nThe comparison of " << str1 << " and " << str1 << " returns " << result2;
    cout << "\nThe comparison of " << str2 << " and " << str1 << " returns " << result3;
    cout << "\n";

    return 0;
}
