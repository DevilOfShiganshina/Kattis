# Sum Kind of Problem

For this problem you will compute various running sums of values for positive integers.

## Input

The first line of input contains a single integer *P*, (1 ≤ *P* ≤ 10000), which is the number of data sets that follow.\
Each data set should be processed identically and independently. Each data set consists of a single line of input. It\
contains the data set number, *K*, followed by an integer *N*, (1 ≤ *N* ≤ 10000).

## Output

For each data set there is one line of output. The single output line consists of the data set number, *K*, followed by a\
single space followed by three space separated integers *S*<sub>*1*</sub>, *S*<sub>*2*</sub> and *S*<sub>*3*</sub> such that:

- *S*<sub>*1*</sub> = The sum of the first *N* positive integers.
- *S*<sub>*2*</sub> = The sum of the first *N* odd integers.
- *S*<sub>*3*</sub> = The sum of the first *N* even integers.

| Sample Input | Sample Output              |
| ---          | ---                        |
| 3            | 1 1 1 2                    |
| 1 1          | 2 55 100 110               |
| 2 10         | 3 501501 1002001 1003002   |
| 3 1001       |                            |