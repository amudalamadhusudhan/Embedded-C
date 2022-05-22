//3. program prime fibonacci

#include <stdio.h> 
int main() 
{ 
int range, prev=0, present=0,fibo=0,i,count; 
printf("Enter the range : "); 
scanf("%d",&range);
 //-----------Logic to find Fibo Series------- 
while(fibo<1) 
{ 
fibo=prev + present++; 
// printf("%d\t",fibo); 
}
 present--; 
while(fibo<=range) 
{ 
if(fibo<=range)
 {
 count=0; 
for(i=1;i<=fibo;i++) 
{ 
if(fibo%i == 0) 
count++; 
}
 i--; 
if(count==2) 
printf("%d ",i);
 }
 prev=present;
 present=fibo;
 fibo=present+prev;
 }
printf("\n");
return 0; 
}
