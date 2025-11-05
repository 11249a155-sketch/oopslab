 #include<iostream>
 using namespace std;
 class student
    {
    private:
    int rollno;
    string name;
    public:
    student()
    {
        rollno=1;
        name="yashu";
    }
    student(int r,string n)
    {
        rollno=r;
        name=n;
    }
    student(student &s)
    {
        rollno=s.rollno;
        name=s.name;
    }
void display()
{
    cout<<"rollno:"<<rollno<<endl;
    cout<<"name:"<<name<<endl;
}
};
int main()
{
    student s1;
    student s2(101 ,"iyer");
    student s3=s2;

    s1.display();
    s2.display();
    s3.display();
    return 0;
}