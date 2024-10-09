#include <iostream>
using namespace std;

int main() {
    int R, C;

    cin >> R >> C;
    char arr[R][C];

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> arr[i][j];           
        }
    }
    


    
    int start_R = 0;
    int start_C = 0;
    int result = 0;

    if(arr[0][0] == 'W'){
        
        for(int i = 1; i < R-2; i++){
            for(int j = 1; j < C-2; j++){
                if (arr[i][j] == 'B'){
                    for(int k = i+1; k < R-1; k++){
                        for(int l = j+1; l < C-1; l++){
                            if(arr[k][l] == 'W'){
                                result += 1;
                            }

                        }
                    }
                }
            }
        }
    }
    cout << result << endl;
    return 0;
}