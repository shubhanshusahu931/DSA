#include<iostream>
using namespace std;
class Mst{
    public:    
    double avg;
    int marks[10],sum=0,sub;
    void setSubjects(){
        cout<<"enter the number of subjects : ";
        cin>>sub;
    }
    void setMarks(){
        for(int i=0;i<sub;i++){
        cout<<"enter the marks of "<<i+1<<" th the subject  : ";
        cin>>marks[i];
        }
    }
    void getMarks(){
        for(int i=0;i<sub;i++){
        cout<<marks[i]<<"  ";
        }
    }
    int add_Marks(){
        for(int i=0;i<sub;i++){
            sum=sum+marks[i];
        }
        cout<<"the total marks is : "<<sum<<endl;
        return sum;
    }
    void avg_Of_Marks(){
        avg = (double)sum/sub;
        cout<<"average of marks is : "<<avg<<endl;
    }
//     void percent(){
//         int x;
//         x=sub*30;
//         per=(sum/x)*100;
//         cout<<"total percent is"<<per<<endl;
//     }
};
int main (){
    Mst m1;
    cout<<"for mst 1 : ";
    m1.setSubjects();
    m1.setMarks();
    m1.getMarks();
    m1.add_Marks();
    m1.avg_Of_Marks();
    // m1.percent();
    Mst m2;
    cout<<"for mst 2 : ";
    m2.setSubjects();
    m2.setMarks();
    m2.getMarks();
    m2.add_Marks();
    m2.avg_Of_Marks();
    // m2.percent();
    return 0;
}