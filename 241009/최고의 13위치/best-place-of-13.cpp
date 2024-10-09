#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N][N];
    int result=  0;

    for(int i = 0; i < N; i++){
        for(int j = 0 ;j < N; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-2; j++){
            int tmp = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            result = max(tmp,result);
        }
    }

    cout << result << endl;

    return 0;
}