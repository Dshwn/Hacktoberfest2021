// To find maxi and mini element in an array in c++

#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{  
    int arr[8]={11,23,56,456,33,45,56,64};
    int miniNo=INT_MAX;
    int maxNo=INT_MIN;
    for (int i = 0; i < 8; i++)
    {
        miniNo=min(miniNo,arr[i]);
        maxNo=max(maxNo,arr[i]);
    }
    cout<<"maximum element is: "<<maxNo<<endl;
    cout<<"minimum element is: "<<miniNo;

    return 0;
}
