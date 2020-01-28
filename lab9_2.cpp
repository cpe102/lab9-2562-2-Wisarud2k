#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    string textline;
    ifstream cheerbook;
    cheerbook.open("cheerbook.txt");
    ofstream cheerbook_copy;
    cheerbook_copy.open("cheerbook_copy.txt");
    cheerbook_copy << "Push cheerbook_copy.txt to github\n";
    cheerbook_copy << "-------------------- SOTUS ---------------------\n";
    //getline(cheerbook,textline);
    while(getline(cheerbook,textline)){
        cheerbook_copy << textline<<"\n";
    }
    cheerbook_copy << "-------------------- SOTUS ---------------------\n";
    cheerbook_copy << "Push cheerbook_copy.txt to github";
    cheerbook.close();
    cheerbook_copy.close();
    return 0;


}




//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
