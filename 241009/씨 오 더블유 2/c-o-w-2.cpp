#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int N;
    cin >> N;
    cin >> a;
    int result = 0;
    for(int i = 0; i < N-2; i++){
        if(a[i] == 'C'){
            for(int j = i+1; j<N-1;j++){
                if (a[j] == 'O'){
                    for(int k = j+1; k<N; k++){
                        if(a[k] == 'W'){
                            result += 1;
                        }
                    }
                }
            }
        }
    }
    cout << result << endl;
    return 0;
}