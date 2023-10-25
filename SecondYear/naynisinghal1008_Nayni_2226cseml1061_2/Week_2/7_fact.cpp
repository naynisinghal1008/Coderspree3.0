vector<long long> factorialNumbers(long long n) {
     vector <long long> facto;
    for(long int i=1;i<=n;i++)
    {
        long fact=1;
         for(long j=1;j<=i;j++)
         {
             fact=fact*j;
         }
         if(fact>n)
         {
             break;
         }
         else
         {
             facto.push_back(fact);
         }
    }
    return facto;
    // Write Your Code Here
}