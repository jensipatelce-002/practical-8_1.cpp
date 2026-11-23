#include<iostream>
#include<string>

using namespace std;

string enrollmentNumber;
string name;
string branch;
int semester;
int marks[5];
int i=0;
int totalMarks;
float average;
float percentage;
string grade;
string result;

void displayHeader(){
    cout<<"**********************************************"<<endl;
    cout<<"     STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"**********************************************"<<endl;
}

void acceptStudentDetails(){
    cout<<"Enter Name:";
    getline(cin,name);
    cout<<"Enter Enrollment Number";
    cin>>enrollmentNumber;
    cout<<"Enter Branch";
    cin>>branch;
    cout<<"Enter semester";
    cin>>semester;
    cout<<endl;
    cout<<"Enter Marks"<<endl;
    for(i;i<5;i++){
        cout<<"Enter marks of subject "<<i+1<<": ";
        cin>>marks[i];
    }
}

void calculateAcademicResult(){
    totalMarks=0;
    for(int j=0;j<i;j++){
    totalMarks=totalMarks + marks[j];
    }
    average=totalMarks/5.0;
    percentage=average;
    if(percentage>=90 && percentage<=100){
        grade="O";
        result="Pass";
    }
    else if(percentage>=80 && percentage<90){
        grade="A+";
        result="Pass";
    }
    else if(percentage>=70 && percentage<80){
        grade="A";
        result="pass";
    }
    else if(percentage>=60 && percentage<70){
        grade="B+";
        result="pass";
    }
    else if(percentage>=50 && percentage<60){
        grade="B";
        result="pass";
    }
    else if(percentage>=40 && percentage<50){
        grade="C";
        result="pass";
    }
    else{
        grade="F";
        result="fail";
    }
}
void displayStudentReport(){
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"                     Academic Report"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"Enrollment Number: "<<enrollmentNumber<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Branch: "<<branch<<endl;
    cout<<"Semester: "<<semester<<endl;
    cout<<"Total Marks: "<<totalMarks<<endl;
    cout<<"Percentage: "<<percentage<<endl;
    cout<<"Grade: "<<grade<<endl;
    cout<<"Result: "<<result;
}
int main(){
    cout<<"26CE091 Sneh satapara"<<endl;
    cout<<endl;
    displayHeader();
    acceptStudentDetails();
    calculateAcademicResult();
    displayStudentReport();

    return 0;
}
