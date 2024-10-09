#include <iostream>
using namespace std;

int carry_count(int a, int b, int c){
    int aa[4];
    int bb[4];
    int cc[4];
    
    aa[0] = a/1000;
    aa[1] = (a/100)%10;
    aa[2] = (a/10)%10;
    aa[3] = a%10;
    
    bb[0] = b/1000;
    bb[1] = (b/100)%10;
    bb[2] = (b/10)%10;
    bb[3] = b%10;

    cc[0] = c/1000;
    cc[1] = (c/100)%10;
    cc[2] = (c/10)%10;
    cc[3] = c%10;
    
    for(int i = 3; i > 0; i--){
        
        if(aa[i] + bb[i] + cc[i] >= 10){
            return 0;
        }
    }

    return a + b + c;
}
    
int main() {
    int n;
    cin >> n;
    int numbers[n];
    for(int i = 0; i < n; i++){
        cin >> numbers[i]; 
    }
 
    int max_result = -1;
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                int flag = carry_count(numbers[i],numbers[j],numbers[k]);
                if (flag != 0){
                    max_result = max(max_result,flag);
                }
            }
        }
    }
    cout << max_result;
    return 0;
}