#include<iostream>
using namespace std;

int main(){

    int square[100];
    int i, k;
    
    for(i = 0; i < 10; i++){

        k = i + 1;
        square[i] = k * k;

        cout << "Pangkat dari " << k << " Adalah = " << square[i] << endl;
    }

    return 0;
}