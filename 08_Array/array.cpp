#include <iostream>

using namespace std;

int main() {
    string chainame[5]={
        "Choco chai","hot chai","masala chai","red chai","cold chai"
    };

    for (int i = 0; i < 5; i++)
    {
        cout<<"\tYou can take "<<chainame[i]<<"\n";
       
    }
    
    return 0;
}