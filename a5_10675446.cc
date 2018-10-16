#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct student{
string id_number;
string name;
int age;
char gender;
double score;
char grade;
};

int main(int argc, char**argv){

student st[5];
int s_age, num_males=0, num_females=0;
string name, id;
char s_gend, s_grade;
double s_score;

int total_age=0, total_score=0;


for(int i=0; i<=4; i++){
cout<<"STUDENT "<<i+1<<endl;
cout<<"Enter name"<<endl;
cin>>name;
st[i].name = name;

cout<<"Enter your Index number"<<endl;
cin>>id;
st[i].id_number = id;

cout<<"Enter gender (M/F)"<<endl;
cin>>s_gend;
st[i].gender=s_gend;
if(s_gend == 'M'){num_males++;}
else if (s_gend=='F'){ num_females++;}

cout<<"Enter your age"<<endl;
cin>>s_age;
st[i].age=s_age;

cout<<"Enter your score"<<endl;
cin>>s_score;
st[i].score = s_score;

if(s_score == 80 || s_score >80)
{
s_grade ='A';}
else if(s_score >69 && s_score <80)
{
s_grade = 'B';}

else if(s_score >59 && s_score<70)
{
s_grade ='C';}

else if(s_score >49 && s_score<60)
{
s_grade ='D';}

else if(s_score >39 && s_score<50)
{
s_grade ='E';}
else{s_grade = 'F';}


st[i].grade =s_grade; 

total_age = total_age+s_age;
total_score = total_score+s_score;
}
double average_age = total_age/5;
double average_score = total_score /5;


ofstream file;
file.open("Student Details.txt");
file <<"ID Number "<<"\t Name "<<"\tAge "<<"\tGender"<<"\tScore"<<" "<<"\tGrade"<<endl;

for(int j= 0; j<5; j++){
file<<st[j].id_number<<'\t'<< st[j].name <<'\t'<< st[j].age<<'\t'<< st[j].gender<<'\t' << st[j].score<<'\t' << st[j].grade<<endl;}

file<<"Average age : "<<average_age <<endl;
file<<"Average score : "<<average_score <<endl;
file<<"Male Count : "<<num_males <<endl;
file<<"Female Count : "<<num_females <<endl;
file.close();

return 0;}
