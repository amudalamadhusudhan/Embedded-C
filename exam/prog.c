#include<stdio.h>
#include<string.h>

//Function defination for string concatenation
char *catstr(char *s2,char *s3)
{
	char *arr=s2;
     while(*s2!='\0')
             s2++;
     while(*s3!='\0')
     {
            *s2=*s3;
             s2++;
             s3++;
     }
      *s2='\0';

      return arr;
}


//function defination for string length calculation
int length(char *s1)
{
     int l=0;
     while(*s1!='\0')
     {
           l++;
           s1++;
     }

      return l;
}


//function defination for string copying
char *copy(char *s5,char *s4)
{
	char *arr1=s5;
	while(*s4!='\0')
	{
		*s5=*s4;
		s5++;
		s4++;
	}

	return arr1;
}

//function defination for string comaprision
int comp(char *s6,char *s7)
{
	int sum=0;
	while((*s6!='\0')|| (*s7!='\0'))
	{
		sum=sum+(*s6-*s7);
		s6++;
		s7++;
	}
	return sum;

}


int main()

{

/* Que7 : Implement string library functions strlen, strcpy, strcat, strcmp with same return values and all error handling features using pointers */
printf("\nAnswer to Question 7 :");
//Answer: 

	//String length
   	char str1[50];
   	int len;
   	printf("\nEnter String whose length has to be found:");
	scanf("%s",str1);
	len=length(str1);
	printf("\nlength of String %s is %d\n\n",str1,len);

	//String concatenation
   	char str2[25],str3[25],temp[25];
   	printf("\nEnter First String for concatenation :");
	scanf("%s",str2);

   	printf("\nEnter Second String for concatenation :");
	scanf("%s",str3);

   	strcpy(temp,catstr(str2,str3));
   	printf("\nConcatenated String is %s\n\n",temp);

	//string copy
	
   	char str4[25],str5[25],*temp_arr;
   	printf("\nEnter string to be copied:");
	scanf("%s",str4);
	temp_arr=copy(str5,str4);
	printf("\nCopied string : %s\n\n",temp_arr);

	//string compare
	
   	char str6[25],str7[25];
	int res;
   	printf("\nEnter 1st string to be compared:");
	scanf("%s",str6);

   	printf("\nEnter 2nd string to be compared:");
	scanf("%s",str7);

	res=comp(str6,str7);
	printf("\n comparison result : %d\n\n",res);




	return 0;

}
