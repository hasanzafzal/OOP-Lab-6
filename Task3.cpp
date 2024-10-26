#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[] = "Bahria University ";
    char str2[] = "Islamabad";
    char str3[100];

    strcpy_s(str3, str1);
    strcat_s(str3, str2);

    cout << "First String is: " << str1 << endl;
    cout << "Second String is: " << str2 << endl;
    cout << "After concatenation: " << str3 << endl;

    return 0;
}