class Program14
{
public static void main(String args[])
{
String name=null;
try
{
if(name.equals("Shivaswamy"))
System.out.println("Matched");
else
System.out.println("Not Matched");
}
catch(NullPointerException e)
{
System.out.println("Error: Null Pointer Exception");
}
finally
{
System.out.println("Finally Block");
}
}
}
