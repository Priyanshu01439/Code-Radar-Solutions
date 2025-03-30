void selectionSort(char arr[][100],int n)
{
     char temp[100];
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

void printArray(char arr[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s\n",arr[i]);
    }

}