# Baby Bites

Arild just turned 1 year old, and is currently learning how to count. His favorite thing to count is how many\
mouthfuls he has in a meal: every time he gets a bite, he will count it by saying the number out loud.

Unfortunately, talking while having a mouthful sometimes causes Arild to mumble incomprehensibly, making it hard\
to know how far he has counted. Sometimes you even suspect he loses his count! You decide to write a program to\
determine whether Arild’s counting makes sense or not.

## Input

The first line of input contains an integer *n* (1 ≤ *n* ≤ 1000), the number of bites Arild receives. Then second line\
contains *n* space-separated words spoken by Arild, the *i*’th of which is either a non-negative integer\
*a*<sub>*i*</sub> (0 ≤ *a*<sub>*i*</sub> ≤ 10000) or the string “mumble”.

## Output

If Arild’s counting might make sense, print the string “makes sense”. Otherwise, print the string\
“something is fishy”.

| Sample Input                    | Sample Output       |
| ---                             | ---                 |
| 5                               | makes sense         |
| 1 2 3 mumble 5                  |                     |
|                                 |                     |
| 8                               | something is fishy  |
| 1 2 3 mumble mumble 7 mumble 8  |                     |
|                                 |                     |
| 3                               | makes sense         |
| mumble mumble mumble            |                     |