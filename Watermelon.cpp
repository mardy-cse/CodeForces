#include <iostream>
using namespace std;
int main()
{
    int weight,cnt=0;
    cin>>weight;

    if(weight%2==0)
    {
        cnt++;
        if(weight==2)
        {
            cnt=0;
        }
    }
    if(cnt==1)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
