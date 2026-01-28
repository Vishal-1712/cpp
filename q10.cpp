#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.length();

    // Bubble sort only the digits
    for (int i = 0; i < len; i++) {
        for (int j = 0; j + 2 < len; j += 2) {
            if (s[j] > s[j + 2]) {
                swap(s[j], s[j + 2]);
            }
        }
    }

    cout << s << endl;
    return 0;
}
