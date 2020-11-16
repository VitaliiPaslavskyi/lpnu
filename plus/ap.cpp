#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> list(0);

    for(int i = 1; i <= 99; i++){
        for(int j = 0; j < i; j++){
            list.push_back(i);
        }
    }
    for(int i = 0; i < 500; i++){
        cout << list[i] << " ";
    }

    cout << '\n';
    cout << '\n';

    int counter = 0;
    for(int i = 1; i <= 99; i++){
        for(int j = 0; j < i; j++){
            counter++;
            cout << i << " ";
            if(counter == 500){
                return 0;
            }
        }
    }

    return 0;
}