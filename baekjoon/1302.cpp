// https://www.acmicpc.net/problem/1302
#include <iostream>
#include <map>
using namespace std;

int main(){
    int N;
    cin >> N;
    map <string, int> books;

    string book_name;
    for(int i=0;i<N;i++){
        cin >> book_name;
        if(books.find(book_name) == books.end())
            books[book_name]=1;
        else
            books[book_name]++;
    }

    int max = 0;
    string max_book;
    for(auto iter : books){
        if(iter.second >max){
            max = iter.second;
            max_book = iter.first;
            }
    }
    cout << max_book;
}
