void selectionSort(char arr[][100],int n)
{
     int temp;
     for(int i=0;i<n;i++)
     {
        for (int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
     }
}

char printArray(char arr[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s ",arr[i]);
    }

}