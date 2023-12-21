/*
If [a,b,c,d,e] and 'num' are such that 
-> sum of digits of a,b,c,d,e altogether is equal to sum of digits in num
-> sum of a+b+c+d+e is equal to num

the sum of digit at ith place of a,b,c,d,e should not have a carry 
 For example, consider a=2, b=7, c=4; the sum of the digits is 2+7+4=13, and the sum of the digits of their sum is 1+3=4
. This means that whenever there is a carry in one of the digits, the sum digsum(a)+digsum(b)+digsum(c)
 always increases more than digsum(n)
When a carry is transferred the sum of digits in 'num' is automatically reduced.
*/

