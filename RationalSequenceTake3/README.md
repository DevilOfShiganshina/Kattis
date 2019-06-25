# Rational Sequence

A sequence of positive rational numbers is defined as follows:

An infinite full binary tree labeled by positive rational numbers is defined by:

The label of the root is 1/1.

The left child of label `p/q` is `p/(p+q)`.

The right child of label `p/q` is `(p+q)/q`.

The top of the tree is shown in the following figure:

The sequence is defined by doing a level order (breadth first) traversal of the tree (indicated by the light dashed line). So that:

F(1)=1/1,F(2)=1/2,F(3)=2/1,F(4)=1/3,F(5)=3/2,F(6)=2/3, ...

Write a program to compute the nth element of the sequence, F(n).