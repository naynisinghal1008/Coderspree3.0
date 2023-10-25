bool isPrime(int n)
{
	int flag=0;
	// Write your code here.
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}

	}
	if(flag==0&&n!=1)
	{
        return true;
	}	
	else
	{
		return false;
	}	
}
