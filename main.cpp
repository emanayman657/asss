#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{

    ifstream file("data");
   string line ;
    vector <string> data ;
        if(file.good()) {
            while ( getline(file ,line)) {
            data.push_back(line);
            }
      file.close();
        }
    else{
        cout<<"Error ! this file Does not exist";
        return 0;
    }


vector<int> data1;
int num;

    for(int i = 0 ; i < data.size() ; i++){
    stringstream stream(data[i]);

    while (stream >> num){

        char c = stream.get();
        data1.push_back(num);

     cout<<num<<" ";
    }
       cout<<endl;
    }


int arr1 [16];
int arr2 [16];
int arr3 [16];
double time1=0.0;
double time2=0.0;
double time3=0.0;
double Time ;
int racer_num;
double speed = 0.0 ;


cout<<"Enter the number of the racer :"<<endl;
cin>>racer_num;
if (racer_num != 100 && racer_num != 132 && racer_num != 182 ) {
    cout<<"The number is not found here \n";
}
else {
for (int i = 3; i < 18 ; i++)
{
    arr1[i]=data1[i];
    if(racer_num == arr1[i]){

    time1= data1[i+1]*60 + data1[i+2] + data1[i+3]/60;
    cout<<"The split time of the player = "<<(time1/7)<<endl;
}

}

for (int i = 18; i< 33 ; i++){

    arr2[i]=data1[i];
    if(racer_num==arr2[i]){

       time2= data1[i+1]*60 + data1[i+2] + data1[i+3]/60;
       cout<<"The split time of the player = "<<(time2-time1)/7<<endl;
                          }
}


for (int i = 33 ; i < 48 ; i++)
{   arr3[i]=data1[i];
    if(racer_num==arr3[i]){

    time3= data1[i+1]*60 + data1[i+2] + data1[i+3]/60;
    speed =13.1/ (time3-time1);
    Time=time3-time1;
    if(Time==94){
        cout << "this racer take the first place \n";
    }
  else if(Time==95){
        cout << "this racer take the second place \n";
    } else {
    cout <<"this racer take the third place ";}

    cout<<"The time taken by the racer overall distance ="<<(time3-time1)<<endl;
    cout<<"The split time of the raceer = "<<(time3-time2)/7<<endl;
    cout<<"The speed of the raceer = "<<speed<<endl;
    }

}
}

     return 0;


}
