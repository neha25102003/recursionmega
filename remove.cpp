#include <iostream>
using namespace std;

void removeduplicateconsecutive(char str[]) {
    if (str[0] == '\0') {
        return;
    }
    if (str[0] != str[1]) {
        removeduplicateconsecutive(str + 1);
    } else {
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = str[i + 1];
        }
        removeduplicateconsecutive(str);
    }
}

int main() {
    char str[100];
    cin >> str;
    removeduplicateconsecutive(str);
    cout << str << endl;
    return 0;
}
