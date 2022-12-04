#include <iostream>
using namespace std;

int arr[1000];

int main(){
    int c;
    cin >> c;
    for(int i=0;i<c;i++){
        int n, sum=0;
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> arr[j];
            sum += arr[j];
        }
        double mean = sum / n;
        double cnt=0;
        for(int j=0;j<n;j++){
            if(mean<arr[j]) cnt++;
        }
        double result = cnt / n * 100;
        cout << fixed;
        cout.precision(3);
        cout << result << "%" << '\n';
    }
}