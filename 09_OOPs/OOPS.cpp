#include <iostream>
#include <vector>

using namespace std;

class Chai
{
private:
    /* data */
public:
    // Data member
    string chaiName ;
    int servings;
    vector<string> ingridents;
    // function member
    void displaydetails(){
        cout << "ChaiNames : " << chaiName<<endl;
        cout << "Servings : "<<servings<<endl ;
        cout << "Ingridents : " ;
        for(string ingrid : ingridents){
            cout << ingrid << " , " ;
        }
        cout << endl;
    
    } 
};



int main() {
    Chai chai;
    chai.chaiName = "Masala chai";
    chai.servings = 50;
    chai.ingridents = {"Water","Tea leaves","Sugar"};
    chai.displaydetails();
    return 0;
}