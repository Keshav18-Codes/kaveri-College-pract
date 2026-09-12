#include<stdio.h>

void increment_time(int *hours, int *minutes, int *seconds, int s){
    *seconds += s;

    while (*seconds >= 60){
        *seconds -= 60;
        (*minutes)++;
    }
    while(*minutes >= 60){
        *minutes -=60;
        (*hours)++;
    }
    while(*hours>=24){
        *hours -=24;
    }
}

int main(){
    int hours, minutes, seconds, increment_seconds;

    printf("Enter time (hours, minutes, seconds):");
    scanf("%d %d %d",&hours,&minutes,&seconds);

    printf("Enter seconds to increment:");
    scanf("%d",&increment_seconds);

    increment_time(&hours,&minutes,&seconds,increment_seconds);
    printf("New Time:%02d:%02d:%02d\n",hours,minutes,seconds);

    return 0;
    
}