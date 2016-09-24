#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int choose;
char ans;
// Lab 5 by Smith Ramoy
int choice(int choose);
char again(char ans);
void prob1();
void prob2();
void prob3();

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Student{
       int id;
       Name name;
       double grade[3];       
};

struct student{
	char fullName[30];
	double gradea; 
    double gradeb; 
    double gradec; 
	double gradeave;
	double finave;   
	char id[5];
}student[5];

struct custom {
	char firstName[20];
	char lastName[10];
	char contactNum[10];
	int day;
	int month;
	int year;
	struct {
		int id;
		char item[20];
		float price;
		int quantity;
	}goods[3];
} custom[3];

void prob1(){
	    Student stud;
    cout << "Enter student records: \n";
    cout << "ID: ";
    cin >> stud.id;
    cout << "First Name: ";
    cin.getline(stud.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(stud.name.lastName, 29);
    for(int i=0; i<3; i++){
            cout << "Grade "<< i+1 << ": ";
            cin >> stud.grade[i];        
    }
    
    cout << "\n\n";
    cout << "Display student records\n";
    cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;
    for(int i=0; i<3; i++){
            cout << "Grade "<< i+1 << ": " << stud.grade[i] << endl;        
}
}

void prob2() {
	const char* remark[10];
	cout << "Enter students record: " << endl;
	for(int a=0; a < 5; a++){
		cout << "\nStudent " << a+1 << endl;
		cout << "ID: ";
		cin >> student[a].id;
		cout << "Name: ";
		cin.ignore();
		gets(student[a].fullName);
		cout << "Enter 3 quizzes: ";
		cin >> student[a].gradea >> student[a].gradeb >> student[a].gradec;
   	    student[a].finave = (student[a].gradea+student[a].gradeb+student[a].gradec);
	}
	cout << "\n";
  	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "No. " << setw(15) << "Student no." << setw(15) << "Name" << setw(20) << "Grade" << setw(22) << "Remark" << endl;
	for(int a=0; a < 5; a++){
		if((student[a].finave/3) < 75 ){
			remark[10]="Failed!";
		}
		else
			remark[10]="Passed!";
		
		cout << a+1;
		cout << setw(15) << student[a].id << setw(15) << student[a].fullName << setw(20) << student[a].finave/3 << setw(22) << remark[10] << endl ;
		
		}
}

void prob3(){
float tP,t;
	for(int a=0; a<3; a++){
		cout<<"CUSTOMER INFORMATION "<<a+1<<endl;
		cout<<"First Name: ";
		cin.ignore();
		gets(custom[a].firstName);
		cout << "Last Name: ";
		gets(custom[a].lastName);
		cout << "Contact Number: ";
		cin >> custom[a].contactNum;
		cout << "Order  Date: " << endl;
		cout << "Day: ";
		cin >> custom[a].day;
		cout << "Month: ";
		cin >> custom[a].month;
		cout << "Year: ";
		cin >> custom[a].year;
		cout<<"Enter three items: \n";
		for(int b=0;b<3;b++) {
			cout<<"ID: ";
			cin>>custom[a].goods[b].id;
			cout<<"Name: ";
			cin.ignore();
			gets(custom[a].goods[b].item);
			cout<<"Price: ";
			cin>>custom[a].goods[b].price;
			cout<<"Quantity: ";
			cin>>custom[a].goods[b].quantity;
			
		} 
		cout << endl << endl;
		system("cls");		
		
	}
	t = 0;
	cout << "SUMMARY REPORT" << endl;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "#" << setw(20) << "Customer Name" << setw(15) << "Order Date" << setw(15) << "Items" << setw(10) << "Price" << setw(15) << "Quantity" << endl << endl;
	for(int c=0; c < 3; c++){
		cout<<" "<<c+1;
		cout << setw(14) << custom[c].lastName << "," << custom[c].firstName;
		cout <<setw(7)<<custom[c].month<<"/"<<custom[c].day<<"/"<<custom[c].year << setw(25) <<"                       \t\t\t";
	
	for(int d=0;d<3;d++) {
			cout<<"\t\t\t\t\t"<<setw(12)<<custom[c].goods[d].item;
			cout<<setw(12)<<custom[c].goods[d].price;
			cout<<setw(12)<<custom[c].goods[d].quantity<<endl;
			tP = (custom[c].goods[d].quantity)*(custom[c].goods[d].price);
			tP += tP;
		} cout << setw(70) << "TOTAL PRICE: "<< tP << endl;
	} 
}

void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
int choice(int choose) {

	cout << "Choose a problem number to solve [1-3]: " ;
	cin >> choose;
	switch(choose) {
		case 1:
			prob1();
			again(ans);
			break;
		case 2:
			prob2();
			again(ans);
			break;
		case 3:
			prob3();
			again(ans);
			break;
		default:
			break;
	}
	return choose;
}

char again(char ans) {
	cout<<"\n\nWanna solve again? [Y/N] ";
	cin >> ans;
	if (ans == 'y'||ans == 'Y') {
		system("cls");
		choice(choose);
	}
	else
		cout<<"Exiting...\n";
	
	return ans;
}
main() {
	choice(choose);
}
