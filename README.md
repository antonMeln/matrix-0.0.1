#matrix-0.0.1

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
 int a[3][3],b[3][3],c[3][3];
 
 for (int j =0;j < 3; j++){
   for (string str; getline(cin, str); ){
   istringstream stream(str);
   bool fail =false;
     for (int i =0;i <3; i++) {
       if (!(stream >> a[i][j])) { fail =true; break;}
     }
   if (!fail) break; 
    else  cout << "An error has occured while reading input data";
   
 }}
  
  char op;
  cin >> op;
  cin.ignore(1, '\n');
  
  for (int j =0;j < 3; j++){
   for (string str; getline(cin, str); ){
   istringstream stream(str);
   bool fail =false;
     for (int 
     
     i =0;i <3; i++) {
       if (!(stream >> b[i][j])) { fail =true; break;}
     }
   if (!fail) break; 
    else  cout << "An error has occured while reading input data";
   
 }}
cout << "\n";

switch (op){
  
  case '*' : 
    for (int i = 0;i<3;i++){
       for (int j = 0;j<3;j++){
         c[i][j]=0;
          for (int k=0;k<3;k++)
         c[i][j]=c[i][j]+a[i][k]*b[k][j];
         cout << c[i][j] << " ";
            
          }
          cout << "\n";
    } 
    break;
    
  case '+' :
    for (int i = 0;i<3;i++){
       for (int j = 0;j<3;j++){
         c[i][j]=0;
          for (int k=0;k<3;k++)
         c[i][j]=a[i][k]+b[i][k];
         cout << c[i][j] << " ";
            
          }
          cout << "\n";
    } 
    break;
    
    for (int i = 0;i<3;i++){
       for (int j = 0;j<3;j++){
         c[i][j]=0;
          for (int k=0;k<3;k++)
         c[i][j]= a[i][k]-b[k][j];
         cout << c[i][j] << " ";
            
          }
          cout << "\n";
    } 
    break;
    
    default: cout << "error";
    }
    return 0;
}
