#include <iostream>

using namespace std;

int main() {
    int a = 55;
    int* ptr = &a; // normal pointer storing address of a variable
    int** ptr1 = &ptr; //pointer to pointer 'ek pointer me dusra pointer'
    

    cout << "Value of a :" << a << endl<<endl;
    cout <<"Value of pointer(ptr): "<< ptr <<endl<<endl;
    cout << "no pointer direct addr of a using & : "<<&a <<endl<<endl;
    cout << "Value of pointer(ptr1): "<<ptr1 <<endl<<endl;
    cout <<"no pointer direct addr of ptr using & : "<< &ptr <<endl<<endl;


    /*
        * is dereference(value at address) operator for case 
        int a = 55;
        int* ptr = &a;
        int** ptr1 = &ptr;
        cout << *(&a) << endl;
        cout << *(ptr) << endl;
        cout << **(ptr1) << endl;

        output 
        10
        10
        10
        
    
    */

    /*
        NULL Pointer
        int* ptr = NULL
        cout << ptr << endl;

    */

    return 0;
}