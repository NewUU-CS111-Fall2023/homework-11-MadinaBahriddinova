/*
 USE THIS FILE FOR YOUR TESTS,
 AUTOGRADER WILL NOT EXECUTE THIS FILE.
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.cpp"
#include "task_2.cpp"
#include "task_3.cpp"
#include "task_4.cpp"
#include "task_5.cpp"
#include "task_6.cpp"

using namespace std;

int main() {
    Problem1 problem;
    vector<int> nums = {2, 1};
    int target = 1;
    int result = problem.findTargetSumWays(nums, target);
    cout << "Number of different expressions: " << result << endl;
    
    Problem2 problem;
    vector<int> nums = {1, 5, 11, 5};
    bool result = problem.canPartition(nums);
    cout << "Can partition the array: " << (result ? "true" : "false") << endl;


    return 0;
}
