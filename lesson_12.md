# Lesson 12 - 221204

Iterating pairs (including triplets, quad)
```
for i=0:N
    for j=i+1:N
        for k=j+1:N
            x x x 
            x x x
            x x x
```

## The concept of permutation
```
for i=0:K
    for j=0:M
        flip(A[j], B[j])
```
   
   
1. P[i] = i
    * -> all you need know is ith cow goes to where
    *  i -> j, encode permutaion into an array: Q[i]: ith cow goes to Q[i]
2. P[i] --> swap P[i] according to prob -> P[]   -> Q[P[i]] = i

```
for i=0:K  // -> optimize into O(1) with knowledge cycle
    for j=0:N
        P[i] = Q[P[i]]
```

## A permutation cycle
* i->j->k->.. -> i
* A permutation consists of cliques of cycle 
* 0 1 2 3 4 5
*   0 -> 2 -> 4 -> 0 *cycle of 3*,   1 - 3 - 1 *cycle of 2*   5 - 5 - 5 *cycle of 1*
* A cycle has a count

* After enough iteration, every one goes back to original position 


* P[i] --> Q[i]
* Find cycles for every N
```
for i=0:N
   if Cyclemap[i] != -1
       find_cycle(i)
   

std::vector<int> Cycles[N]
int Cyclemap[N] # Cyclemap[2] = 0
void find_cycle(i)
   i_start = i
   for k=0:N
      j=Q[i]
      Cycles[i].push_back(j)
      if j==i_start
         // found the cycle
         break
```
