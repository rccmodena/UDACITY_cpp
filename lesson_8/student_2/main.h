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
    int* getGrades();
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

int* Student::getGrades()
{
    return grades;
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
        sum += grades[i];
    }
    return sum / 10;
}


//********************
class CourseEnrollment
{
    Student students[6];
    int grades[60];
  public:
    void addStudents(Student *studentsArray);
    int* getAllGrades();
    int* sortAllGrades();
    int getMinGrade();
    int getMaxGrade();
    float getAvgGrade();
    void printAllGrades();
};

void CourseEnrollment::addStudents(Student *studentsArray)
{
    for(int i = 0;i<6;i++)
    {
        students[i] = studentsArray[i];
    }
}

int* CourseEnrollment::getAllGrades()
{
    int k = 0;
    for(int i = 0; i<6;i++)
    {
        for(int j = 0; j<10;j++)
        {
            grades[k] = students[i].getGrade(j);
            k = k + 1;
        }
    }
    return grades;
}

int* CourseEnrollment::sortAllGrades()
{
    int aux;
    for(int i = 0; i < 60; i++)
    {
        for(int j = 0; j < 59 - i; j++)
        {
            if(grades[j] > grades[j + 1])
            {
                aux = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = aux;
            }
        }
    }
    return grades;
}

int CourseEnrollment::getMinGrade()
{
    sortAllGrades();
    return grades[0];
}

int CourseEnrollment::getMaxGrade()
{
    sortAllGrades();
    return grades[59];
}

float CourseEnrollment::getAvgGrade()
{
    float sum = 0;
    for(int i=0; i<60; i++)
    {
        sum += grades[i];
    }
    return sum / 60;
}

void CourseEnrollment::printAllGrades()
{
    for(int i=0;i<60;i++)
    {
        std::cout<<"grade="<<grades[i]<<"\n";
    }
}
