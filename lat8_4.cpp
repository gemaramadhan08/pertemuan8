#include<iostream>
using namespace std;

void printArray(int *ptrArray, int baris, int kolom){
    int index = 0;
    for(int i = 0; i < baris; i++ ){
        for(int j = 0; j < kolom; j++){
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << endl;
    }
}

int main(){

    int array[3][3] = {1,3,4,6,7,8,0,2,2};

    cout << "Input baris 1 kolom 1 = " << array[0][0] << endl;
    cout << "Input baris 1 kolom 2 = " << array[0][1] << endl;
    cout << "Input baris 1 kolom 3 = " << array[0][2] << endl;
    cout << "Input baris 2 kolom 1 = " << array[1][0] << endl;
    cout << "Input baris 2 kolom 2 = " << array[1][1] << endl;
    cout << "Input baris 2 kolom 3 = " << array[1][2] << endl;
    cout << "Input baris 3 kolom 1 = " << array[2][0] << endl;
    cout << "Input baris 3 kolom 2 = " << array[2][1] << endl;
    cout << "Input baris 3 kolom 3 = " << array[2][2] << endl;

    printArray(*array, 3, 3);

    return 0;
}