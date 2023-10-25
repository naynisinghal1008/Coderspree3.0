int countDigits(int n){
	int c=0;
	int s=n;
	while(n!=0)
	{
		int r=n%10;
		if(r==0)
		{
			n=n/10;
			continue;
		}
		if(s%r==0)
		{
			c++;
		}
		n=n/10;
	}
	return c;
	// Write your code here.	
}