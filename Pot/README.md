# Pot

The teacher has sent an e-mail to her students with the following task: “Write a program that will determine and\
output the value of X if given the statement:

X= number<sup>pow1<sub>1</sub></sup>+ number<sup>pow2<sub>2</sub></sup> + … +number<sup>powN<sub>N</sub></sup>

and it holds that number1, number2 to numberN are integers, and pow1, pow2 to powN are one-digit integers.”\
Unfortunately, when the teacher downloaded the task to her computer, the text formatting was lost so the task\
transformed into a sum of N integers:

X=P<sub>1</sub> + P<sub>2</sub> + … + P<sub>N</sub>

For example, without text formatting, the original task in the form of X=212+1253 became a task in the form\
of X=212+1253. Help the teacher by writing a program that will, for given N integers from P1 to PN determine\
and output the value of X from the original task.

## Input

The first line of input contains the integer N (1≤N≤10), the number of the addends from the task. Each of the\
following N lines contains the integer Pi (10 ≤ P<sub>i</sub> ≤ 9999, i = 1, …, N) from the task.

## Output

The first and only line of output must contain the value of X (X≤1000000000) from the original task.

| Sample Input | Sample Output |
| ---          | ---           |
| 2            | 1953566       |
| 212          |               |
| 1253         |               |
|              |               |
| 5            | 102           |
| 23           |               |
| 17           |               |
| 43           |               |
| 52           |               |
| 22           |               |
|              |               |
| 3            | 10385         |
| 213          |               |
| 102          |               |
| 45           |               |