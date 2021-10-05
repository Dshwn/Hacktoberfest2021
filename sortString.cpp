#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main(){


// string str="benedictbro";

// sort(str.begin(),str.end());
// cout<<str;


//new trick to sort number


string num;

cout<<"Enter the number"<<endl;
cin>>num;



sort(num.begin(),num.end());
//string to integer

int a=stoi(num);
cout<<a;




}