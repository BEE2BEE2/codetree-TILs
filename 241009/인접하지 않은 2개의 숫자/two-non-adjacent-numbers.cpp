#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mynumber[n];
    for(int i = 0; i < n; i++){
        cin >> mynumber[i];
    }

    int max_result = mynumber[0] + mynumber[2];

    for(int i = 0; i < n-2; i++){
        for(int j = i + 2; j < n; j++){
            max_result = max(max_result,mynumber[i] + mynumber[j]);
        }
    }
    
    cout << max_result;
    return 0;
}