class Program4 
{
public static void main (String args[]) 
{
int array[] = {20,30,40};
try 
{
for(int i = 3; i >=0; i--) 
{
System.out.println("The value of array is " +array[i]);
}
} 
catch (ArrayIndexOutOfBoundsException e) 
{
System.out.println("Error. Array is out of Bounds " +e);
} 
}
}
