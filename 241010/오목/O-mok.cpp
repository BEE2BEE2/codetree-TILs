#include <iostream>
using namespace std;


int someone_win(int pan[19][19],int i, int j){
    if(2 <= i  &  i < 17){
        if(pan[i-2][j] == 2 & pan[i-1][j] == 2 & pan[i][j] == 2 & pan[i+1][j] == 2 & pan[i+2][j] == 2){  
            return 2;
        }
        if(pan[i-2][j] == 1 &  pan[i-1][j] ==1 &  pan[i][j] ==1 &  pan[i+1][j] ==1 &  pan[i+2][j] == 1){  
            return 1;
        }
    }
    if(2 <= i & i < 17 & 2 <= j & j < 17){
        if(pan[i-2][j-2] == 2 &pan[i-1][j-1] == 2 &pan[i][j] == 2 &pan[i+1][j+1] == 2 &pan[i+2][j+2] == 2){  
            return 2;
        }
        if(pan[i-2][j-2] ==1 &  pan[i-1][j-1] ==1 &  pan[i][j] == 1 & pan[i+1][j+1] == 1 & pan[i+2][j+2] == 1){  
            return 1;
        }
        if(pan[i-2][j+2] == 2 &pan[i-1][j+1] == 2 &pan[i][j] == 2 &pan[i+1][j-1] == 2 &pan[i+2][j-2] == 2){
            return 2;
        }
        if(pan[i-2][j+2] ==1 &  pan[i-1][j+1] == 1 & pan[i][j] == 1 & pan[i+1][j-1] == 1 & pan[i+2][j-2] == 1){
            return 1;
        }
    }
    if(2 <= j  &  j < 17){
        if(pan[i][j-2] == 2 &pan[i][j-1] ==2 & pan[i][j] == 2 &pan[i][j+1] == 2 &pan[i][j+2] == 2){
            return 2;
        }
        if(pan[i][j-2] ==1 &  pan[i][j-1] == 1 & pan[i][j] == 1 & pan[i][j+1] ==1 &  pan[i][j+2] == 1){
            return 1;
        }
    }
    return 0;
}












int main() {
    int pan[19][19];

    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            cin >> pan[i][j];
        }
    }
    int win_flag = 0;
    for(int i = 2; i < 19; i++){
        for(int j = 2; j < 19; j++){
            int flag = someone_win(pan,i,j);
            if(flag != 0){
                cout << flag << endl;
                cout << i+1<< " " << j+1<< endl;
                win_flag = 1;
                break;
            }
        }
        if(win_flag == 1){
            break;
        }
    }
    if(win_flag == 0){
        cout << 0 << endl;
    }
    
    return 0;
}