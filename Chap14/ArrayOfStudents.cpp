// ArrayOfStudents - define an array of Student objects
// and access an element in it. This program doesn't do anything

class Student
{
public:
    int semesterHours;
    float gpa;
    float addCourse(int hours, float grade);
};

void someFn()
{
    // declare an array of 10 students
    Student s[10];
    // assign the 5th student a gpa of 5.0(lucky guy)
    s[4].gpa = 3.0;

    // add another course to the 5th student
    // this time he failed - server him right
    s[4].addCourse(3, 0.0);
}