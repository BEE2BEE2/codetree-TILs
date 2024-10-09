#include <iostream>
using namespace std;

int main() {
    int N;
    int result = 0;
    cin >> N;
    int cows[N];
    for(int i = 0 ;i < N; i++){
        cin >> cows[i];
    }
    

    for(int i = 0; i < N-2; i++){
        for(int j = i+1; j < N-1; j++){
            for(int k = j+1; k < N; k++){
                if ((cows[i] <= cows[j]) & (cows[j] <= cows[k])){
                    result += 1;
                }
            }

        }
    }

    cout << result << endl;
    return 0;
}