# Code Challenge

## The Problem

You are a research scientist working in the field of genenomes. You have been tasked with simulating genetic changes to a type of single celled bacteria over several generations. You notice that as genes are combined in your test bacteria they follow some basic **pair insertion** patterns. You just need to work out the pair insertion process over a few generations.

## The Task

The first line is the base genome of the bacteria - This is the starting point of our experiment. 
```
NNCB
```

### Pair insertion rules

The following lines specify the pair insertion rules. A rule like `AB  → C` means that when genes `A` and `B` are adjacent, gene `C` should be inserted between them after a generation.

```
CH → B
HH → N
CB → H
NH → C
HB → C
HC → B
HN → C
NN → C
BH → H
NC → B
NB → B
BN → B
BB → N
BC → B
CC → N
CN → C
```

Starting with the gene sequence `NNCB` the first step considers the first three pairs
- The  first pair `NN` matches the rule `NN → C` so gene `C` is inserted between, becoming `NCN`
- The second pair `NC` matches the rule `NC → B` so gene `B` is inserted between, becoming `NBC`
- The third pair `CB` matches the rule `CB → H` so gene `H` is inserted between, becoming `CHB`

These pairs overlap with one another. The second gene of the first pair becomes the first gene of the second pair, and so on. All pairs are considered simultaneously. Inserted elements are not considered part of the sequence until the next generation. 

So our example goes from `NNCB` to `NCNBCHB` after the first generation.

| Generation | Gene Sequence |
| ------ | ------- |
| 0 | NNCB |
| 1 | NCNBCHB |
| 2 | NBCCNBBBCBHCB |
| 3 | NBBBCNCCNBBNBNBBCHBHHBCHB |
| 4 | NBBNBNBBCCNBCNCCNBBNBBNBBBNBBNBBCBHCBHHNHCBBCBHCB |

These gene sequences expand very quickly. After `5` generations, it has a length of `97`. After `10` generations it has a length of `3073`. After generation `10`, `B` occurs `1749` times, `C` occurs `298` times, `H` occurs `161` times, and `N` occurs `865` times. 

Taking the quantity of the most common element `B` (1749) and subtracting the quantity of the least common element `H` (161) produces `1749 - 161 = 1588`. 

## Your Challenge

Using the included gene template, Apply `10` generations of the pair insertions to the gene template and find the most and least common genes in the results. 

**What do you get if you take the quantity of the most common gene and subtract the quantity of the least common gene?**

## Part 2

We need to continue our experiement for several more generations. Can you simulate the genes after `40 generations`? 

In the above example, the most common element is `B` (occurring 2192039569602 times) and the least common element is `H` (occurring 3849876073 times); subtracting these produces `2188189693529`.

Apply `40` generations of pair insertion to the gene template and find the most and least common genes in the result. **What do you get if you take the quantity of the most common gene and subtract the quantity of the least common gene?**


# The Code

Your code should be written in clear, clean, standard `C++` free of memory leaks and other errors. It should be easy to read and performant, and demonstrate a solid grasp of the language. Use standard container types as much as possible. It should be free of compile warnings, with no external dependencies. It should compile on either `GCC`, `Clang`, or `VS`. Bonus points if it compiles on all 3.



3288891573057

