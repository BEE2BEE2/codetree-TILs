#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string a;
    cin >> a;
    int touch_flag = 0;
    for(int i = 0; i < a.size(); i++){
        if (a[i] == '0'){
            a[i] = '1';
            touch_flag = 1;
            break;
        }
        if(i == a.size()-1){
            a[i] = '0';
        }
    }

    
    int two_bits = 1;
    int result = 0;

    
    for(int i = a.size()-1; i >= 0; i--){
        if(a[i] == '1'){
            result += two_bits;
        }
        two_bits *= 2;
    }

    
    cout << result << endl;
    return 0;
}