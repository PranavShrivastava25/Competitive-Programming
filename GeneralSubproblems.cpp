/*
given m types of objects, with counts sz1,sz2,…,szm ,find the maximum number of pairs that can be formed using objects of different types.

This is a well-known problem with the following solution. Let tot be the total number of objects and mx be the type that has the maximum number of objects (maximum value 
of sz). If the number of objects of type mx is at most the number of all other objects (i. e. szmx≤tot−szmx), then we can pair all objects (except 1
if the total number of objects is odd). Otherwise, we can create tot−szmx pairs of the form (mx,i) for all i except mx .
*/


