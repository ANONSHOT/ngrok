class Program5
{
void addition(int a, int b)
{
int sum=a+b;
System.out.println("Sum of two numbers is "+sum);
}
void addition(double a ,double b)
{
double sum=a+b;
System.out.println("Sum of two numbers is "+sum);
}
void addition()
{
int a=20,b=30;
double c=20.5,d=30.5;
int sum=a+b;
double Sum=c+d;
System.out.println("Sum of two numbers is "+sum);
System.out.println("Sum of two numbers is "+Sum);
}
public static void main(String args[])
{
Program5 p5=new Program5();
p5.addition(10,20);
p5.addition(2.5,7.5);
p5.addition();
}
}
