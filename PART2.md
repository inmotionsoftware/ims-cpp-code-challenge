# Part 2

We need to continue our experiement for several more generations. Can you simulate the genes for `20` generations? How about `30` generations? Can you make it to `40` generations? 

With the sample data, and `40` generations the most common element is `F` (occurring `2256478763324` times) and the least common element is `J` (occurring `53927705034` times); subtracting these produces `2202551058290`. Use this to check your work.

## Input Data

Our starting example was a good warm up exercice, but now it's time to work with a more complicated data set.

Click [here](https://github.com/inmotionsoftware/ims-cpp-code-challenge/blob/generator/index.html) to generate your input.

# The Challenge

Take your input data and try to apply `40` generations of pair insertion to the gene template and find the most and least common genes in the result. 

**What do you get if you take the quantity of the most common gene and subtract the quantity of the least common gene?**

Can't make it in `40` generations? How many generations can you reasonably run? Clever optimizations will help push you closer to `40`, but ultimately the solution will require a unique approach to the problem. It can be solved and doesn't require a supercomputer (generally only takes a few milliseconds when done right).

Please submit your answer along with your sample data and code.

## The Code

Your code should be written in clear, clean, standard `C++` free of memory leaks and other errors. It should be easy to read and performant, and demonstrate a solid grasp of the language. Use standard container types as much as possible. It should be free of compile warnings, with no external dependencies. It should compile on either `GCC`, `Clang`, or `MSVC`. Bonus points if it compiles on all 3.