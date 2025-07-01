#include <iostream>
#include <cstring> // For memcpy
#include <utility> // For std::move
using namespace std;

class SmartArray {
private:
    int* data;
    size_t size;

public:
    // 1. Default Constructor
    SmartArray() : data(nullptr), size(0) {
        cout << "Default constructor: Created empty array\n";
    }

    // 2. Parameterized Constructor
    explicit SmartArray(size_t size) : size(size) {
        cout << "Parameterized constructor: Created array of size " << size << "\n";
        data = new int[size]{}; // Allocate and initialize to zero
    }

    // 3. Copy Constructor (deep copy)
    SmartArray(const SmartArray& other) : size(other.size) {
        cout << "Copy constructor: Deep copying array of size " << size << "\n";
        data = new int[size];
        memcpy(data, other.data, size * sizeof(int));
    }

    // 4. Move Constructor
    SmartArray(SmartArray&& other) noexcept 
        : data(other.data), size(other.size) {
        cout << "Move constructor: Moving resources from array of size " << size << "\n";
        other.data = nullptr; // Steal resources and null source
        other.size = 0;
    }

    // 5. Delegating Constructor
    explicit SmartArray(bool createDefault) : SmartArray() {
        cout << "Delegating constructor: ";
        if (createDefault) {
            cout << "Creating default array\n";
            size = 5;
            data = new int[size]{1, 2, 3, 4, 5};
        } else {
            cout << "Keeping empty array\n";
        }
    }

    // 6. Initializer List Constructor
    SmartArray(initializer_list<int> init) : size(init.size()) {
        cout << "Initializer list constructor: Creating array from list\n";
        data = new int[size];
        copy(init.begin(), init.end(), data);
    }

    // 7. Constructor with Default Arguments
    SmartArray(int a, int b = 0, int c = 0) : size(3) {
        cout << "Default argument constructor: Creating ["
             << a << ", " << b << ", " << c << "]\n";
        data = new int[3]{a, b, c};
    }

    // 8. Destructor - CRITICAL for memory management
    ~SmartArray() {
        // Safely delete allocated memory
        delete[] data;
        
        // For demonstration only - not needed in production
        if (size > 0) {
            cout << "Destructor: Deleted array of size " << size << "\n";
        } else {
            cout << "Destructor: No array to delete\n";
        }
    }

    // 9. Copy Assignment Operator (Rule of Five)
    SmartArray& operator=(const SmartArray& other) {
        if (this != &other) {
            // Clean up existing resources
            delete[] data;
            
            // Copy new resources
            size = other.size;
            data = new int[size];
            memcpy(data, other.data, size * sizeof(int));
            
            cout << "Copy assignment: Deep copied array of size " << size << "\n";
        }
        return *this;
    }

    // 10. Move Assignment Operator (Rule of Five)
    SmartArray& operator=(SmartArray&& other) noexcept {
        if (this != &other) {
            // Clean up existing resources
            delete[] data;
            
            // Transfer ownership
            data = other.data;
            size = other.size;
            
            // Invalidate source
            other.data = nullptr;
            other.size = 0;
            
            cout << "Move assignment: Transferred array of size " << size << "\n";
        }
        return *this;
    }

    // Display array contents
    void print() const {
        if (size == 0) {
            cout << "[] (empty array)\n";
            return;
        }
        
        cout << "[";
        for (size_t i = 0; i < size; ++i) {
            cout << data[i];
            if (i < size - 1) cout << ", ";
        }
        cout << "]\n";
    }

    // Get array size
    size_t getSize() const { return size; }
};

// Demonstrate proper memory management
void demonstrateMemoryManagement() {
    cout << "\n=== Memory Management Demonstration ===\n";
    
    // Stack allocation - automatic destruction
    cout << "\nStack-allocated object:\n";
    SmartArray stackArray(3);
    stackArray.print();
    // Destructor called automatically when going out of scope
    
    // Heap allocation - requires manual deletion
    cout << "\nHeap-allocated object:\n";
    SmartArray* heapArray = new SmartArray(4);
    heapArray->print();
    delete heapArray; // MUST call delete to trigger destructor
    
    // Move semantics demonstration
    cout << "\nMove semantics:\n";
    SmartArray source(2);
    source.print();
    
    SmartArray destination = move(source); // Move constructor
    cout << "After move:\n";
    cout << "Destination: ";
    destination.print();
    cout << "Source: ";
    source.print(); // Now empty (resources moved)
}

int main() {
    cout << "===== Constructor Demonstrations =====\n\n";
    
    // 1. Default Constructor
    SmartArray obj1;
    cout << "obj1: ";
    obj1.print();
    
    // 2. Parameterized Constructor
    SmartArray obj2(3);
    cout << "obj2: ";
    obj2.print();
    
    // 3. Copy Constructor
    SmartArray obj3(obj2);
    cout << "obj3 (copy of obj2): ";
    obj3.print();
    
    // 4. Move Constructor
    SmartArray obj4(move(obj3));
    cout << "obj4 (moved from obj3): ";
    obj4.print();
    cout << "obj3 after move: ";
    obj3.print();
    
    // 5. Delegating Constructor
    SmartArray obj5(true);
    cout << "obj5: ";
    obj5.print();
    
    SmartArray obj5b(false);
    cout << "obj5b: ";
    obj5b.print();
    
    // 6. Initializer List Constructor
    SmartArray obj6{10, 20, 30, 40};
    cout << "obj6: ";
    obj6.print();
    
    // 7. Constructor with Default Arguments
    SmartArray obj7(100);
    cout << "obj7: ";
    obj7.print();
    
    SmartArray obj8(100, 200);
    cout << "obj8: ";
    obj8.print();
    
    SmartArray obj9(100, 200, 300);
    cout << "obj9: ";
    obj9.print();
    
    // 8. Assignment operators
    cout << "\nAssignment operators:\n";
    SmartArray obj10;
    obj10 = obj6; // Copy assignment
    cout << "obj10 (copy of obj6): ";
    obj10.print();
    
    SmartArray obj11;
    obj11 = move(obj6); // Move assignment
    cout << "obj11 (moved from obj6): ";
    obj11.print();
    cout << "obj6 after move: ";
    obj6.print();
    
    // Memory management demonstration
    demonstrateMemoryManagement();
    
    cout << "\n=== Objects going out of scope ===\n";
    // All destructors called automatically in reverse order
    // Note: obj3 was moved from but still needs to be safely destroyed
    
    return 0;
}