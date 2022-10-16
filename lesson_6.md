Lesson 6 - 221016 - 2012

* Know your ABCs - trivia

* Daisy Chains - straight forward
    * direct nexted for-loop enumeration of 2-index - O(N^2)
```
for i=0:n
    for j=i+1:n+1
   
```
**Cononicalize your common pattern**
```
for i=0:N
```

* Stuck in a Rut
   * N
   * Intersection
   * Some intersection are real (if they go orthogonal directions)
   * Real intersection will stop 1
   * There is a time order for all these intersection
```
for i=0:N
    for j=i+1:N
        (one is N and the other is E) {
            -> x, y
            -> d1, d2
            -> t1, t2
            -> if one of t1,t2 is negative, then skip
            -> pick the bigger t, find the one that is being stopped 
            -> eliminate all later intersections that involve the stopped cow
            -> a final list of intersections, each stopping one cow
        }
sort the intersection list
foreach intersection
    update the stopped cow's distance

Output each cow
        
```
