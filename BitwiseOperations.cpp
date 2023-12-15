===== AND ====
-> bitwise and of two numbers is always less than or equal to minimum of the two numbers.
  Because one a bit becomes 0 in a number, it will always be 0, irrespective of whether the other number has 0 or 1 at that place.


/*
If we add some fractions which are denoted as a expression = ( 1/2^k + 1/2^l +1/2^m + ..... ) , and this sums up to n/m, and none of l,m,n, are equa
Then number of separate terms in the expresssion is equal to number of set bits in 'n'. 
Because n will be a sum of unique powers of 2. , and these number of these unique powers is the number of set bits in binary exp of 'n'.
Use __builtin_popcount(n)  for this
*/
