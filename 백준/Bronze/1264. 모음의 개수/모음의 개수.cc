#include<iostream>
#include<string>
using namespace std;

int main(){
    while(true){
        string seq;
        int cnt=0;
        getline(cin, seq);
        if(seq == "#") return 0;
        for(int i=0;i<seq.size();i++){
            if((seq[i]=='a')||(seq[i]=='e')||(seq[i]=='i')||(seq[i]=='o')||(seq[i]=='u')||(seq[i]=='A')||(seq[i]=='E')||(seq[i]=='I')||(seq[i]=='O')||(seq[i]=='U')){
                cnt++;
            }
        }
        cout << cnt <<'\n';
    }
    
}