bool palindrome(int n)
{
    // Write your code here
    int s=n;
    int pal=0;

    while(n!=0)
    {
        int r=n%10;
        pal=pal*10+r;
        n=n/10;
    }
    if(s==pal)
    {
        return true;
    }
    else
    {
        return false;
    }

}