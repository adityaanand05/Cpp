#include <iostream>

using namespace std;

int main() {
    int Age[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (int i = 0; i < 3; i++)
    {
        cout << "\nAge Group :"<<i+1<<endl;
        for (int j = 0; j < 3; j++)
        {
            cout << Age[i][j] << "\t";
        }
        
    }
    
    return 0;
}