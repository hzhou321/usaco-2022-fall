# Lesson 5 - 221009 - 22open

## prob 1 Bronze - Photoshoot

* Swapping odd prefix does nothing
* Swapping even prefix flips all pairs
* Prefix .... -> let's try start from the back
* Let's try simplify preproceing
    * only pair matters, for each pair, if "GH" mark 1, if "HG" mark -1
    * -> pair_list[N/2] -> 1 or -1
    * -> 0 1 -1 1 0 1 1
    * -> 1 -1 0
    * -> 0 1 -1  -- flip = true, i0, i2
        if !flip
            check a[i2] == -1
        else
            check a[i0] == 1
            
* Now we have a strategy
    * start from the back -> whole range
    * simulate the flips
* Analyze the complexity
    * O(N) - loop -- we can't avoid this
    * O(N) to flip -- this appears there is room
    * --> O(N2)

## prob2 - counting liars
* G 3 L5
* . . . . . . . 
*      | -> 
*      <-|  
* G_list and L_list
*       | | |   | ->   G_list
*         <- | | | | 
* The algorith is O(N)

## how scanf work
* review printf("fmt", v1, v2, ...) 
*  fmt %d, %f, %x, %s

* scanf("fmt", &v1, &v2) 
* Scanf *automatically skips spaces and newline*
* Make sure to pass the *address* of scalar variable
* Strings or arrays just need the varname, because array or string is *already* pointers

## prob3 - Alchemy
* alist[N]

* has_recipe[N] --> has_recipe[l] == true if there is a recipe for metal l, other wise false
* recipes[N][N] --> if the recipe[l] need metal i, then recipes[l][i] == 1
```
while get_L(N-1) {}
printf("%d", alist[N-1]); 
```
```
bool get_L(int l) {
   if (!has_recipe[l]) {
       return false;
   }  
   // go apply the recipe
   for(i=l-1 downto 0) {
      if (recepie[l][i]) {
          if (alist[i]) {
              alist[i]--
          } else {
             if (get_L(i)) {
                alist[i]--
             } else {
                return false;
             }
          }
      }
   }
   alist[l]++
   return true
}
```

* Optimize it
   * try1 : apply max copy of recipe N --> doesn't work
   * try2 : flatten recipies 
