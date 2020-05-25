//main.h

class Student
{
    int studentID;
    int grades[10];
  public:
    void setStudentID(int id);
    int getStudenID();
    void setGrade(int index, int value);
    int getGrade(int index);
    void printGrades();
    int getMin();
    int getMax();
    float getAverageGrade();
};

void Student::setStudentID(int id)
{
    studentID = id;
}

int Student::getStudenID()
{
    return studentID;
}

void Student::setGrade(int index, int value)
{
    grades[index] = value;
}

int Student::getGrade(int index)
{
    return grades[index];
}

void Student::printGrades()
{
    std::cout<<"#"<<studentID<<std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout<<grades[i]<<std::endl;
    }
}

int Student::getMin()
{
    int min = 1000;
    for (int i = 0; i < 10; i++)
    {
        if (min > grades[i])
        {
            min = grades[i];
        }
    }
    return min;
}

int Student::getMax()
{
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (max > grades[i])
        {
            max = grades[i];
        }
    }
    return max;
}

float Student::getAverageGrade()
{
    float sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = grades[i];
    }
    return sum / 10;
}


//********************
class CourseEnrollment
{
    Student students[6];
    public:
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];
};
