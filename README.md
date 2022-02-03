# ITP-Assignment-2(2022)

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
Program to calculate age by finding difference between current date and date of birth.

---
## How to use code
Here is a simpled way to download and run the code 
#Download project
```
git clone https://github.com/pvtrpndy/ITP-2-2022.git 
```
Project Initialize 
```
cd assignment-folder-2
```


Run the code
```
gcc assignment.c
```
```
./assignment.exe
```
---
**Test case**

Find max
```
Test case:

Input:
Enter the date of birth
29 09 2003

Enter the current date
31 1 2022

Output:
You are currently 2 days, 4 months and 18 years old.

```

---

### Theory
1. We have defined a structure named “date” here which contains three int data types named as days, months and years respectively.
2. Now, after storing both the dates, we will take the difference between the current date and the date of birth.
3. If the difference between the two dates is less than 0, we will carry over one month and add 30 to the difference of days.
4. Now, we will continue to subtract the months of the two dates.
5. If the difference is smaller than 0, we will borrow one from the year and add 12 to the difference of months.
6. Now, we will display the difference between the two dates in the form of days, months and years.


---

### References
1. https://www.geeksforgeeks.org
2. https://stackoverflow.com
