#include <iostream>
#include <vector>

using namespace std;
int main(){
    long n;
    cin >> n;
    // creating an array, but I use vector. It is much easier to work with vectors
    vector<long> arr;
    for (int i = 0; i < n; i++)
    {
        long newNum;
        cin >> newNum;
        arr.push_back(newNum);
    };
    // to store maximum, minimum value and index
    long max = arr[0];
    long min = arr[0];
    long index = 0;
    for (long i = 0; i < n; i++)
    {
        if(arr[i] > max) {
            max = arr[i];
            index = i;
        } else if(arr[i] < min) {
            min = arr[i];
        };
    };
    arr[index] = min;
    for (long i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;   
}