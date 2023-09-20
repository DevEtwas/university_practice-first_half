#include <iostream>
#include <vector>

using namespace std;
int main(){
    long n, l, r;
    cin >> n >> l >> r;
    // creating an array, but I use vector. It is much easier to work with vectors
    vector<long> arr;
    for (int i = 0; i < n; i++)
    {
        long newNum;
        cin >> newNum;
        arr.push_back(newNum);
    };
    // понимажем l и r на один, чтобы они подходили под индексы массива.
    l--;
    r--;
    for (long i = 0; i < n; i++)
    {
        // здесь логика в том, чтобы когда l и i становятся равными, уже начался вывод элементов обратно
    
        if((l == i)) {
            // логика в том, чтобы после того как мы выйдем из if, элементы повторно не выводились.
            // делаем так, чтобы элементы выводились с r индекса.
            i = r;
            // выводим все элементы с индекса r на лево.
            for(r; r >= l; r--) {
                cout << arr[r] << " ";
            };
        } else {
            cout << arr[i] << " ";
        }

    }
    
    return 0;
}