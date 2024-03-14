// S1 = {"Flowers"} S2={"are beautiful"}
// Find : (a) Length of S1 (b) Concatenate S1 and S2
// (c) Extract the substring "low" from S1
// (d) Replace "are" with "is" in S2
# include<stdio.h>
# include<conio.h>
# include<string.h>
int LENGTH(char *str)
{
 int i=0, len=0;
 while(str[i]!='\0')
 {
 len++;
 i++;
 }
 return(len);
}
void CONCAT(char *str1, char *str2)
{
 int i=0,j=0;
 while(str1[i]!='\0')
 {
 i++;
 }
 while(str2[j]!='\0')
 {
 str1[i]=str2[j];
 i++;
 j++;
 }
 str1[i]='\0';
 printf("\n Concatenated string = %s",str1);
}
void EXTRACT(char *str,int pos, int elen)
{
 int i=0,j=0;
 char substr[10];
 for(i=pos;i<=elen;i++)
 {
substr[j]=str[i];
j++;
 }
 substr[j]='\0';
 printf("\n Substring = %s",substr);
}
void REPLACE(char *str, char *sstr, char *rstr, int pos)
{
 char output[50];
 int i=0,j=0,k=0;
 for(i=0;i<LENGTH(str);i++)
 {
if(i==pos)
{
 for(k=pos;k<LENGTH(rstr);k++)
 {
 output[j]=rstr[k];
 j++;
 i++;
 }
}
else
{
 output[j]=str[i];
 j++;
}
 }
 output[j]='\0';
 printf("\n Output = %s",output);
 getch();
}
void main()
{
 char *S1,*S2;
 int len,choice,pos,elen;
 while(1)
 {
 clrscr();
 strcpy(S1,"Flowers");
 strcpy(S2,"are beautiful");
 printf("\n S1 = %s S2 = %s",S1,S2);
 printf("\n 1. Length 2.Concatenate 3.Extract Substring 4.REPLACE 5.Exit\n");
 printf("\n Enter your choice : ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1 : {
len = LENGTH(S1);
printf("\n Length of %s = %d",S1,len);
 }break;
 case 2: {
CONCAT(S1,S2);
 }break;
 case 3: { printf("\n Enter position & length of substring in S1 : ");
 scanf("%d %d",&pos,&elen);
 EXTRACT(S1,pos,elen);
 }break;
 case 4: {
 REPLACE(S2,"are","is",0);
 }break;
 case 5: exit(0);
 default : printf("\n Invalid option");
 }
 getch();
 }
}