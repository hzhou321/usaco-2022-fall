# Lesson 8 - 2102

# prob 1 - year of the ox
```
char years[] = { "Ox", Tiger, Rabbit, Dragon, Snake, Horse, Goat, Monkey, Rooster, Dog, Pig, Rat};
int find_year(str) {
    for (i=0:12) {
         if strcmp(years[i], str)==0
             return i
    }
    return 0;
}
```
```
int find_name(str) {
    if strcmp(str, "Bessie") == 0
        return 0
    ...    
}
```
```
bool is_prev(a, b) {
    return a < b && (b-a) <=12
}
```

int birth_years[N] = {0};
Bessie - 0
Mildred - 3 -- > while (!is_prev(a, b)) birth_years[Mildred] -= 12 -> -9
Gretta - 7 --> -17
Elsie -> 0  --> while (!is_next(a, b)) birth_years[Elsie] -= 12 -> -12
Paulina -> 9 -> 9

## the input block
```
words[8]
for i=0:8
    cin >> word[i]
bool is_prev = (word[3]=="prev")    
zodiac_year = zodiac_to_year(word[4]) // start at a 0th zodiac year, then jump 12 at a time
```
```
if (is_prev) {
    year = birth[old] - 1
    while( !is_zodiac(year, zodiac_year)) {
        year--
    }
    birth[new] = year
} else {
   ....
}
```

* Develop a habit of immediate quick refactor

## Prob 2 comfortable cows
  x x x
x x x x
. x
```
for i=0:N
    x, y
    count_neighbor(x-1, y)  
    count_neighbor(x+1, y)
    count_neighbor(x, y-1)
    count_neighbor(x, y+1) --> +1 or -1 or 0
    count_neighbor(x, y) --> +1 or 0
    
grid[x][y] ->     O(1)
```

* grid, board -> cell, point, -> region

```
cnt = 0
for i=0:N
    <update cnt>
    if (get_adj_cnt(x,y) == 3)
        cnt++
    foreach dir
        -> x, y
        if (outside(x,y))
            continue
        n = get_adj_cnt(x, y)
        if (n==3)
           cnt++
        elif n==4
           cnt--
    ans[i] = cnt
```


# prob 3 -  Fence
```
^>
<v


```
