Delta Encoding ---------------------  https://codeforces.com/contest/1795/problem/C
/*
If we want to add some value to a range without iterating on all the elements in the range. We can do it with delta encoding.
For example :  3 4 8 7 4 5
we want to add 1 from 4 to 7 --> we take two arrays 'count' and update count[1]++ and count[4]-- , so count[1]=1 and count[4]=-1
while traversing do count[i+1]=count[i+1]+count[i] ---> count[1]=1, count[2]=count[1]+1=1 , count[2]=1, count[3]=1, count[4]=count[3]+-1= 0 
So 1 will be added to all the elements between index 1 and 3
*/
