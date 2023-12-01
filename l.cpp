#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    bool alphaorder = true;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] < s[i - 1]) {
            alphaorder = false;
            break;
        }
    }

    if (alphaorder) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
