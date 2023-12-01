#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;

    int j = 0;
    bool continious = false;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == t[j]) {
            j++;
        } else {
            j = 0;
        }
        if(j == t.length()) {
            continious = true;
            break;
        }
    }
    if(continious) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}