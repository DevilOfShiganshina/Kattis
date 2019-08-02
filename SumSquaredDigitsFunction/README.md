# Sum Squared Digits Function

The *Sum Squared Digits* function, *SSD*(*b*,*n*) of a positive integer *n*, in base *b* is defined by representing *n* in base *b* as\
in:

*n* =*a*<sup>*0*</sup> + *a*<sup>*1*</sup> ∗ *b* + *a*<sup>*2*</sup> ∗ *b*<sup>*2*</sup> + …

then:

*SSD*(*b*,*n*) = *a*<sup>2</sup><sub>0</sub> + *a*<sup>2</sup><sub>1</sub> + *a*<sup>2</sup><sub>2</sub> + …

is the sum of squares of the digits of the representation.

Write a program to compute the Sum Squared Digits function of an input positive number.

## Input

The first line of input contains a single decimal integer *P*, (1 ≤ *P* ≤ 1000), which is the number of data sets that\
follow. Each data set should be processed identically and independently.

Each data set consists of a single line of input. It contains the data set number, *K*, followed by the base, *b*\
(3 ≤ *b* ≤ 16) as a decimal integer, followed by the positive integer, *n* (as a decimal integer) for which the Sum\
Squared Digits function is to be computed with respect to the base *b*. *n* will fit in a 32 bit unsigned integer. The data\
set number *K* starts at 1 and is incremented by 1 for each data set.

## Output

For each data set there is a single line of output.

The single line of output consists of the data set number, *K*, followed by a single space followed by the value of\
*SSD*(*b*,*n*) as a decimal integer.

| Sample Input      | Sample Output |
| ---               | ---           |
| 3                 | 1 30          |
| 1 10 1234         | 2 19          |
| 2 3 98765         | 3 696         |
| 3 16 987654321    |               |