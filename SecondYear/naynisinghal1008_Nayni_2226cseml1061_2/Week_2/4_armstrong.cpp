bool checkArmstrong(int n){
	int s=n;
	int c=0;
	while(n!=0)
	{
        c++;
		n=n/10;

	}
	n=s;
	int arm=0;
	while(n!=0)
	{
		int r=n%10;
		arm=arm+pow(r,c);
		n=n/10;
	}
	if(arm==s)
	{
		return true;
	}
	else
	{
		return false;
	}
	//Write your code here
}
