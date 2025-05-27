
//  g++ -std=c++11 q2.cpp -o a.out && ./a.out
#include <iostream>
using namespace std;

// Function to remove duplicates from a fixed array of size 5#include <iostream>
using namespace std;

void removeDuplicates(int arr[5]) {
    int newarr[5];  // Temporary array to store unique elements
    int size = 0;   // Track number of unique elements

    for (int i = 0; i < 5; i++) {
        bool isDuplicate = false;

        // Check if arr[i] is already in newarr
        for (int j = 0; j < size; j++) {
            if (arr[i] == newarr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate, add it to newarr
        if (!isDuplicate) {
            newarr[size] = arr[i];
            size++;
        }
    }

    // Print the array after removing duplicates
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << newarr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 2, 3, 1};

    cout << "Original array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    removeDuplicates(arr);

    return 0;
}

