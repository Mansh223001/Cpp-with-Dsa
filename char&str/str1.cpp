// Remove all occurrences of a substring from a string
#include <iostream>
using namespace std;

void removeSubstring(char str[], const char substr[],
                     int strSize, int substrSize) {

    int j = 0;

    for (int i = 0; i < strSize;) {

        bool match = false;

        if (i + substrSize <= strSize) {

            match = true;

            for (int k = 0; k < substrSize; k++) {
                if (str[i + k] != substr[k]) {
                    match = false;
                    break;
                }
            }
        }

        if (match) {
            i += substrSize;
        }
        else {
            str[j++] = str[i++];
        }
    }

    str[j] = '\0';
}

int main() {

    char str[1000];
    char substr[100];

    cout << "Enter main string: ";
    cin.getline(str, 1000);

    cout << "Enter substring: ";
    cin.getline(substr, 100);

    int strSize = 0;
    while (str[strSize] != '\0')
        strSize++;

    int substrSize = 0;
    while (substr[substrSize] != '\0')
        substrSize++;

    removeSubstring(str, substr, strSize, substrSize);

    cout << "Result: " << str << endl;

    return 0;
}