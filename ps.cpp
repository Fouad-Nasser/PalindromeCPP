#include<iostream>
using namespace std;
typedef long long ll;

ll reverse(string str){
    string strev="";
    int size = str.length();

    for (int j=size-1; j >= 0; j--)
    {
        strev += str[j];
    }
    return stoll(strev);
}

int main(){
    bool flag=true;
    string n;
    ll ans;
    cin>>n;
    int size = n.length();

    for (int i = 0, j=size-1; i < size; i++,j--)
    {
        if ((int)n[i]!=(int)n[j])
        {
           flag = false;
           break;
        }       
    }

    ans = reverse(n);
    cout<<ans<<endl;
    if (flag)
    {
        cout<<"YES"<<endl; 
    }
    else
    {
        cout<<"NO"<<endl;     
    }
    return 0;
}
