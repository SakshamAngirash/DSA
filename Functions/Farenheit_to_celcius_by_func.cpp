#include<iostream>
using namespace std;

void printTable(int start, int end, int step)
{
    int ans;
    for( int c = start; c <= end; c = c + step)
     {
         ans = (5.0/9)*(c - 32);
         cout << c << "\t" << ans << endl;
     }
} 

int main()
{
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}