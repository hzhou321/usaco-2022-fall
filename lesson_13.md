Lesson 13 - 2022-12-11

* Searching algorithm
    * maximum value that meets critiria   N N N N ... N Y Y Y ...
    *                                                 maximum that works
    *                                                   minimum that doesn't work

```
// Linear search
for i=0:N
    res = try(i)
    if (!res) {
        continue
    } else {
        ans = i - 1
        break
    }       
```

```
// (canonical) binary search
v1 = 0
v2 = N-1
while v1 <= v2
    v3 = (v1 + v2) / 2
    if try(v3) == 'N' // too small
        v1 = v3 + 1
    else
        v2 = v3 - 1
// v2 v1  (= v2 + 1)               
```

## prob1 
```
for i=0:N
    try --> O(N)
```

```
foreach (i, j) in N --> O(N2)
    for (k=0:N) --> get D
```    

## prob2
6
7 1
1 1
15 1
3 1
10 0
6 1

101001100x000001
3

## prob3
4 3  --> N T (K)
1100
1 2
1 3
0 1

```
for k=0:N
   for i=0:N
       //try()
       for j=0:T
```
* (k,i) = (1, 0): 1000 -> 1000 -> 1000 -> 1000 (k==0) -> is this matching the end -> No
*          0, 1:  0100 -
* (k,i) = (1, 0): 1000 -> 1000 -> 1000 -> 1100 (k==1) -> is this matching the end -> YES  -> count+=1 -> update k_max, k_min         
