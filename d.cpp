#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin >> s;
    int j = 0;
    for(int i = s.length() - 1; i >= 0; i--) {
        t.push_back(s[i]);
    }

    if(t == s) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}