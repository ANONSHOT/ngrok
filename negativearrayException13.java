class Program13
{
public static void main(String args[])
{
try
{
int s[]=new int[-5];
}
catch(NegativeArraySizeException nase)
{
nase.printStackTrace();
}
System.out.println("Error : Negative Array Size Exception");
}
}

