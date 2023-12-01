// To solve this problem I will initialize empty vector, each index will store
// amount of every digit. From 0 to 9. If amount of every digit is equal
// it will print yes

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector <int> amount;
    for(int i = 0; i < 10; i++) {
        amount[i] = 0;
    }

    vector <char> digits = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'};
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        for(int)
    }
    return 0;
}