Subsets


Given an array of distinct integers A, return all possible subsets.

Note: The list should not contain any duplicate subsets.

Example
A: [1, 3, 2]
Subsets: [
    [],
    [1],
    [1, 2],
    [1, 2, 3],
    [1, 3],
    [2],
    [2, 3],
    [3]
]
Testing
Input Format
The first line contains an integer ‘T’, denoting the number of test cases.

For each test case, the input has two lines.

An integer ‘n’ denoting the length of the array A.
n space-separated unique integers denoting the elements of the array A.
Output Format
For each test case, the output has the following lines:

The first line contains an integer ‘m’ denoting the total no of subsets.
The next m line contains space-separated integers denoting elements in that particular subset.
Sample Input
3
1
5
2
2 4
3
1 3 2
Expected Output
2

5
4

2
2 4
4
8

1
1 2
1 2 3
1 3
2
2 3
3