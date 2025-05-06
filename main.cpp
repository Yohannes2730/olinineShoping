#include<iostream>
using namespace std;
 class Quastion{
  public:
  int number ;
  string texst ;
  string choices[4];
  int answer;
  int correct;
 };

int main (){
   Quastion quastion1 ,quastion2;
   quastion1.number = 1;
   quastion1.texst = "man is mortal ";
   quastion1.choices[0] = "false";
   quastion1.choices[1] = "true";
   quastion1.choices[2] = "i dont know";
   quastion1.choices[3] = "who is man";
   quastion1.answer = 1;
  cout<<"****************************************************"<<endl ;
  cout<<"         ewgvklfjdboiergoejbtkfjberi     " <<endl;
  cout<<"****************************************************" <<endl;
   cout<<quastion1.number<<", "<<quastion1.texst <<endl;
   for(int i = 0 ; i < 4 ; i++){
    cout<< i<<", "<< quastion1.choices[i] <<endl;
   }
   int userinput;
   int correct = 0;

   cin >> userinput;
   if(quastion1.answer == userinput){
    correct++ ;
    cout << "your answer is correct"<<endl;
    cout<<"************************" <<endl;
   
   }   else{ cout<< "incorrect"<<", "<<"the answer is "<<" "<< quastion1.answer;

   }
    cout<<endl;
   
   quastion2.number = 2;
   quastion2.texst =  " what is your name  ";
   quastion2.choices[0] = "12 old ago";
   quastion2.choices[1] = "my father name is belachew";
   quastion2.choices[2] = "my name is john";
   quastion2.choices[3] = "who is man";
   quastion2.answer = 2;
  
  
   cout<<"************************" <<endl;
   cout<<quastion2.number<<", " << quastion2.texst <<endl;
   for(int i = 0 ; i < 4 ; i++){
    cout<< i<<", "<< quastion2.choices[i] <<endl;
   }
    cin>>userinput;
    if(quastion2.answer == userinput){
      correct++ ;
    cout << "your answer is correct"<<endl;
    cout<<"************************" <<endl;
   
   }   else{ cout<< "incorrect"<<", "<<"the answer is "<<" "<< quastion2.answer;
    
   }
   cout<<"correct "<<correct<<endl;

   cout<<"the total is: 2 "<< endl;
     return 0 ;
}