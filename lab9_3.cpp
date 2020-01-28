#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    ifstream f1;
    f1.open("score.txt");
    double count=0,mean,sd,sum=0,cal=0;
    string num;
    while(getline(f1,num)){
        count++;
        sum+=atof(num.c_str());
        cal+=pow(atof(num.c_str()),2);


    }
    f1.close();
    mean=sum/count;
    sd=sqrt((cal/count)-pow(mean,2));

    cout << "Number of data = " << count << "\n";
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd;
}




//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
//0.2149