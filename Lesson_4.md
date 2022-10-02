# Lesson 4 - 2022/10/02

## Sleeping in Class 

* We are making groups of equal size
* The ends need group up
```
n1 = 1
while n1 <= N
   avg = 0
   for i=0:n1
       avg += A[i]
   if total % avg != 0
       goto try_next
   if n1 == N
       return true
   
   tsum = 0
   for i=0:N
       tsum += A[i]
       if tsum == avg
           tsum=0
       elif tsum > avg
           # doesn't work, restart the try
           goto try_next
       // else // tsum < sum, keep going    
   return true    
   
   try_next:
   n1++

// Never should reach here, or the code is wrong
return false   
```

* N - num_groups -> is the ans
