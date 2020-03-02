#include<iostream>
using namespace std;
class Student{
    public :
        string name;
        string id;
        int grade;
        Student(){
            name = "";
            id = "";
            grade = 0;
        }
        Student(string name1,string id1,int grade1){
            name = name1;
            id = id1;
            grade = grade1;
        }
};
int main(){
    int n;
    cin>>n;
    Student s1("","",-1),s2("","",101),temp;//s1代表成绩最高的学生，s2代表成绩最低的学生
    for(int i = 0;i < n;i++){
        cin>>temp.name>>temp.id>>temp.grade;
        if(s1.grade < temp.grade){
            s1.name = temp.name;
            s1.id = temp.id;
            s1.grade = temp.grade;
        }
        if(s2.grade > temp.grade){
            s2.name = temp.name;
            s2.id = temp.id;
            s2.grade = temp.grade;
        }
    }
    cout<<s1.name<<" "<<s1.id<<endl;
    cout<<s2.name<<" "<<s2.id<<endl;
    return 0;
}
