//string operation using character arrays

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // String Length
    char str[] = "Hello";
    cout << "Length = " << strlen(str) << endl;

    // String Concatenation
    char s1[20] = "Hello";
    char s2[] = " World";
    strcat(s1, s2);
    cout << "Concatenated String: " << s1 << endl;

    // String Comparison
    char str1[] = "Apple";
    char str2[] = "Banana";
    if (strcmp(str1, str2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    // String Copy
    char s3[] = "Hello";
    char s4[10];
    strcpy(s4, s3);
    cout << "Copied String: " << s4 << endl;

    return 0;
}

