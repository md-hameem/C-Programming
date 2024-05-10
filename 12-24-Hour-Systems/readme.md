# Project: 12-24 Hour Systems

## Requirements：
1.  Write a program that requires the user to enter a 24-hour time, and then display a 12-hour time.
2.  Input format: enter the time in the 24-hour format given in one line with the middle ":" sign (semicolon). For example, 12:34 means twelve thirty-four. When the number of hours or minutes is less than 10, there is no leading zero. For example, 5:6 means five six. Tips: you can add a ":" to scanf's string and have scanf handle the colon.
3.  Output format: output the 12-hour time corresponding to the input time in one line. The format of the number part is the same as that of the input, followed by a space, followed by the string "AM" representing the morning or the string "PM" representing the afternoon. For example, "5:6 PM" means five-six in the afternoon. Note that in the English habit, 12:00 at noon is regarded as afternoon, so 12:00 in the 24-hour system is 12:0 PM in the 12-hour system, And 0 o'clock is considered the time of the next day, so it is 0:0 AM.

### For example:
Input: 
```
21:11
``` 
Output: 
```
9:11 PM
```