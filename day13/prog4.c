#include<stdio.h>
struct s
{
char name[100];
int height;
};
int main()
{
int i;
struct s a[3],b[3];
FILE *f;
f=fopen ("file.bin","wb");
for (i=0;i<3;i++)
{
printf("enter the name \n");
scanf("%s",a[i].name);
printf("enter the height \n");
scanf("%d",&a[i].height);
}
fwrite(a,sizeof(a),1,f);

fclose(f);
FILE *fp;
fp=fopen ("file .bin","rb");
fread(b,sizeof(a),1,f);
for (i=0;i<3;i++)
{
printf("name %s\n height %d\n",b[i].name,b[i].height);
}
fclose(f);
}


