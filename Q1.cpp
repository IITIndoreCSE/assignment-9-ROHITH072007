#include <iostream>
using namespace std;

struct item{
  int id;
  float cost;
};

int main(){
  item items[6];
  
  items[0]={101,75.50f};
  items[1]={102,45.00f};
  items[2]={103,120.00f};
  items[3]={104,30.25f};
  cout<<"items with cost greater than 50.00"<<endl;
  for(int i=0;i<6;i++){
    if (items[i].cost>50.00){
      cout<<"|"<<"id:"<<items[i].id<<" | cost:"<<items[i].cost<<" |"<<endl;
    }
  }
  return 0;
}
