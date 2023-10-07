class Solution {
public:
    int fib(int n) {
       int fib0=0; 
       int fib1=1;
       int fibn;
        for(int i=2;i<=n;i++){
            fibn=fib0+fib1;
             fib0 = fib1;
            fib1 = fibn;
        }
        return fibn;
    }
};
