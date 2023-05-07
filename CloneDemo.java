class Student implements Cloneable
{
    public String name;
    public int marks;
    public int age;

    public Student(String str, int a, int b)
    {
        this.name = str;
        this.mark = a;
        this.age = b;
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}
class Clone
{
    public static void main(String Arg[])
    {
        try
        {
            Student obj1 = new Student("Amit",87,27);
            Student obj2 = new (Student)obj1.clone();

            System.out.println("Name:"+obj1.name);
            System.out.println("marks:"+obj1.marks);
            System.out.println("age:"+obj1.age);

            System.out.println("Name:"+obj2.name);
            System.out.println("marks:"+obj2.marks);
            System.out.println("age:"+obj2.age);
        }
        catch(Exception obj)
        {

        }
    }
}