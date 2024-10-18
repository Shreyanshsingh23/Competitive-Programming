#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Interval {
    int L, R;
};

// Comparator function to sort intervals by their left endpoints
bool compare(const Interval& a, const Interval& b) {
    return a.L < b.L;
}

// Function to check if two intervals partially overlap
bool partial_overlap(const Interval& a, const Interval& b) {
    // a and b partially overlap if neither is fully contained within the other
    return (a.L < b.L && b.L < a.R && a.R < b.R) || (b.L < a.L && a.L < b.R && b.R < a.R);
}

int max_clique_size(vector<Interval>& intervals, int N) {
    // Sort intervals by left endpoint
    sort(intervals.begin(), intervals.end(), compare);

    // Keep track of maximum clique size
    int max_clique = 1;

    // Iterate over the intervals and find maximum clique size
    for (int i = 0; i < N; ++i) {
        int clique_size = 1; // Current interval forms a clique of at least size 1
        for (int j = i + 1; j < N; ++j) {
            if (partial_overlap(intervals[i], intervals[j])) {
                clique_size++;
            } else {
                break; // No more intervals can be added to the current clique
            }
        }
        max_clique = max(max_clique, clique_size);
    }

    return max_clique;
}

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int N;
        cin >> N; // Number of intervals
        vector<Interval> intervals(N);

        // Input the intervals
        for (int i = 0; i < N; ++i) {
            cin >> intervals[i].L >> intervals[i].R;
        }

        // Calculate and output the maximum clique size
        int result = max_clique_size(intervals, N);
        cout << result << endl;
    }

    return 0;
}
