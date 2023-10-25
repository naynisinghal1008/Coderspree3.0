vector<int> generateFibonacciNumbers(int n) {
    vector <int> fib;
    if(n!=1)
    {
    int a=0;
    fib.push_back(a);
    int b=1;
    fib.push_back(b);
    int c;
    for(int i=1;i<=n-2;i++)
    {
        c=a+b;
        fib.push_back(c);
        a=b;
        b=c;
    }
    }
    else
    {
        fib.push_back(0);
    }
    
     return fib;
    
    // Write your code here.
}