#include <bits/stdc++.h>
using namespace std;
int INF=INT_MAX;
int N, Sx, Sy, Fx, Fy;

pair<int, int> mv[] = {{1, 2}, {1, -2}, {2, 1}, {2, -1}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};
vector<vector<int>>dis;

bool is_valid(int x,int y){
    if(x<=0 || y<=0 || x>N || y>N) return 0;
    return 1;
}

void bfs(int x,int y){
    queue<pair<int,int>>q;
    dis[x][y]=0;
    q.push({x,y});

    while(!q.empty()){
        auto nd=q.front();
        int x1=nd.first;
        int y1=nd.second;
        q.pop();

        for(auto  neigh :mv){
          
              if(is_valid(neigh.first+x1,neigh.second+y1)){
                if(dis[neigh.first+x1][neigh.second+y1]==INF) {

                 dis[neigh.first+x1][neigh.second+y1]=dis[x1][y1]+1;

                 q.push({neigh.first+x1,neigh.second+y1});
            }
        }
        }

    }

}

int KnightWalk(int N, int Sx, int Sy, int Fx, int Fy)
{
    bfs(Sx,Sy);
    
	 return dis[Fx][Fy]==INF ? -1 :dis[Fx][Fy];
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case;
	cin >> test_case;

	while (test_case--)
	{      
		cin >> N >> Sx >> Sy >> Fx >> Fy;
        dis.assign(N+1,vector<int>(N+1,INF));
		cout << KnightWalk(N, Sx, Sy, Fx, Fy) << "\n";
	}
}
