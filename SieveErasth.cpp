
/*
Start from p=2, and make all numbers greater than square of 2 and divisible by 2 as false.
Now come to 3 and so on with unmarked cells.
At the end the cells marked as true are prime numbers.

O(n log log n) - Time 
*/

long long len=n*m;
    vector<bool>arr(len+1,true);
    arr[1]=false;
     for (int p = 2; p * p < len+1; p++) { 
        if (arr[p] == true) { 
            for (int i = p * p; i < len+1; i += p) 
                arr[i] = false; 
        } 
} 
