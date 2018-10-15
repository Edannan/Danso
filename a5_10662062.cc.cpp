

#include <iostream>
#include<fstream>
using namespace std;

struct student{
string id;
string name;
int age;
char gender;
char grade;
int score;

};

int main()
{
ofstream chelsea;
chelsea.open("united.txt");

double avgAge, avgScore;

chelsea<<"id "<<"name "<<"age "<<"gender "<<"grade "<<"score "<<endl;

student sample[5];

for(int k=0; k<5; k++)
{
cout<<"enter student id     ";
cin>>sample[k].id;

cout<<"enter student name   ";
cin>>sample[k].name;

cout<<"enter student age    ";
cin>>sample[k].age;

cout<<"enter student gender     ";
cin>>sample[k].gender;

cout<<"enter student score      ";
cin>>sample[k].score;

avgAge += sample[k].age;
avgScore += sample[k].score;

cout<<endl<<endl;

if(sample[k].score>=80 && sample[k].score<=100)
    {
     sample[k].grade='A';
    }

    else if (sample[k].score>=70 && sample[k].score<80)
    {
            sample[k].grade='B';
    }

    else if (sample[k].score>=60 && sample[k].score<70)
    {
    sample[k].grade='C';
    }

    else if (sample[k].score>=50 && sample[k].score<60)
    {
    sample[k].grade='D';
    }

    else if (sample[k].score>=40 && sample[k].score<50)
    {
    sample[k].grade='E';
    }

    else if (sample[k].score>=0 && sample[k].score<40)
    {
    sample[k].grade='F';
    }

chelsea<<k+1<<". "<<sample[k].id<<" "<<sample[k].name<<" "<<sample[k].gender<<" "<<sample[k].age<<" "<<sample[k].score<<endl;

}

chelsea<<"average age= "<<avgAge/5<<endl;
chelsea<<"average score= "<<avgScore/5<<endl;


    return 0;
}
