#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>
sem_t forks[5],room;
void* philosopher(void* arg){
    int i=*(int*)arg;
    sem_wait(&room);
    sem_wait(&forks[i]);
    sem_wait(&forks[(i+1)%5]);
    printf("Philosopher %d is eating\n",i);
    sleep(1);
    sem_post(&forks[(i+1)%5]);
    sem_post(&forks[i]);
    sem_post(&room);
    printf("Philosopher %d is thinking\n",i);
    return NULL;
}
int main(){
    int id[5],i;
    pthread_t t[5];
    sem_init(&room,0,4);
    for(i=0;i<5;i++){
        sem_init(&forks[i],0,1);
        id[i]=i;
    }
    for(i=0;i<5;i++){
        pthread_create(&t[i],NULL,philosopher,&id[i]);
    }
    for(i=0;i<5;i++){
        pthread_join(t[i],NULL);
    }
    return 0;
}