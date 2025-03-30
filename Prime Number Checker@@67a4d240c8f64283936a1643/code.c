int isPrime(int t)
{
    for(int i=2;i<=t/2;i++)
    {
        if(t%i==0)
        {
            return 0;
            break;
        }
        else
        {
           return 1;
        }


    }
}