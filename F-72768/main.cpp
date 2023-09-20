/* Problem F: 72768. Reverse

Given an array consisting of integers. Print all array in reverse order.
Input format

The first line contains integer n
(1⩽n⩽105) — array size. The next line contains n integers ai (−109⩽ai⩽109)

— elements of array.
Output format

Reversed array. */

#include <iostream>
#include <vector>

using namespace std;
int main(){
    long n;
    cin >> n;
    // creating an array, but I use vector. It is much easier to work with vectors
    vector<long> arr;
    for (long i = 0; i < n; i++)
    {
        long newNum;
        cin >> newNum;
        arr.push_back(newNum);
    };

    for (long i = n-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    };
    return 0;   
}