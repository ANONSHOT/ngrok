class stat
{
static String employer="GOK";
int emp_id;
float salary;
stat(int emp_id, float salary)
{
this.emp_id=emp_id;
this.salary=salary;
}
void display()
{
System.out.println(employer + " " +emp_id+" " + salary);
}
}

class Program7
{
public static void main(String args[])
{
System.out.println("Employer GOK");
stat s1=new stat(101, 100000);
stat s2=new stat(102, 200000);
s1.display();
s2.display();
System.out.println("\nEmployer GoI");
s1.employer="GoI";
s1.display();
s2.display();
}
}