#include<stdio.h>
int main(){
    int i,j,n,t;
    int bt[10],wt[10],tat[10],pr[10],p[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        p[i]=i+1;
        scanf("%d%d",&bt[i],&pr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(pr[i]>pr[j]){
                t=pr[i];
                pr[i]=pr[j];
                pr[j]=t;

                t=bt[i];
                bt[i]=bt[j];
                bt[j]=t;

                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }
    wt[0]=0;
    for(i=1;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
    }
    for(i=0;i<n;i++){
        tat[i]=wt[i]+bt[i];
    }
    printf("P\tBT\tPR\tWT\tTAT\n");
    for(i=0;i<n;i++){
        printf("P%d\t%d\t%d\t%d\t%d\n",p[i],bt[i],pr[i],wt[i],tat[i]);
    }
    return 0;
}
