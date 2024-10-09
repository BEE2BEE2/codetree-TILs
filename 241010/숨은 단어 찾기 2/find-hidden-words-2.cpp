#include <iostream>
using namespace std;

int dx[8] = {1,1,1,0,0,-1,-1,-1};
int dy[8] = {0,-1,1,1,-1,0,-1,1};



int main() {
    int N,M;
    int result = 0;
    cin >> N >> M;
    string map[N];
    for(int i = 0; i < N; i++){
        cin >> map[i];
    }


    

    


    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(map[i][j] != 'L'){
                continue;
            }

            
            
            int start_y = i;
            int start_x = j;

            for(int k = 0; k < 8; k++){
                int newy = start_y + dy[k];
                int newx = start_x + dx[k];
                int counter = 1;
                if(0 <= newy & newy < N & 0<= newx & newx < M){
                    if(map[newy][newx] == 'E'){
                        counter += 1;
                    }
                }
                if(counter != 2){
                    continue;
                }
                newy = newy + dy[k];
                newx = newx + dx[k];
                if(0 <= newy & newy < N & 0<= newx & newx < M){
                    if(map[newy][newx] == 'E'){
                        counter += 1;
                    }
                }
                if(counter != 3){
                    continue;
                }
                if(counter == 3){
                    
                    result += 1;
                }
            }
        }
    }
    cout << result << endl;


    return 0;
}