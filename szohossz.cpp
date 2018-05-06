#include <iostream>
using namespace std;

int main(){
   int szh=0;
   int bsz=1;
   do{
     szh++;
   }while(bsz<<=1);
   cout<<"A szóhossz: "<<szh <<"bites."<<endl;
   return 0;
}
