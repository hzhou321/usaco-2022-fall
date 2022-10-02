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

# Photoshoot

* Sorting
    * Insertion sort --- starting with empty hand, pick card randomly, insert into your hand in order
       * what is the complexity O(N2) N (cards) x N (find position to insert)
    * Selection sort --- starting with full hand, select the max card, put to the left
       * O(N2), N x N (insertion is O(1), but the selection is O(N)) 
    * swapsort -- bubble sort, quicksort
       * Bubble sort
       ```
       while not_sorted
          for i=0:N
              if A[i] > A[i+1] # out-of-order
                 swap(A[i], A[i+1])
       ```
* Permutaion list
   * A[N] -- maps position i to number A[i]
   * Plist[N] -- maps number i to position Plist[i]
   * We need convert back and forth
