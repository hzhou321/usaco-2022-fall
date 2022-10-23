# Lesson 7 - 2101 - 221023

## Uddered but not Herd
```
int A_list[26]
int word[N]

j = 0
while true
    for i=0:26    
        if word[j] == A_list[i]
            j++
            if j == N
                goto answer
                
answer:
   print the answer
```

## Even More Odd Photos

Case 1: even == odd
Case 2: even > odd
Case 3: even < odd
    how many extra odd
    * 3 is a group for even + odd
    * remain 0, 1, 2
    
## Just Stalling 

* Permutation counting
*  a, b, c, d
*  How many ways we can order them -- permutaions we can have
*  abc, acb, bca, bac, cab, cba
*  3 * 2 * 1 
* --> generalize, if we have N, N * (N-1) * (N-2) *... 1 -> N!

* 4 stalls, we need think how many 
   * 2 4 3 4 -> 2 3 4 4 
   *            2*(3-1)*(4-2)*(4-3) -> 2 * 2 * 2 * 1 = 8
```
for i1=0:4
    for i2=0:4
        if (A[i2] == A[i1]) 
             continue
        for i3=0:4
            if A[i3] == A[i1] || A[i3] == A[i2]
                continue
            for i4=0:4
                if A[i4]==A[i1] || A[i4]==A[i2] || A[i4]==A[i3]
                     continue
                if A[i1] > B[i1] || ...
                     continuefor i1=0:4
                for i5=0:(N>5?1:N)
                    
                count++   
               

ans = count                
```
* permutation counting
```
sort B_list
counts[N]
for i=0:N
   -> counts[i]  // how many cows could fit into B[i]

//ans = counts[0] * (counts[1] -1) * ...
long long ans = 1
for i = 0:N
    ans *= (count[i] - i)     
```

* how to write code that enumerate all N! permutations 
```
if N==1
    for i=0:N
if N==2
    for i=0:N
       for j=0:N
```

* insight: enumeration of N permutations is the same as counting for 1:N^N
* 0 1 2 3 
*     0000 0001 0002 0003 0010 0011 0012...
* for n=0:4^4
*     -> i0=n%N                            i0 = n % 10
*        i1=n%(N*N)/N                      i1 = n % 100 / 10
*        i2=n%(N*N*N)/(N*N)                i2 = n % 1000 / 100

# An equivalent way of **COUNTING** --> essential code
```
int digits[N] = {0}
while cond
    for(j=0:N)
        digit[j]++
        if (digit[j] == N)
            digit[j] = 0
            if j+1<N
                digit[j+1]++
            else
                goto finish

```
* How to improve the counting efficiency
```
int digits[N] = {0, 1, 2, 3, ., N-1}
while cond
    swap digits[0] and digits[1]
```

* counting of 8 digits using 8 nested loop
int digits[8] = {0, 0, 0, 0, 0, ...}

