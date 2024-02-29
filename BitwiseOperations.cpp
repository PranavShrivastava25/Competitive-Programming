===== AND ====
-> bitwise and of two numbers is always less than or equal to minimum of the two numbers, so and of n numbers <= minimmum number among them
  Because one a bit becomes 0 in a number, it will always be 0, irrespective of whether the other number has 0 or 1 at that place.


/*
If we add some fractions which are denoted as a expression = ( 1/2^k + 1/2^l +1/2^m + ..... ) , and this sums up to n/m, and none of l,m,n, are equa
Then number of separate terms in the expresssion is equal to number of set bits in 'n'. 
Because n will be a sum of unique powers of 2. , and these number of these unique powers is the number of set bits in binary exp of 'n'.
Use __builtin_popcount(n)  for this
*/

============XOR ====================
-> if we have an expression  a^b^c^d and we want to undo xor of c from it  ,then we just need to again xor it with c.
  --XOR IS THE UNDO OPERATION OF ITSELF 
  
-> Following this logic if we want to easily find the xor of a range of numbers in an array ;
 we can use prefixxor array .
   Then xor[a...b]= prefixxor[b]^prefixxor[a-1]

-> Find N distinct number whose XOR is 0 
 ----- Take first n-2 number as 1,2,3.....n-2 . If xor of these is 0, leave n-2 and take n-1
       If xor of these number is say 'X'
       Take remaining two number as (2^30) and (2^30 + X)
   
