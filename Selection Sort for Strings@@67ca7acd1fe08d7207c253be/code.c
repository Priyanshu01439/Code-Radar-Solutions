void selectionSort(char arr[][100],int n)
{
     char temp[100];
     for(int i=0;i<n;i++)
     {
        for (int j=i+1;j<n;j++)
        {
            if(arr[j][100]<arr[i][100])
            {
                temp=arr[i][100];
                arr[i][100]=arr[j][100];
                arr[j][100]=temp;
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