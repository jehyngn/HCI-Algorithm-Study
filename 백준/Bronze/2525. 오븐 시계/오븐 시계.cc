#include <iostream>

int main(){
    int h, m;
    std::cin >> h >> m;
    int time;
    std::cin >> time;
    m+=time;
    if(m>=60){
        while(m>=60){
            m-=60;
            h++;
        }
    }
    if(h>=24){
        h-=24;
    }
    std::cout << h << ' ' << m;
}