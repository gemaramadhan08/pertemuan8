#include<iostream>
using namespace std;

void printArray(int [0] [3]);

int main(){
    int matrik1[2] [3] = { {1,2,3} , {4,5,6} },
        matrik2[2] [3] = {1,2,3,4,5,},
        matrik3[2] [3] = { {1,2} , {4} };

    printArray (matrik1);
    printArray (matrik2);
    printArray (matrik3);

return 0;

}

void printArray(int a [0] [3] ){
    int i, j;

    for(i = 0; i <= 1; i++){
        for(j = 0; j <= 2; j++)
        cout << a [i] [j] << endl;
    }
}