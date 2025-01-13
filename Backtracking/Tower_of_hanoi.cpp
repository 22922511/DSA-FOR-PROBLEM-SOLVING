

#include<bits/stdc++.h>
using namespace std;
void tower_hanoi(int x, char curr,char help,char dest){
    if(x==0) return;
    tower_hanoi(x-1,curr,dest,help);
    cout<<curr<<" --- >> "<<dest<<"\n";
    tower_hanoi(x-1,help,curr,dest);
    
}
int main()
{
     int n;
     cin>>n;
     tower_hanoi(200,'A','B','C');

    return 0;
}
