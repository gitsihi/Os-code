#include<stdio.h>
int main(){
    int i,n,t=0,done=0,idx,best;
    int at[10],bt[10],pr[10],rt[10],ct[10],wt[10],tat[10],p[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        p[i]=i+1;
        scanf("%d%d%d",&at[i],&bt[i],&pr[i]);
        rt[i]=bt[i];
    }
    while(done<n){
        idx=-1;
        best=9999;
        for(i=0;i<n;i++){
            if(at[i]<=t&&rt[i]>0&&pr[i]<best){
                idx=i;
                best=pr[i];
            }
        }
        if(idx==-1)
          t++;
        else{
            rt[idx]--;
            t++;
            if(rt[idx]==0){
                ct[idx]=t;
                done++;
            }
        }  
    }
    for(i=0;i<n;i++){
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
    }
        printf("P\tAT\tBT\tPR\tCT\tWT\tTAT\n");

        for(i=0;i<n;i++)
            printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
                p[i],at[i],bt[i],pr[i],ct[i],wt[i],tat[i]);
    return 0;
}