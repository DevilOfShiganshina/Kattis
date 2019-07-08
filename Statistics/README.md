# Statistics

Research often involves dealing with large quantities of data, and those data are often too massive to examine\
manually. Statistical descriptions of data can help humans understand their basic properties. Consider a sample of\
*n* numbers *X* = (*x<sub>1</sub> ,x<sub>2</sub>, …, x<sub>n</sub>*). Of many statistics that can be computed on *X*, some of the most important are the\
following:

 - min(*X*): the smallest value in  *X*
 - max(*X*): the largest value in *X*
 - range(*X*): max(*X*)−min(*X*)

Write a program that will analyze samples of data and report these values for each sample.

## Input

The input contains between 1 and 10 test cases. Each test case is described by one line of input, which begins with\
an integer 1 ≤ *n* ≤ 30 and is followed by *n* integers which make up the sample to be analyzed. Each value in the \
ample will be in the range −1000000 to 1000000. Input ends at the end of file.

## Output

For each case, display Case X:, where X is the case number, followed by the min, max, and range of the sample (in\
that order). Follow the format of the sample output.

| Sample Input          | Sample Output     |
| ---                   | ---               |
| 2 4 10                | Case 1: 4 10 6    |
| 9 2 5 6 4 5 9 2 1 4   | Case 2: 1 9 8     |
| 7 6 10 1 2 5 10 9     | Case 3: 1 10 9    |
| 1 9                   | Case 4: 9 9 0     |