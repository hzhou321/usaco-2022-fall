Lesson 10 - 1912 - 221113

* How to comment your code
  Think about you semanic / purpose / intention 
  When it is not obvious, write it down, that's how you comment your code
  
* Canonical iterating pairs
```
for i=0:N
    for j=i+1:N
       ...
```

* loop - full square
```
for i=0:N
    for j=0:N
x x x x 
x x x x
x x x x
x x x x
```

* loop - upper-triangle - including diagnols 
```
for i=0:N
    for j=i:N
x x x x 
. x x x
. . x x
. . . x
```

* loop - lower-triangle - including diagols
```
for i=0:N
    for j=0:i+1
x . . . 
x x . .
x x x .
x x x x
```


* loop - upper-triangle - NOT including diagnols 
```
for i=0:N
    for j=i+1:N
. x x x 
. . x x
. . . x
. . . .
```

* loop - lower-triangle - NOT including diagols
```
for i=0:N
    for j=0:i
. . . . 
x . . .
x x . .
x x x .
```

* It is important to canonicalize your code, so you can think at higher level


## prob 3 - lineup

* `name_to_id(const char *name) -> int
* Beatrice, Belinda, 2:Bella, Bessie, Betsy, Blue, 6:Buttercup, 7:Sue
* 0, 1, 2, 3, 4, 5, 6, 7
* 6 and 2
* 5 and 2
* 7 and 0
0 7 1 2 [5 6]
0 7 1 3 4 5 2 6 

```
counts[8] = {0}
for i=0:N
   counts[a]++
   counts[b]++
0 0 0 0 0 0 0 0 
1 0 2 0 0 1 1 1

for i=0:N
   if output_alreayd(i) 
       continue
   if (counts[i] < 2)
       output(i)
       if (counts[i] == 1)
          output_followers(i)
```

## prob 2 - whereami
```
for K=1:N+1
    flag = 0
    for (i_start = 0:N-K+1)
        if(repeat)
            // K is too small, goto next K
            flag = 1
            break
    if !flag
        return  K

bool check_repeat(i, K)
    for j=0:i
        if strncmp(s+j, s+i, K)==0
            return false
    return true        
```    
