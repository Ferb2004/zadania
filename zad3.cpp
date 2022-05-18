#include <iostream>
using namespace std;
bool rosnacy(int T[], int n)
{
    for (int i=0; i<n-1;i++)
        if(T[i]>=T[i+1]) return false;
    return true;
}
bool malejacy(int T[], int n)
{
    for (int i=0; i<n-1;i++)
        if(T[i]<=T[i+1]) return false;
    return true;
}
bool nierosnacy(int T[], int n)
{
    for (int i=0; i<n-1;i++)
        if(T[i]<T[i+1]) return false;
    return true;
}
bool niemalejacy(int T[], int n)
{
    for (int i=0; i<n-1;i++)
        if(T[i]>T[i+1]) return false;
    return true;
}
main()
{
    int n=9;
    int T[9]={1,1,1,1,1,1,1,1,1};
    if (rosnacy(T,n)) cout<<"monotoniczny"<<endl;
    else
    { 
        if (malejacy(T,n)) cout<<"monotoniczny"<<endl;
        else 
        {
            if (niemalejacy(T,n)) cout<<"monotoniczny"<<endl;
            else 
            {
                if (nierosnacy (T,n)) cout<<"monotoniczny"<<endl;
                else cout<<"niemonotoniczny"<<endl;

            }
        }
    }

}