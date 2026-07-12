/*
Given an array of integers and an integer k, return the total number of subarrays whose sum equals k. A subarray is a contiguous non-empty sequence of elements within an array.

Input : N = 4, array[] = {3, 1, 2, 4}, k = 6
Output: 2
Explanation: The subarrays that sum up to 6 are [3, 1, 2] and [2, 4].

[execution time limit] 0.5 seconds (cpp)       |       [memory limit] 2g
*/

// Time 1:25 ->

#include <iostream>

int subarrays(int arr[], int size, int target){
    int count = 0; // keep a count that allows us to count amount of subarrays

    // Create a nested for loop to check each element and see if they sum to target
    for (int i = 0; i < size; i++){ 
        int sum = arr[i];
        if (sum == target){
            count++;
        }
        for (int j = i+1; j < size ; j++){
            sum += arr[j];
            if (sum == target){
                count++;
            }
        }
    }
    return count;
}

int main() {
    //TestCase1: int arr[5] = {1,2,3,4,5}; {1,2}, {3} | Output 2
    //int size = 5;
    //int target = 3;

    //TestCase2 from problem header. | Output 2
    //int arr[4] = {3, 1, 2, 4};
    //int target = 6;
    //int size = 4;

    //TestCase3 should be 3, {1,3,6}, {3,7}, {10} | Output 2 because it is contigious
    int arr[5] = {1,3,6,7,10};
    int size = 5;
    int target = 10;

    int result = subarrays(arr,size,target);
    std::cout << "This is the result: " << result << std::endl;

}