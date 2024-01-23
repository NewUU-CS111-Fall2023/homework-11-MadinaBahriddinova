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

    Problem3 problem;
    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};
    bool result = problem.wordBreak(s, wordDict);
    cout << "Can be segmented: " << (result ? "true" : "false") << endl;

    Problem4 problem;
    int a = 2;
    vector<int> b = {1, 0};
    int result = problem.superPow(a, b);
    cout << "Result: " << result << endl;

    Problem5 problem;
    string key = "happy boy";
    string message = "hpyp bop";
    string decodedMessage = problem.decodeMessage(key, message);
    cout << "Decoded message: " << decodedMessage << endl;

    Problem6 problem;
    int n = 10;
    vector<int> result = problem.generatePrimesGreaterThanN(n);
    cout << "Two prime numbers greater than " << n << ": " << result[0] << " and " << result[1] << endl;


    return 0;
}
