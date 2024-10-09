#include <iostream>
using namespace std;

int main() {
    string A;

    cin >> A;
    int answer = 0;
    if(A.size() < 4){
        cout << 0;
    }
    else{
        for(int i = 0; i < A.size()-3; i++){
            if(A[i] == '(' & A[i+1] == '('){
                for(int j = i+2; j < A.size()-1; j++){
                    if(A[j] == ')' & A[j+1] == ')'){
                        answer += 1;
                    }
                }
            }
        }
    }

    cout << answer << endl;
    return 0;
}