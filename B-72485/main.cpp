/* Problem B: 72485. Positive numbers

Given an array consisting of integers. Write a program, which outputs count of positive numbers in array.
Input format

The first line contains integer n
(1⩽n⩽105) — array size. The next line contains n integers ai (−109⩽ai⩽109)

— elements of array.
Output format

Single integer, positive numbers count. */


#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cin >> n;
    // creating an array, but I use vector. It is much easier to work with vectors
    vector<double> arr(n);
    // count for all positive integers
    int countPosInt = 0;
    for (int i = 0; i < n; i++)
    {
        int newNum;
        cin >> newNum;
        arr.push_back(newNum);
        if(newNum > 0) {
            countPosInt++;
        }
    }
    cout << countPosInt;
    return 0;   
}