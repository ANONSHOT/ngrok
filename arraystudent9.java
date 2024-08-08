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
System.out.println("Course Name \n"+CN);
System.out.println("\nStaff Name \n"+SN);
System.out.println("\nStudent_Name \t\t Marks");
for(i=0;i<n;i++)
{
System.out.println(name[i]+ "\t\t\t " + marks[i]);
}
}
}
class Program9
{
public static void main(String args[])
{
FirstYear f=new FirstYear();
f.display();
}
}
