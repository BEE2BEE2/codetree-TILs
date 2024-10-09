#include <iostream>
using namespace std;
#include <climits>


int cal_distance(int i,int start_index,int N){
    if (i > start_index){
        return i-start_index;
    }
    else{
        return N + i - start_index;
    }
}






int main() {
    int N;
    cin >> N;

    int map[N];
    int min_result = INT_MAX;

    for(int i = 0; i < N; i++){
        cin >> map[i];
    }
    for(int start_index = 0; start_index < N; start_index++){
        int result = 0;
        for(int i = 0; i < N; i++){
            if(start_index != i){
                int distance = cal_distance(i,start_index,N);
                result += distance * map[i];
            }
        }
        min_result = min(min_result,result);
    }

    cout << min_result;
    



    return 0;
}