#include <iostream>
#include <string>

using namespace std;
int main() {
    // char h = '9';
    // int sum = 2 + (h - '0');
    // cout << sum;

    string s;
    cin >> s;

    int odd_pos = 0;
    int even_pos = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0) {
            even_pos = even_pos + (s[i] - '0');
        } else {
            odd_pos = odd_pos + (s[i] - '0');
        }
    }
    if(even_pos == odd_pos) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}