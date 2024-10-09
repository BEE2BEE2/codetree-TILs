#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int min_result = INT_MAX;
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        int result = 0;
        for(int j = 0; j < n; j++){
            result += abs(j-i) * arr[j];
        }
        min_result = min(min_result,result);
    }
    
    cout << min_result;
    
    return 0;
}