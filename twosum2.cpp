#include <iostream>
#include <vector>
using namespace std;

/*
Problem:
Given a sorted array, find two numbers whose sum equals the target.
Return their 1-based indices.

Example:
numbers = [2,7,11,15], target = 9
Output = [1,2]
*/

vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            return {left + 1, right + 1};  // 1-based index
        } 
        else if (sum > target) {
            right--;
        } 
        else {
            left++;
        }
    }
    return {-1, -1};
}

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(numbers, target);

    cout << "Index 1 = " << result[0] << endl;
    cout << "Index 2 = " << result[1] << endl;

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
