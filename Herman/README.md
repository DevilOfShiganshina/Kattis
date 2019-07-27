# Herman

The 19th century German mathematician Hermann Minkowski investigated a non-Euclidian geometry, called the\
taxicab geometry. In taxicab geometry the distance between two points *T*<sub>1</sub>(*x*<sub>1</sub>,*y*<sub>1</sub>) and *T*<sub>2</sub>(*x*<sub>2</sub>,*y*<sub>2</sub>) is defined as:

*D*(*T*<sub>1</sub>,*T*<sub>2</sub>)=|*x*<sub>1</sub> − *x*<sub>2</sub>| + ∣*y*<sub>1</sub> − *y*<sub>2</sub>∣


All other definitions are the same as in Euclidian geometry, including that of a circle:

A circle is the set of all points in a plane at a fixed distance (the radius) from a fixed point (the centre of the circle).

We are interested in the difference of the areas of two circles with radius *R*, one of which is in normal (Euclidian)\
geometry, and the other in taxicab geometry. The burden of solving this difficult problem has fallen onto you.

## Input

The first and only line of input will contain the radius R, a positive integer smaller than or equal to 10000.

## Output

On the first line you should output the area of a circle with radius *R* in normal (Euclidian) geometry. On the second\
line you should output the area of a circle with radius *R* in taxicab geometry.

| Sample Input | Sample Output |
| ---          | ---           |
| 1            | 3.141593      |
|              | 2.000000      |
|              |               |
| 21           | 1385.442360   |
|              | 882.000000    |
|              |               |
| 42           | 5541.769441   |
|              | 3528.000000   |