int queen[10];
int n;

bool check(int row,int col){
    for(int pr=0;pr<row;pr++){
        int pc=queen[pr];
        if(col==pc || abs(row-pr)==abs(col-pc)) return false;
    }
    return true;
}
int rec(int level){
    //base
    if(level==n) return 1;
    //pruning
    //choice
    int ans=0;
    for(int col=0;col<n;col++){
        //check
        if(check(level,col)){
            
            queen[level]=col;
             //move
            ans+=rec(level+1);
            
            queen[level]=-1;
        }
    }
    //return
    return ans;
}
