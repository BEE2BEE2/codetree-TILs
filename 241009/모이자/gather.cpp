#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    int max_sum = 0;
    for(int i = 0; i < n; i++) {
        arr[i] *= 2;
    
        int sum_diff = 0;
        for(int j = 0; j < n - 1; j++)
            sum_diff += abs(arr[j + 1] - arr[j]);
    
        max_sum = max(max_sum, sum_diff);
        arr[i] /= 2;
    }
    
    cout << max_sum;
    
    return 0;
}