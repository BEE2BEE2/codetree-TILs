#include <iostream>
#include <string>
using namespace std;

int main() {
    int count = 0;

    string mystring;
    cin >> mystring;

    

    

    for(int i = 0; i < mystring.size()-1; i++){
        for(int j = i+1; j < mystring.size();j++){
            if(mystring[i] == '(' &  mystring[j] == ')'){
                count += 1;
            }
        }
    }

    cout << count << endl;

    return 0;


}