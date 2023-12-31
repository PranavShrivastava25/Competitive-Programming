Delta Encoding ---------------------  https://codeforces.com/contest/1795/problem/C
/*
If we want to add some value to a range without iterating on all the elements in the range. We can do it with delta encoding.
For example :  3 4 8 7 4 5
we want to add 1 from 4 to 7 --> we take two arrays 'count' and update count[1]++ and count[4]-- , so count[1]=1 and count[4]=-1
while traversing do count[i+1]=count[i+1]+count[i] ---> count[1]=1, count[2]=count[1]+1=1 , count[2]=1, count[3]=1, count[4]=count[3]+-1= 0 
So 1 will be added to all the elements between index 1 and 3
*/

====COMPRESSION TECHNIQUE=====================
/*
Suppose we are given 'm' pairwise distinct segments of an array of length n.
Here n is >10^9  and 'm' is less (<10^5)
If the value of left and right boundary of segments is not related to the answer , for the answer only depends on the number of intersection of segmenets etc.
In such case we can use the compression technique for segments.

Eg : Array = {a1,a2,a3,a4,a5,a6,a7,a8,a9,a10}
     And segments are {1,8}, {7,8},{7,9},{2,4}-------> {l,r}
     All different value of 'l' and 'r' can be assigned unique value starting from  1
     Insert all l and r in  a set : st= { 1,2,3,4,5,7,8,9}
     assign 1=1,2=2,4=3,7=4,8=5,9=6
     Now segments become ={1,5}, {4,5} , {4,6}, {2,3}
     In this way the maximum value of left boundary can be 2*m = 2*10^5 ---> to avoid TLE

*/

=================== ARRAY SHIFTING =============
 /*
 When we shift array , by shifting last element to first and then shifting the other part of array. 
 The array just moves in the circular format , just the head get shifted. 
 Even if the array is reversed in some steps , the head is shifted along with change in direction.
*/

     SUBSET SUM USING BITSET 
/*
We can use bitset from c++ stl, to find if a certain sum is possible when a set of number is given (the same can also be done usnig dp)
Bitset are much faster in comparison to boolean array , and provide functions for right shift and left shift

arary ={ 1,2,4,5,7,9}

Create a bitset of size of totalsum+1 
bitset<ts+1>bits;
bits[0]=1;
for(int i=0;i<arr.size();i++){
  bits=bits|(bits<<arr][i])
}

To check if a certain subset sum is possible :   if bits.test(i) returns true, subset sum = 'i' is possible 

Logic: initially bits[0]=1 , which means 0 as sum is possible
      If i add 3 from array : it means 0 and (0+3) is possible , so if i shift all currently set bits  (which is bits[0]) by 3 
      and take their OR , bits[3] and bits[0] will be 1 .
      If i add 4, possible = 0, 3, (0+4) , (3+4) --> It can be seen why left shifting works.
*/
