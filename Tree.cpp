// Finding diameter of a non negative weighted / unweighted tree
--> Pick a node a , run a dfs and find the node at the farthest distance from a. Lets say node 'b' is at farthest distance from a.
  Now run a dfs from 'b' and find the node at farthest distance from 'b' , lets say the node is c. 
  Then  b--->c is the diameter of the tree
  Proof :
  Visulaise as  c-d--a->x-->y-->z--->p-->q-->b       ---> When we run dfs from a --> b will be farthest , 
                       / \      \       /\                when we run dfs from b , c will be farthest 
                      r   s     t      u  v


-------------------- checking if a node is a descendent of other ----------------------

  /*
  We can use t-in and t-out for the dfs calls ,
  and a node b is a descendant of node a, only if
  tin[a]<=tin[b]<=tout[b]<=tout[a]
  */
