# Lesson 2 - 22/09/18

## Remember the requirement
* Homework
* Feedback by Sunday
* MINIMUM 3 hours each week

## Environment
* Windows - WSL2, WSL (apt install), Cygwin (setup)
* Mac - Terminal  - homebrew
* Minimum Packages - g++ vim make

## Review basics
* `cd` goes to ~
* `mkdir`
* `mv`
* Vim basic - normal mode (ESC), insert mode (i), ex mode (:)
*     normal: dd, x, dw, i, o
*     insert: ^t
*     normal: 5>>, <<
*     :!g++ -o t prob1_[tab]
*     :!./t
*     u (for undo), ^R (for redo)
* For more: google vim basic tutorial
* `cat 1.in`
* `cat 1.in | ./prob1_bronze`  
* Shell script 

## Bronze Prob1 - lonely photo
* N, 3 or more 
* Bronze is essentially all enumeration
* if - else
* for-loop
    * 1D: `for (int i = 0; i < N; i++) { }` -- enumerates a 1 index
    * 2D: nested for-loops  -- enumerate *2* indices
* --> too slow
HHH..G..H..
