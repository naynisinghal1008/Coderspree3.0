double myPow(double x, int n) {
   if(n>=0)
   {
        if(n==0)
    {
        return 1;
    }
    else
    {
        return x*myPow(x,n-1);
    }
   }
   else
   {
      
        if(n==0)
    {
        return 1;
    }
    else
    {
        return 1/x*myPow(x,n+1);
    } 
   }
    // Write Your Code Here
}