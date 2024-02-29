// Calculating a^b in log(b) time complexity

a^b = a^b/2 * (a^b/2) if b is even
if b is odd = a * a^b/2 * (a^b/2)


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
