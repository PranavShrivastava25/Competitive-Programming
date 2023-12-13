/*

Q-> https://codeforces.com/problemset/problem/1903/C

Eg: Suppose that we have an array and we divide it into segments:
For a segment its value is i*(sum of ith segment). Eg: (3),(3,4),(-1,2,3) -- > value= 1*(3) + 2*(7) + 3*(4) 
-> If we want to find a division of segment so that we get the maximum value:

Look at the problem this way:
Suffixsum array = {14,11,7,8,6,3}
If you open a new subarray at an index i, then it is like you are adding the suffix sum from index i to n to your answer. So, you would start first subarray at index 1,
so you would add whole array sum to your answer, now if you start a second subarray at index i, then you only need to add the sum of second array one more time because
you have already added it once when 
you added suffix sum of index 1. For the k-th subarray, you have already added it's sum (k-1) times, so you would add it just once.

*/
