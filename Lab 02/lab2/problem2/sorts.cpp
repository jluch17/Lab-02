/**
 * sorts.cpp
 *
 * EECS 281: Lab 2
 * Spring 2017
 *
 * Tests sorting.
 */

#include <iostream>
#include <vector>
// std::sort
#include <algorithm>
#include <cstdlib>
using namespace std;

/**
 * Implements sort1 Algorithm.
 */
void sort1(vector<int>& numbers, int N);

/**
 * Uses STL sort.
 */
void sort2(vector<int>& numbers);

// change N to test with different sizes of input
const int N = 40000;

int main() {
    // Note: since we do not seed the random number generator,
    // everyone should get the same results with the same size N.
    cout << "generating random numbers vector" << endl;

    vector<int> random_numbers;
    // fill with random integers
    for (int i = 0; i < N; i++) {
        int num = rand();
        random_numbers.push_back(num);
    } // for

    cout << "beginning to sort" << endl;

    // TODO: uncomment the sort you are currently testing
    sort1(random_numbers, N);
    // sort2(random_numbers);

    cout << "finished sorting" << endl;
} // main()


// TODO: implement this function from the algorithm provided.
// This file will not compile until both numbers and N are used.
void sort1(vector<int>& numbers, int N) {
} // sort1()


// This function uses the STL implementation of sort.  Don't worry how this
// is implemented yet, just look up the complexity on cppreference.com or
// cplusplus.com.
void sort2(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
} // sort2()
