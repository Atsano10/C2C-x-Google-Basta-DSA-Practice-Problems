/*
You are given two non-empty arrays representing two non-negative integers. The digits are stored in reverse order, 
and each of their nodes contains a single digit. Add the two numbers and return the sum as an array. 
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:
Input: arr1 = [2,4,3], arr2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Example 2:
Input: arr1 = [0], arr2 = [0]
Output: [0]

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] array.integer arr1

[input] array.integer arr2

[output] array.integer
*/


//Time started 11:38 - 
// Thought process, we need to re order the numbers correctly, keep count of "carrys" and add each corresponding index.
// Queues?

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr1, vector<int> arr2) {
    reverse(arr1.begin(),arr1.end());
    reverse(arr2.begin(),arr2.end());

    int carry = 0;
    vector<int> result;

    for(int i = 0; i < arr1.size() && i < arr2.size(); i++){
        if(arr1[i] + arr2[i] > 10){

        }
        result.push_back(arr1[i]+arr2[i]);
    }

    return result;
}

