import java.util.*;
class Program2 
{
public static void main(String[] args) 
{
Calendar c = Calendar.getInstance();
String[] month = new String[] { "January", "February", "March", "April", 
"May","June", "July","August","September", "October", "November","December" };
System.out.println("Current Month = " + month[c.get(Calendar.MONTH)]);
}
}
