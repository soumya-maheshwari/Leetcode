50. Pow(x, n)


class Solution {
public:
    double myPow(double x, int n) {
       double temp = myPow(x,(n/2));
        if(n==0){
            return 1;
        }
       
      if(n%2==0){
            return temp*temp;
        }
        else {
            if(n>0)
            return x*temp*temp;
           else
           return (temp*temp)/x;
        }   
    }
};
