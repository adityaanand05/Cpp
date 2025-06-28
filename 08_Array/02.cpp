#include <iostream>

using namespace std;

// int chaiserved(int chainum[],int size){
//     int total = 0;
//     for (int i = 0; i < size; i++)
//     {
//         total += chainum[i];
//     }
    
//     return total;
// }

int main() {
    // int x;
    // cout << "Tell your size of array : ";
    // cin >> x;
    int chainum[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter "<<i<<" elemet if array " ;
        cin>>chainum[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<chainum[i]<<"\t";
    }
    
    
    // int fun = chaiserved(chainum,);
    return 0;
}