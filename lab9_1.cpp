#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<count[4]+1<< "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A'){ // if grade is A
			count[0]++;//Do something
			count[4]++;
		}else if(grade=='B'){ // if grade is B
			count[1]++;//Do something
			count[4]++;
		//and so on ... for grade = C, D, F	
		}else if(grade=='C'){ 
			count[2]++;
			count[4]++;
		}else if(grade=='D'){
			count[3]++;
			count[4]++;
		}else if(grade=='F'){
			count[5]++;
			count[4]++;
		}else if(grade!='0'){
			cout << "Wrong input. Please input again\n";
		}else{
			break;
		}
	}while(true);
	
	
	cout << "In total "<<count[4] <<" students.\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[5] <<",";	
	//	and so on ... for grade = C, D, F	
	
	
	return 0;
}
