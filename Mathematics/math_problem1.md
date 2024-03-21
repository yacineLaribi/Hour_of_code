Problem: Counting Mathematical Elements
=======================================

In this problem, you are required to analyze a given sequence of `numbers` and count the occurrences of `specific mathematical elements`. Given a sequence of `integers`,
your task is to count the `sum of those integers` , the number of `even numbers`, `odd numbers`, `prime numbers`, and `perfect squares` present in the sequence.

Input:
=====
.A sequence of integers `a1,a2,a3,.......,an` where `1 ≤ n ≤ 1000`

Output:
=======
.The `sum` of the sequence .
.Four integers separated by spaces representing the respective number of `even numbers`, `odd numbers`, `prime numbers`, and `perfect squares` in the given sequence.

Note:
=====
.`Prime numbers` are integers greater than 1 that have no positive divisors other than 1 and themselves.
.`Perfect squares` are integers that are squares of other integers (e.g., 1, 4, 9, 16, ...).

Example:
========
`Input:`
```shell
2 3 5 6 8 9 11 12 16 19
```

`Output:`
```shell
4 6 4 3
```
`Explanation:`*
n the given sequence, there are:

`5` even numbers: 2, 6, 8, 12 , 16

`5` odd numbers: 3, 5, 9, 11, 19

`4` prime numbers: 2, 3, 5, 11

`3` perfect squares: 4, 9, 16


Exercise :
==========
`Dataset:`
```shell
20 13 5 8 17 23 6 11 9 12 16 19 7 14 25 18 21 10 3 4
27 22 29 15 2 31 26 33 28 35 37 24 39 32 41 36 43 38 45
47 30 49 34 51 40 53 46 55 50 57 42 59 48 61 44 63 52 65
67 54 69 56 71 58 73 60 75 62 77 64 79 66 81 68 83 70 85
87 72 89 74 91 76 93 78 95 80 97 82 99 84 101 86 103 88 105
107 90 109 92 111 94 113 96 115 98 117 100 119 102 121 104 123 106 125
```
`Help: `(Shafitouni xD)
```shell
sequence = [20, 13, 5, 8, 17, 23, 6, 11, 9, 12, 16, 19, 7, 14, 25, 18, 21, 10, 3, 4,
            27, 22, 29, 15, 2, 31, 26, 33, 28, 35, 37, 24, 39, 32, 41, 36, 43, 38, 45,
            47, 30, 49, 34, 51, 40, 53, 46, 55, 50, 57, 42, 59, 48, 61, 44, 63, 52, 65,
            67, 54, 69, 56, 71, 58, 73, 60, 75, 62, 77, 64, 79, 66, 81, 68, 83, 70, 85,
            87, 72, 89, 74, 91, 76, 93, 78, 95, 80, 97, 82, 99, 84, 101, 86, 103, 88, 105,
            107, 90, 109, 92, 111, 94, 113, 96, 115, 98, 117, 100, 119, 102, 121, 104, 123, 106, 125] ;
```
