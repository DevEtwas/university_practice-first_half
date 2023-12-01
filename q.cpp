#include <iostream>
#include <string>

using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    if(s.length() > t.length()) {
        cout << "NO";
    } else {
        int times = t.length() / s.length();
        string newstring;
        while(times > 0) {
            newstring.append(s);
            times--;
        }
        if(newstring == t) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
    return 0;
}