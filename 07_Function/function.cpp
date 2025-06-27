#include<iostream>

using namespace std;

int sum(int a, int b){
    int add;
    add = a+b;
    cout << "Sum = " << add;
    return add;
}


int main(){
    sum(20,56);
}