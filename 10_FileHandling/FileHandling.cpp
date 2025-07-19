#include <iostream>
#include<fstream>
#include <string>

// Useful classes and methods for file handling
// 1. fstreambase
// 2. ifstream --> derived from fstreambase
// 3. ofstream--> derived from fstreambase

using namespace std;

int main() {
    string st;
    // OPening a file using ofstream and writing to it
    ofstream out("example.txt");
    out << "Hello, World!" << endl;
    // out << "This is a file handling example in C++." << endl;
    out<<st<<endl;
    ifstream in("example.txt");
    // Reading from the file    
    getline(in, st);
    cout<<st<<endl;
    return 0;
}