# Project: Application of cycle structure

## Requirements：
1. A record in the mobile phone address book contains the following basic information: friend's name, date of birth, gender, fixed phone number, and mobile phone number. This question requires one to write a program, input N records, and display any record as required.
2. Input format: Enter to give a positive integer N (<=10) in line 1; Then N lines, each line gives a record in the format of "name, birthday, gender, fixed phone". Name is a non-empty string with no more than 10 characters and no spaces; The date of birth is given in the format of "yyyy/mm/dd"; Gender "M" means "male" and "F" means "female"; "Fixed phone" and "mobile phone" are consecutive numbers with no more than 15 digits, and "+" may appear in front of them. After the entry of the address book record is completed, the last line gives a positive integer K, and then gives K integers, representing the record number to be queried (from 0 to N-1). The numbers are separated by spaces.
3.  Output format: For each record number to be queried, output the record in one line in the format of "name, fixed phone gender, birthday". If the record to be queried does not exist, "Not Found" will be output.

### For example:
Input:
```
3
Chris 1984/03/10 F +86181779452 13707010007
Lao 1967/11/30 F 057187951100 +8618618623333
Qiao 1980/01/01 M 84172333 10086
2 1 7
```
Output:
```
Lao 057187951100 +8618618623333 F 1967/11/30
Not Found
```