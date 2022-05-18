#include <iostream>
using namespace std;
bool spr(double T[], int n)
{
    for (int i=0; i<n;i++)
        if(T[i]<=11) return false;
        return true;
}
main()
{
    int n=3;
    double T[n];
    for (int i=0;i<n;i++)
     cin>>T[i];
    for (int i=0;i<n;i++)
     cout<<T[i]<<";";
    cout<<endl;
    if (spr(T,n)) cout<<"TAK";
    else cout<<"NIE";
}