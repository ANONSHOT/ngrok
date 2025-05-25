//Before executing program12 compile StudentPackage file everytime using follwing 
command javac -d . StudentPackage.java
// Save this file as Program12.java and compile
import student.fulltime.bca.StudentPackage;
public class Program12
{
public static void main(String args[])
{
StudentPackage sp=new StudentPackage();
sp.input();
sp.display();
}
}
// Save this file as StudentPackage.java and compile using javac -d . StudentPackage.java
package student.fulltime.bca;
import java.util.*;
public class StudentPackage
{
String Name,gen;
int age;
Scanner s=new Scanner(System.in);
public void input()
{
System.out.println("Enter Student name");
Name=s.next();
System.out.println("Enter Student age");
age=s.nextInt();
System.out.println("Enter Student gender");
gen=s.next();
}
public void display()
{
System.out.println("Student details");
System.out.println("=========================");
System.out.println("Name\t Age\t Gender"); 
System.out.println("-------------------------");
System.out.println(Name +"\t " + age +"\t " +gen);
}
}
