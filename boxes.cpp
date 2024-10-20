#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if it's possible to place all toys with a new box of size 'x'
bool canPlaceAllToys(int N, const vector<int>& A, const vector<int>& B, int x) {
    // Copy the sizes of the existing boxes and add the new box of size x
    vector<int> boxes = B;
    boxes.push_back(x);
    
    // Sort both toys' sizes and boxes' sizes
    vector<int> toys = A;
    sort(toys.begin(), toys.end());
    sort(boxes.begin(), boxes.end());
    
    // Try to greedily assign toys to boxes
    int j = 0; // Pointer for boxes
    for (int i = 0; i < N; ++i) {
        // Find the first box that can fit toy i
        while (j < N && boxes[j] < toys[i]) {
            ++j;
        }
        // If there are no more valid boxes, return false
        if (j == N) return false;
        // Otherwise, assign toy i to this box and move to the next box
        ++j;
    }
    
    // If all toys were placed successfully, return true
    return true;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N); // Toy sizes
    vector<int> B(N-1); // Box sizes
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N-1; ++i) {
        cin >> B[i];
    }
    
    // Binary search for the minimum x
    int left = 1, right = *max_element(A.begin(), A.end());
    int result = right;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (canPlaceAllToys(N, A, B, mid)) {
            result = mid; // This mid is a possible solution
            right = mid - 1; // Try for a smaller x
        } else {
            left = mid + 1; // Increase x
        }
    }
    
    // Output the minimum x
    cout << result << endl;

    return 0;
}
