int fibonacciSeries(int x){
    int f=0, s=1, r;
    if(x==1){
        f=0;
        printf("%d ", f);
    }
    else if(x==2){
        f=0;
        printf("%d ", f);
        printf("%d ", s);
    }
    else{
        for(int i=1; i<=x; i++){
            // f=0;
            r=f+s;
            printf("%d ", r);
            f=s;
            s=r;
        }
    }
}