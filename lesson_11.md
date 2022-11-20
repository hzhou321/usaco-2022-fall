Lesson 11 - 2001 - 2022-11-20

## Word Processor
```
char_count = 0
for i=0:N
   n = strlen(s[i])
   if char_count+n <= K
       if char_count>0
          printf(" ")
       print(s[i])
       char_count+=n
   else
       print("\n")
       char_count = 0
if char_count > 0
   print("\n")
          
```

## Photoshoot

4
4 6 7
a1+a2          = 4
   a2+a3       = 6
      a3+a4    = 7
```
foreach permutation  --> O(N!)
    if check()
        return and print ans        
```
```
for i=0:N   -- O(N^2)
   a[0] = i+1  
   for j=1:N
       a[j] = b[j-1] -a[j-1]
```       
## Race
```
K = 10 
X = 1 --> run <= 1
Try: 
Speed: 0 1 2 3 4 
Dist :   1 3 6 10

Try:
0 1 2 3 2 1 1
  1 3 6 8 9 10
  
// say M is maximum speed
0 1 2 3 ... M M-1 M-2 ... X
  1 3 6 ....
front dist: d1 = (1+M)M/2
back  dist: d2 = (M-1+X) * (M-X) / 2
d1 + d2 <= X
1. d1+d2 == X -> M + (M-X) = 2M-X 
2. rem = X-(d1+d2) --> 2M-X + (1 or 2)
```
```
// input
// determine M
M=1
while true
   if calc_dist(M) > K  // M is too big
      M--
      break
   M++
dist = calc_dist(M)
ans = 2*M-X
if dist == X
    return ans
else 
    rem = X -dist
    // 3 cases
    if rem <= M && rem >=X
        return ans+1
    else if rem < X
        ...
    else if rem > M
        ...
```        

```
int calc_dist(M)
    d1 = (1+M)*M/2
    d2 = (M-1+X)*(M-X)/2
    return d1+d2
```    
