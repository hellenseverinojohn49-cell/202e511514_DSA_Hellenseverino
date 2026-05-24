#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	int Marks1,Marks2,Marks3,totalMarks;
	double average;
	cout <<"\t\t\======Enter student's name======\t\t\:"<<endl;
	cin>>name;
	cout<< "Enter the Marks for subject English:"<<endl;
	cin>>Marks1;
	cout << "Enter the Marks for subject ICT:"<<endl;
	cin>>Marks2;
	cout <<" Enter the Marks for subject Maths:"<<endl;
	cin>> Marks3;
	//Calculate total Marks and average
	totalMarks=Marks1+Marks2+Marks3;
	average=totalMarks/3.0;
	cout<< "Calcuate the total Marks:" << Marks1+Marks2+Marks3<<endl;
	cout <<"calcuate the average"<<average<<endl;
	if(totalMarks>=150){
	cout<<"pass or promoted!"<<endl;
	
}
else{
	cout <<"try again!"<<endl;
}
char choice;
do{
cout<<"\n use loop to enter another or multiple student(y/n):";
cin>>choice;
}
while(choice =='y'||choice=='y');


	
return 0;	
}
