#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin >> s;
    int l;
    int r;
    cin >> l >> r;
    for(int i = l; i <= r; i++) {
        t.push_back(s[i]);
    }
    cout << t;
    return 0;
}