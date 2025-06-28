#include <iostream>
using namespace std;


//returning an array using pointer
int* createArray(int size) {
    int* arr = new int[size];  // dynamically allocate array
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;  // initialize with some values
    }
    return arr;  // return pointer to array
}

int main() {
    int size = 5;
    int* myArray = createArray(size);

    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    delete[] myArray;  // free memory
    return 0;
}