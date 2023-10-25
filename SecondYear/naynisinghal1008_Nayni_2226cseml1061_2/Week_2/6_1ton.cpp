int i=1;
vector<int> num;
vector<int> printNos(int x){
   
    if(x==0)
    {
       
        return num;  
    }
    else
    {
        num.push_back(i);
        i++;
        return printNos(x-1); 
    }

}