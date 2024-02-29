// Calculating a^b in log(b) time complexity

a^b = a^b/2 * (a^b/2) if b is even
if b is odd = a * a^b/2 * (a^b/2)

//Iterative 
int binaryexp(int a, int b){
  int ans=1;
  while(b){
    if(b&1){
      ans*=a;
    }
    a=a*a;
    b>>=1;
  }
}

//Recursive
int binaryexp(int a, int b){
if(b==0){
return 1;}
int res=binaryexp(a,b/2);
if(b&1){
return a*res*res
}
else{
return res*res
}
}
