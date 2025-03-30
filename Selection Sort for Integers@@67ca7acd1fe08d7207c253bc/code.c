int selectionSort(int arr,int n)
{    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (a[j]<a[i])
            {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
            }
        }
    }
}


int printArray(int arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}