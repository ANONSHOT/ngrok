import java.util.*;
import java.util.Date;
class Employee
{
String name;
Date DOJ;
public Employee(String name, Date DOJ)
{
this.name=name;
this.DOJ=DOJ;
}
public void display()
{
System.out.println(" "+name+"\t "+DOJ.getDate()+"-
"+DOJ.getMonth()+"-"+DOJ.getYear());
System.out.println("-----------------------------------");
}
}
class Program11
{
public static void main(String args[])
{
Employee e[]=new Employee[2];
e[0]=new Employee("Shiva", new Date(2023,5,8));
e[1]=new Employee("Swamy", new Date(2022,5,15));
System.out.println("Emloyee details");
System.out.println("===================================");
System.out.println("Employee Name \t Date of Joining");
System.out.println("===================================");
for(int i=0;i<e.length;i++)
e[i].display();
for(int i=0;i<e.length;i++)
{
for(int j=i+1;j<e.length;j++)
{
if(e[i].DOJ.after(e[j].DOJ))
{
Employee d;
d=e[i];
e[i]=e[j];
e[j]=d;
}
}
}
System.out.println("\nEmloyee details Senioritywise");
System.out.println("===================================");
System.out.println("Employee Name \t Date of Joining");
System.out.println("===================================");
for(int i=0;i<e.length;i++)
e[i].display();
}
}
