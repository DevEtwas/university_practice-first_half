#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    char x;
    cin >> x;
    int n;
    cin >> n;

    int sum = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == x) {
            sum++;
        }
    }

    if(sum == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}