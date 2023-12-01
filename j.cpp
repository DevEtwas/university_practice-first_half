#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin >> s;
    int j = 0;

    // компьютеру нельзя сказать, что это паллиндром. Нужно объяснить кодом.
    // Человек видит, что это паллиндром, если в конец либо в начала добавить
    // определенную букву, как это объяснить компьютеру?
    // Вот два примера: abb, bba. В первом надо в конец, а во втором в начало.
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