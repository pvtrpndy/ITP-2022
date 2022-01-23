# ITP-Assignment-1(2022)

**Team Members**
|   Enrollment No.  |   Name                 | GithubId        |
|   --------------  |   -------------------- | ----------------|
|    IEC2021063     |   Javesh Lodha         | javesshhh       |
|    IEC2021064     |   Yash Gupta           | yashg-116       |
|    IEC2021065     |   Shashi Kumar Chaubey | humbleshashi8104|
|    IEC2021066     |   Pavitra Pandey       | pvtrpndy        |


**Group No-**"16"

**Faculty Name-**"Dr. Mohammad Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Sorting arrays into ascending or descending order, and printing the odd and even elements separately.

---
## How to use code
Here is a simpled way to download and run the code 
#Download project
```
git clone https://github.com/pvtrpndy/ITP-2022.git 
```
Project Initialize 
```
cd assignment-folder-1
```


Run the code
```
gcc source_code.c
```
```
./source_code.exe
```
---
**Test case**

Find max
```
Test Case-1
Input:
Enter the number of elements to sort
4
Enter the elements to sort
3 2 1 4

Output:
Sorted array is: 1 2 3 4 
Sorted array with even numbers is: 2 4 
Sorted array with odd numbers is: 1 3 
Sorted array in descending order is: 4 3 2 1

#--------------------------#
Test Case-2
Input:
Enter the number of elements to sort
5
Enter the elements to sort
7 8 2 5 1

Output:
Sorted array is: 1 2 5 7 8 
Sorted array with even numbers is: 2 8 
Sorted array with odd numbers is: 1 5 7 
Sorted array in descending order is: 8 7 5 2 1
```

---

### Theory
We will use bubble sort to sort the array. The length of array is n.

1. Suppose we iterate over the array and apply swap operation over two adjacent elements if the element with higher index is smaller than the element with lower index.
2. We will perform such swap n-1 times.
3. This will bubble up at least one element to its designated position.
4. So we will do these set of operations, n times to ensure every element is at its designated position


---

### Analysis

**Time Complexity**

A quick and simplified answer is that we will be iterating the loop over n(n-1) times, so the time complexity of the code would depend on the n^2, where n is the number of elements in the array. 

![alt text](https://cdn.discordapp.com/attachments/871004332294815744/934777228531740672/unknown.png)

---

### References
1. https://www.geeksforgeeks.org
2. https://stackoverflow.com
