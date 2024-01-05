=======================FOR QUESTION BASED ON SEGMENTS ( LEFT AND RIGHT BOUNDARY IN AN ARRAY )================================

========== MERGING SEGMENTS ===========
/*
Suppose we have some segments -> {2,5},{4,9},{5,20},{6,18},{21,30} -> These segments are in sorted order
Sort these left and right boundaries together, with a type to indicate whether it is left or right, and index to which this boundary belongs , eg. 21 and 30 belong to 4th ind
Now start from maximum ,
if it is right this segment is opened, insert the boundary in multiset
set ans[ind]=multiset.rbegin() -> maximum element currently in multiset -> ind is index of this boundary
if we get a left boundary now --> remove the ans[ind] from multiset  -> ind is index of this left boundary --> segment is closed
But if we get a right boundary again -> set ans[ind]=multiset.rbegin() -> in this case the previous segment was still not closed so the previous segment and this
segment is now merged as ms.rbegin() is right boundary of prebious segment.
In this way common segment will get merged.

*/
