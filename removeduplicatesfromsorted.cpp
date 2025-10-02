//Google, Amazon, Microsoft,Linkedin,Facebook//
#include <bits/stdc++.h>
using namespace std;

/*
Problem: Remove Duplicates from Sorted Array
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and return the new length.
The relative order of the elements should be kept the same.

Example:
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
*/

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return 0;

    int i = 0; // slow pointer
    for(int j = 1; j < n; j++) { // fast pointer
        if(nums[i] != nums[j]) {
            i++;           // move slow pointer
            nums[i] = nums[j]; // update unique element
        }
    }
    return i + 1; // new length of array
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++) cin >> nums[i];

    int newLength = removeDuplicates(nums);
    cout << "Length after removing duplicates: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newLength; i++) cout << nums[i] << " ";
    cout << endl;

    return 0;
}
