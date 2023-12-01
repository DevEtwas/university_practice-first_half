#include <iostream>
#include <string>

using namespace std;
int main() {
    int vowel_sum = 0;
    string s;
    cin >> s;

    string vowels = "aeiou";
    for (int i = 0; i < s.length(); i++)
    {
        for(int j = 0; j < vowels.length(); j++) {
            if(s[i] == vowels[j]) {
                vowel_sum++;
            }
        }
    }
    
    cout << vowel_sum;
    return 0;
}