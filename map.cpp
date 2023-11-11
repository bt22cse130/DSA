#include<iostream>
#include<map>

using namespace std;
int main()

{    //this is a ordered map So its always Sorted
     //its time complexityb is O(log n)
     //map declaration 
    map<int,string>mp;

    //map insertion
    mp[1]="SAURABH";
    mp[5]="SANJAY";
    mp[2]="BACHHAV";
    
    //Associative loop in map
    cout<<"Map : ";
    for(auto i:mp)
    {
        cout<<i.first<<")"<<i.second<<"  ";
    }
    //deletion in map
    cout<<endl<<"After Erase :"<<endl;
    mp.erase(5);
    for(auto k:mp){
        cout<<k.first<<")"<<k.second<<"  ";
    }



    

    return 0;
}