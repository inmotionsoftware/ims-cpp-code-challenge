# Code Challenge

## The Problem

You are a research scientist working in the field of genetics. You have been tasked with simulating genome changes to a type of single celled bacteria over several generations. You notice that as genes are combined in your test bacteria they follow some basic **pair insertion** patterns. You just need to work out the pair insertion process over a few generations.

## The Task

The first line is the base genome of the bacteria - This is the starting point of our experiment. 
```
TAFT
```

### Pair insertion rules

The following lines specify the pair insertion rules. A rule like `AB  → C` means that when genes `A` and `B` are adjacent, gene `C` should be inserted between them after a generation.

```
TT → F
JF → F
JJ → A
FA → A
FT → J
TA → F
AF → J
JT → A
TF → A
AA → T
JA → T
FJ → T
TJ → T
FF → F
AJ → A
AT → A
```

Starting with the gene sequence `TAFT` the first step considers the first three pairs
- The  first pair `TA` matches the rule `TA → F` so gene `F` is inserted between, becoming `TFA`
- The second pair `AF` matches the rule `AF → J` so gene `J` is inserted between, becoming `AJF`
- The third pair `FT` matches the rule `FT → J` so gene `J` is inserted between, becoming `FJT`

These pairs overlap with one another. The second gene of the first pair becomes the first gene of the second pair, and so on. All pairs are considered simultaneously. Inserted elements are not considered part of the sequence until the next generation. 

So our example goes from `TAFT` to `TFAJFJT` after the first generation.

| Generation | Gene Sequence |
| ------ | ------- |
| 0 | TAFT |
| 1 | TFAJFJT |
| 2 | TAFAAAJFFTJAT |
| 3 | TFAJFAATATAAJFFFFJTTJTAAT |
| 4 | TAFAAAJFFAATAATFAATFATAAJFFFFFFFFTJATFTTJATFATAAT |

These gene sequences expand very quickly. After `5` generations, it has a length of `97`. After `10` generations it has a length of `3073`. 

After `10` generations, `A` occurs `1183` times, `F` occurs `1204` times, `J` occurs `127` times, and `T` occurs `559` times. 

Taking the quantity of the most common element `F` (1204) and subtracting the quantity of the least common element `J` (127) produces `1204 - 127 = 1077`. 

## Warm Up

Using the included gene template, Apply `10` generations of the pair insertions to the gene template and find the most and least common genes in the results. 

**What do you get if you take the quantity of the most common gene and subtract the quantity of the least common gene?**

## The Challenge - PART 2

When your answer matches the example above, you can move on to [PART 2](PART2.md)