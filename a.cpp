#include"a.h"
using namespace std;
void a::readin()
{
  ifstream input("file.in",ios::in);
  if(!input)
  {
     cerr<<"fail"<<endl;
     exit(1);
  }
  int first;
  input>>first;
  int arr[first];
  for(int i=0;i<first;i++)
  {
    input>>arr[i];
  }
  vector<int> v(first);
   for(int i=0;i<first;i++)
  {
    v.at(i)=arr[i];
  }
  sort(v.begin(),v.end());
  int i,sum=0;
  for(i=first-1;i>=first-5;i--)
  {
     sum=sum+v.at(i);
  }
  cout<<sum;

}

