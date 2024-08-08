import java.util.*;
class FirstYear
{
String CN; // Name of the class
String SN; // Name of the staff
int n,i; // Number of Students
String name[]=new String[4]; // Name of the Student
int marks[]=new int[4]; // Marks of the student
public FirstYear()
{
input();
}
public void input()
{
Scanner s=new Scanner(System.in);
System.out.println("Enter Name of the class");
CN=s.next();
System.out.println("Enter Name of the Staff");
SN=s.next();
System.out.println("Enter number of students");
n=s.nextInt();
System.out.println("Enter Name of all students ");
for(i=0;i<n;i++)
{
name[i]=s.next();
}
System.out.println("Enter Marks of all students");
for(i=0;i<n;i++)
{
marks[i]=s.nextInt();
}
}
public void display()
{
int i,max=marks[0],na=0;
for(i=1;i<marks.length;i++)
{
if(marks[i]>max)
{
max=marks[i];
na=i;
}
}
System.out.println("==========================");
System.out.println("Best Student details ");
System.out.println("==========================");
System.out.println("Name\t\t Marks");
System.out.println("==========================");
System.out.println(name[na]+"\t\t "+max);
}
}
class Program10
{
public static void main(String args[])
{
FirstYear f=new FirstYear();
f.display();
}
}
