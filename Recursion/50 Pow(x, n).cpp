// Pg egg fried rice is worst

class Solution {
public:
    double myPow(double x, int n) {
      double ans=1;
      long n1 =n;
      if(x==1) return 1.0;
      if(n<0){
        x=1/x;
        n1=-n1;
      }
      while(n1>0){
        if(n1%2==1)
        {
            ans*=x;
        }
        x*=x;
        n1/=2;

      }
      return ans;
        
    }
};
