# Lesson 9 - 21Open - 221106

# prob 1 - Acowdemia I 

4 0
1 100 2 3

- 0 check
- 1 check
- 2 check
- 3 ? no
- -> 2

0. Keep your ground truth
1. get the sample case once
2. try to get the ans direct -- fail -- convince yourself the minimum you need do
    * to get ans 2, you need at least test 3.
3. solutions:
    * try h=0:inf break once get to first fail
    * really 2 works, 3 fails is the key --> important clue to optimize
    * -> go from largest to smallest paper, that way, you only test one round

4. sub-problem of testing works(h) with L > 0
    * Okay for test 1-11
    * Timout for test 12-17

    * 1 2 3 100

    * 2 2 2 2 
        * i = 0, 2 < 4-0, -> h = 2 worked --> because there are at least 2 numbers from the tail > 2
        * N - i worked
        * Next try to increast that number 1 by 1

# prob 3

* case 1
 x G x
* case 2
 x
 G
 x
* case 3
 x      x
xG  or  Gx
* case 4
xG   or Gx
 x      x
 
