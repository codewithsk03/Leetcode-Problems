class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        else{
            int lastdigit = fib(n-1);
            int secondlastdigit = fib(n-2);
            return lastdigit + secondlastdigit;
        }
    }
};
