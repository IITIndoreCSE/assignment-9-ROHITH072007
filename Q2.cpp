#include <iostream>
using namespace std;

struct color{
int red;
int green;
int blue;
};

int main(){
  color colors[5];
  //sampe RGb values 
  colors[0]={255,0,128};   //pink
  colors[1]={0,255,0};  //green 
  colors[2]={64,64,64};  //dark gray
  colors[3]={0,0,0};
  colors[4]={0,0,0};

  for(int i=0;i<5;i++){
    colors[i].red=255-colors[i].red;
    colors[i].green= 255-colors[i].green;
    colors[i].blue=255-colors[i].blue;
  }
  cout<<"New RGB values (i,e inverted)"<<endl;
  //displaying new colors
  for(int i=0;i<5;i++){
    cout<<"color"<<i+1<<":"<<"R="<<colors[i].red<<","<<"G="<<colors[i].green<<","<<"B="<<colors[i].blue<<endl;
  }
  return 0;
}
