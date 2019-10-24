#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Your Array Size => ";
    cin>>n;
    cout<<endl;
    cout<<"Enter your Element of array \n";
    vector<int> vct;
    
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        vct.push_back(value);
       
    }
  cout<<"Your Entered Array is => ";
    for(int i=0;i<vct.size();i++)
    {
        cout<<vct[i]<<" ";
    }
    return 0;
}
