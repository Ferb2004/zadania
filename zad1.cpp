#include<iostream>;
using namespace std;

bool spr(int T[], int n)
{
  for(int i=0;i<n;i++)
    if(T[i]<-11)return false;
  return true;
}

main()
{
  int n;
  cout<<"podaj ilosc"<< endl;
  cin>>n;
  int T[n];
  for(int i=0;i<n;i++)
    cin >>T[i];
  for(int i=0;i<n;i++)
   cout<<T[i]<<";";
  cout<<endl;
  if(spr(T,n))cout <<"TAX"<< endl;
  else cout <<"NIE"<< endl;
}