#include <iostream>
#include <fstream>
#include <string>

#include "Slip.h"
#include "Slap.h"
#include "Slop.h"

using namespace std;

int main() {
  fstream myFile;
  string wordArray[50];
  int m = 0;
  myFile.open("text.in");
  while (!myFile.eof()) {
    myFile >> wordArray[m];
    m++;
  }
  myFile.close();

  cout<<2<<endl;
  cout<<"ADFFFFGCDFFEFFFFFG"<<endl;
  cout<<"ADFGCDFFTFFG"<<endl;
  cout<<endl;
  cout<<"SLOPS OUTPUT"<<endl;
  if(isSlop(wordArray[1]) == true){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  if(isSlop(wordArray[2]) == true){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  cout<<"END OF OUTPUT"<<endl;
}
