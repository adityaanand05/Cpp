// #include <iostream>

// using namespace std;

// int main() {
//     int Age[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "\nAge Group :"<<i+1<<endl;
//         for (int j = 0; j < 3; j++)
//         {
//             cout << Age[i][j] << "\t";
//         }
        
//     }
    
//     return 0;
// }

//Example using std::vector:
#include <iostream>
#include <vector> // Include the vector header
int main() {
std::vector<int> numbers = {10, 20, 30, 40, 50}; // Initialize a vector
// Add elements
numbers.push_back(60);
numbers.push_back(70);
// Access elements
std::cout << "Element at index 0: " << numbers[0] << std::endl;
std::cout << "Element at index 2 (using at()): " << numbers.at(2)
<< std::endl;
// Iterate
std::cout << "Vector elements: ";
for (int num : numbers) {
std::cout << num << " ";
}
std::cout << std::endl;
// Get size
std::cout << "Vector size: " << numbers.size() << std::endl;
return 0;
}