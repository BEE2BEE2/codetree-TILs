#include <iostream>
using namespace std;
#include <climits>
int main() {
    int N;
    cin >> N;

    int arr[N][2];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 2; j++){
            cin >> arr[i][j];
        }
    }


    

    int min_result = INT_MAX;
    for(int cut_index = 1; cut_index < N-1; cut_index++){
        int start_x = arr[0][0];
        int start_y = arr[0][1];
        int result = 0;
        for(int i = 0; i < N; i++){
            if(i != cut_index){
                result += abs(start_x - arr[i][0]);
                result += abs(start_y - arr[i][1]);
                start_x = arr[i][0];
                start_y = arr[i][1];
                
            }
        }
        min_result = min(result,min_result);
    }

    cout << min_result;



    return 0;
}