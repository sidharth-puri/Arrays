#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i,j=0,k=n-1;
    for(i=0;i<n;i++) {
        if(s[i]=='0') {
            swap(s[j],s[i]);
            j++;
        }
    }
    for(i=n-1;i>=0;i--) {
        if(s[i]=='1') {
            swap(s[i],s[k]);
            k--;
        }
    }
    cout<<s;
}
