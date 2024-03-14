#include<stdio.h>
int stack[20];
int top = -1;
void push(int x)
{
 stack[++top] = x;
}
int pop()
{
 return stack[top--];
}
int main()
{
 char *postfix;
 int A,B,RES,num;
 clrscr();
 printf("Enter the expression :: ");
 scanf("%s",postfix);
 while(*postfix != '\0')
 {
if(isdigit(*postfix))
{
 num = *postfix - 48; // converting char into num
 push(num);
}
else
{
 A = pop();
 B = pop();
 switch(*postfix)
 {
 case '+': RES = B + A; break;
 case '-': RES = B - A; break;
 case '*': RES = B * A; break;
 case '/': RES = B / A; break;
 }
 push(RES);
}
postfix++;
 }
 printf("\nThe result of expression = %d\n\n",pop());
 getch();
}
