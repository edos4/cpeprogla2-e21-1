#include <iostream>
#include <iomanip>
using namespace std;

struct Name{
       char fullName[30];
       
};

struct Student{
       int aydi;
       Name name;
       double gradea; 
       double gradeb; 
       double gradec; 
	   double gradeave;
	   double finave;      
};

void newLine();

int main(){
    Student stud[5];
    int a;
    const char* remark[10];
    cout << "Enter student records: \n";
    for (int a = 0; a<5; a++){
    cout << "Student " << a+1 << ": " << endl;
    cout << "ID: ";
    cin >> stud[a].aydi;
    newLine();
    cout << "Name: ";
    cin.getline(stud[a].name.fullName, 30);
    cout << "Grade: ";
    cin >> stud[a].gradea >> stud[a].gradeb >> stud[a].gradec;
    stud[a].finave = (stud[a].gradea+stud[a].gradeb+stud[a].gradec);	}
    
   cout << "\n";
  	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "No. " << setw(15) << "Student no." << setw(15) << "Name" << setw(20) << "Grade" << setw(22) << "Remark" << endl;
	for(a=0; a < 5; a++){
		if((stud[a].finave/3) < 75 ){
			remark[10]="Failed!";
		}
		else
			remark[10]="Passed!";
		
		cout << a+1;
		cout << setw(15) << stud[a].aydi << setw(15) << stud[a].name.fullName << setw(20) << stud[a].finave/3 << setw(22) << remark[10] << endl ;
		
	}
    
		
    
    system("pause > 0");
    return 0;   
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
