#include<stdio.h>
int main(){
    int i,n,t=0,done=0,q;
    int bt[10],ct[10],rt[10],wt[10],tat[10],p[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        p[i]=i+1;
        scanf("%d",&bt[i]);
        rt[i]=bt[i];
    }
    scanf("%d",&q);
    while(done<n){
        for(i=0;i<n;i++){
            if(rt[i]>0){
                if(rt[i]>q){
                    t=t+q;

                    
                    rt[i]=rt[i]-q;
                }
                else{
                    t=t+rt[i];
                    rt[i]=0;
                    ct[i]=t;
                    done++;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        tat[i]=ct[i];
        wt[i]=tat[i]-bt[i];
    }
    printf("P\tBT\tCT\tWT\tTAT\n");
    for(i=0;i<n;i++)
     printf("P%d\t%d\t%d\t%d\t%d\n",p[i],bt[i],ct[i],wt[i],tat[i]);
    return 0; 
}