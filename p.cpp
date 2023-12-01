#include <iostream>
#include <string>

using namespace std;
int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
        if(c == 'z') {
            cout << 'a';
        } else {
            c += 1;
            cout << c;
        }
    }
    return 0;
}