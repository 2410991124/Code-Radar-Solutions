int fibonacciSeries(int x){
    int f=0, s=1, r;
    if(n==1){
        return f;
    }
    else if(n==2){
        printf("%d", f);
        printf("%d", s);
    }
    else{
        for(int i=1; i<=n; i++){
            r=f+s;
            printf("%d", r);
            f=s;
            s=r;
        }
    }
}