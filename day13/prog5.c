#include<stdio.h>
int main()
{
FILE *f;
f=fopen("seekk.txt","w+");
fprintf(f,"welcome fddddddddddddd madhu");
fseek(f,0,SEEK_SET); //11 Jumps to postion above 
fprintf(f,"hello madhu");
fseek(f,0,SEEK_END);
fprintf(f,"hiiiiiii");
fseek(f,-7,SEEK_CUR);
fprintf(f,"CCCCCCCCCCC");
fclose(f);
}
