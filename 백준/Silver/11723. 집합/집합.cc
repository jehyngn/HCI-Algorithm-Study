#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int arr[21]={0};
    int M;
    cin >> M;
    for(int i=0;i<M;i++){
        string seq;
        int x;
        cin >> seq;
        if(seq == "add"){
            cin >> x;
            if(arr[x]!=x) arr[x]=x;
        }
        else if(seq == "remove"){
            cin >> x;
            if(arr[x]!=0) arr[x]=0;
        }
        else if(seq == "check"){
            cin >> x;
            if(arr[x]==x) cout << "1\n";
            else cout << "0\n";
        }
        else if(seq == "toggle"){
            cin >> x;
            if(arr[x]==x) arr[x]=0;
            else arr[x]=x;
        }
        else if (seq == "all"){
            for(int j=1;j<=20;j++){
                arr[j]=j;
            }
        }
        else if(seq == "empty"){
            for(int j=1;j<=20;j++){
                arr[j]=0;
            }
        }
    }
}