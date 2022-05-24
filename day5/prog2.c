//2.program for frequency array elements


#include <stdio.h>
int main()
{
int arr[100], freq[100];
int size, i, j, count;
printf("Enter size of array:\n");
scanf("%d", &size);
printf("enter the element \n");
for(i=0; i<size; i++)
{
 scanf("%d", &arr[i]);
  //Initially initialize frequencies to -1
 freq[i] = -1;
}
 for(i=0; i<size; i++)
{
  count = 1;
  for(j=i+1; j<size; j++)  //If duplicate element is found 
 {
  if(arr[i]==arr[j])
   {
   count++;                //Make sure not to count frequency of same element again 
   freq[j] = 0;
   }
  }
    if(freq[i] != 0)           //If frequency of current element is not counted 
    {
    freq[i] = count;
    }
}
 printf("Frequency of all elements of array:\n");//Print frequency of each element
 for(i=0; i<size; i++)
  {
   if(freq[i] != 0)
    {
     printf("%d occurs %d times\n",arr[i],freq[i]);
    }
   }
 return 0;
}
