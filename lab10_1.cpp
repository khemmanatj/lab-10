#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double bath,percen,pay;
    
	cout << "Enter initial loan: ";
    cin>> bath;
	cout << "Enter interest rate per year (%): ";
    cin>> percen;
	cout << "Enter amount you can pay per year: ";
    cin>> pay;
	
	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	 	cout << "\n";
    
    int i=1;
    double interest;
    double Total;
    double NewBalance=1;
        
	while(NewBalance>0){
      
        cout << fixed << setprecision(2); 
        cout << setw(13) << left << i;
        cout << setw(13) << left << bath;
        interest=bath*percen/100;
        cout << setw(13) << left << interest;
        Total=bath+interest;
        cout << setw(13) << left << Total;
            if(Total<pay){
                pay=Total;
                NewBalance=0;
            }
        cout << setw(13) << left << pay;
        NewBalance=Total-pay;
        cout << setw(13) << left << NewBalance<<endl;
        bath=NewBalance;
        i++;
    } 
	
	
	
	
	
	
	
	
	
	
	
	}
	

