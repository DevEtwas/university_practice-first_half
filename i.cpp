#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    long arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(int(sqrt(arr[i][j])) == float(sqrt(arr[i][j]))) {
                arr[i][j] = sqrt(arr[i][j]);
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}