#include <iostream>
#include <sstream>

using namespace std;


void input(int a[3][3]) {
  for (int j =0;j < 3; j++){
   for (string str; getline(cin, str); ){
      istringstream stream(str);
       bool fail =false;
         for (int i =0;i <3; i++) {
           if (!(stream >> a[i][j])) {
             fail =true; 
             break;}
          }
           if (!fail) break; 
             else  cout << "An error has occured while reading input data";
   
   }
    
  }
}

int proiz( int a[3][3],int b[3][3]){
   int c[3][3];
   bool f = true;
   for (int i = 0;i<3;i++){
       for (int j = 0;j<3;j++){
           c[i][j]=0;
           for (int k=0;k<3;k++)
             c[i][j]=c[i][j]+a[i][k]*b[k][j];
           cout << c[i][j] << " ";
            
          }
          cout << "\n";
    }
    return c[3][3];
}

int plus( int a[3][3],int b[3][3]){
  int c[3][3];
  for (int i = 0;i<3;i++){
       for (int j = 0;j<3;j++){
          c[i][j]=0;
          for (int k=0;k<3;k++)
             c[i][j]=a[i][k]+b[i][k];
          cout << c[i][j] << " ";
            
          }
          cout << "\n";
    } 
    return c[3][3];
}

bool minus(int a[3][3], int b[3][3]) {
  int c[3][3];
  for (int i = 0;i<3;i++){
       for (int j = 0;j<3;j++){
          c[i][j]=0;
          for (int k=0;k<3;k++)
            c[i][j]= a[i][k]-b[k][j];
          cout << c[i][j] << " ";
            
          }
          cout << "\n";
    }
    return c[3][3];
}


int main(){

 int a[3][3],b[3][3];
 
 input(a);
  
  char op;
  cin >> op;
  cin.ignore(1, '\n');
  
 input(b);

 cout << "\n";

switch (op){
  
  case '*' : proiz(a,b); break;
  case '+' : plus(a,b) ; break;
  case '-' : minus(a,b); break;
  default: cout << "error";
    
}
    return 0;
}
