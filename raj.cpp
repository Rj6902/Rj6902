// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class account
{
  private:
  string acType;
  double acBalance;
  string acNumber;
  
  public:
  void setAcType(string n){
      n=acType;
  }
  
  void setAcBalance(double bal)
 {
     acBalance=bal;
 }
 
 void setAcNumber(string number){
     acNumber=number;
 }
 
 string getAcType(){
     return acType;
 }
 string getAcNumber(){
     return acNumber;
 }
 double getAcBalance(){
     return acBalance;
 }
};
 
 int main(){
     account rj;
     rj.setAcBalance(1000)
     rj.setAcNumber("Abc123")
     rj.setAcType("savings")
     
     return 0;
 }
    


