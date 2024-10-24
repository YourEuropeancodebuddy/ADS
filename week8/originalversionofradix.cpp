#include <iostream>
using namespace std;

// Function to get the maximum element from arr[]
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to perform counting sort based on a specific digit (exp)
void countSort(int arr[], int n, int exp) {
    int output[n]; // Output array
    int count[10] = {0};

    // Store count of occurrences in count[]
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Change count[i] so that count[i] now contains actual position of this digit in output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array in reverse order (for MSB to LSB)
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] contains sorted numbers based on current digit
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Function to perform Radix Sort starting from MSB
void radixSortMSB(int arr[], int n) {
    // Find the maximum number to know the number of digits
    int max = getMax(arr, n);

    // Determine the most significant bit position
    int exp = 1;
    while (max / exp > 0) {
        exp *= 10;
    }
    exp /= 10; // we divide by 10 because the greatest exponent we can get is when the loop exit when now 
    // the exponent is bigger than the highest number
    // and this means that to get our highest exponent we can divide with we go back one zero 
    // which is deviding by 10 

    // Perform counting sort for every digit from most significant digit to least significant digit
    for (exp; exp > 0; exp /= 10) {
        countSort(arr, n, exp);
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    radixSortMSB(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
