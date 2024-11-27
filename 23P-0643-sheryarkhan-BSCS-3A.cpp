#include <iostream>
using namespace std;

class Vector {
protected:
    int *elements;
    int capacity;
    int length;
    
    // Helper function to resize the array when needed
    void resize() {
        capacity *= 2;
        int *newElements = new int[capacity];
        for (int i = 0; i < length; ++i) {
            newElements[i] = elements[i];
        }
        delete[] elements;
        elements = newElements;
    }

public:
    // Constructor
    Vector() : capacity(4), length(0) {
        elements = new int[capacity];
    }

    // Destructor
    ~Vector() {
        delete[] elements;
    }

    // Adds an element to the array, resizing if necessary
    virtual void push_back(int value) {
        if (length == capacity) {
            resize();
        }
        elements[length++] = value;
    }

    // Returns the element at a given index
    int get(int index) const {
        if (index < 0 || index >= length) {
            throw out_of_range("Index out of bounds");
        }
        return elements[index];
    }

    // Returns the current number of elements
    int find_len() const {
        return length;
    }

    // Prints the elements in the array
    void print() const {
        cout << "Printing vector: ";
        for (int i = 0; i < length; ++i) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

class UniqueVector : public Vector {
public:
    // Adds an element only if it's not already in the array
    void push_back(int value) override {
        bool is_unique = true;
        for (int i = 0; i < length; ++i) {
            if (elements[i] == value) {
                is_unique = false;
                break;
            }
        }
        if (is_unique) {
            Vector::push_back(value);
        }
    }

    // Prints the elements in the unique vector
    void print() const {
        cout << "Printing unique vector: ";
        for (int i = 0; i < length; ++i) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

class FrequencyVector : public Vector {
private:
    int *frequencies;

public:
    // Constructor to initialize frequency array
    FrequencyVector() : Vector() {
        frequencies = new int[capacity]();
    }

    // Destructor to delete frequency array
    ~FrequencyVector() {
        delete[] frequencies;
    }

    // Adds an element and updates its frequency
    void push_back(int value) override {
        bool found = false;
        for (int i = 0; i < length; ++i) {
            if (elements[i] == value) {
                frequencies[i]++;
                found = true;
                break;
            }
        }
        if (!found) {
            if (length == capacity) {
                resize();
                int *newFrequencies = new int[capacity]();
                for (int i = 0; i < length; ++i) {
                    newFrequencies[i] = frequencies[i];
                }
                delete[] frequencies;
                frequencies = newFrequencies;
            }
            elements[length] = value;
            frequencies[length] = 1;
            length++;
        }
    }

    // Gets the frequency of a specific value
    int get_frequency(int value) const {
        for (int i = 0; i < length; ++i) {
            if (elements[i] == value) {
                return frequencies[i];
            }
        }
        return 0;
    }

    // Prints the elements in the frequency vector
    void print() const {
        cout << "Printing the frequency vector: ";
        for (int i = 0; i < length; ++i) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

// Main function to handle input/output as specified
int main() {
    int x, s, f;
    
    // Input and populate Vector
    cin >> x;
    Vector mainVector;
    for (int i = 0; i < x; ++i) {
        int value;
        cin >> value;
        mainVector.push_back(value);
    }
    mainVector.print();

    // Input and populate UniqueVector
    cin >> s;
    UniqueVector uniqueVector;
    for (int i = 0; i < s; ++i) {
        int value;
        cin >> value;
        uniqueVector.push_back(value);
    }
    uniqueVector.print();

    // Input and populate FrequencyVector
    cin >> f;
    FrequencyVector freqVector;
    for (int i = 0; i < f; ++i) {
        int value;
        freqVector.push_back(value);
    }
    freqVector.print();

    // Query specific frequencies
    int D, E, F;
    cin >> D >> E >> F;
    cout << freqVector.get_frequency(D) << " "
         << freqVector.get_frequency(E) << " "
         << freqVector.get_frequency(F) << endl;

    return 0;
}
