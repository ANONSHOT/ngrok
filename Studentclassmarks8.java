import java.util.*;
class Student
{
Scanner s=new Scanner(System.in);
String id, name;
int s1,s2,s3,total;
Student()
{
input();
}
public void input()
{
System.out.println("Enter Student details");
System.out.println("Enter Enrollement_id, Name and 3 Subject marks in 
Order");
id=s.next();
name=s.next();
s1=s.nextInt();
s2=s.nextInt();
s3=s.nextInt();
// Condition to check the marks criteria
if(s1>=50&&s2>=50&&s3>=50)
total=s1+s2+s3;
else
total=000;
}
public void display()
{
System.out.println("\t| "+id + "\t\t |\t"+ name +"\t |\t"+total +" |");
System.out.println("\t-------------------------------------------------");
}
}

class Program8
{
public static void main(String args[])
{
Student h[]= new Student[3];
for(int i=0;i<=2;i++)
{
h[i]= new Student();
}
System.out.println("\t\t\tStudent details");
System.out.println("\t============================================
=====");
System.out.println(" | Enrollment_Id |\tName \t |\ttotal |");
System.out.println("\t============================================
=====");
for(int i=0;i<=2;i++)
{
h[i].display();
}
}
}
