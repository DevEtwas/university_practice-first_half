/* Problem D: 72569. Position of maximum

Given an array consisting of integers. Write a program, which finds position of maximum element of array. If maximums is two or more you should output first position.
Input format

The first line contains integer n
(1⩽n⩽105) — array size. The next line contains n integers ai (−109⩽ai⩽109)

— elements of array.
Output format

Single integer, position of maximum in array. */


#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cin >> n;
    // creating an array, but I use vector. It is much easier to work with vectors
    vector<double> arr;
    for (int i = 0; i < n; i++)
    {
        int newNum;
        cin >> newNum;
        arr.push_back(newNum);
    };
    // to store maximum value and index
    int max = arr[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max) {
            max = arr[i];
            index = i;
        };
    };
    
    cout << index + 1;
    return 0;   
}