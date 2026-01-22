#include<stdio.h>
#include"stats.h"

void Stats(struct Student s[],int n){
    float avg=0, high, low;

    high=low=s[0].percent;
    for(int i=0;i<n;i++){
        avg+=s[i].percent;

        if(s[i].percent>high){
            high=s[i].percent;
        }
        if(s[i].percent<low){
            low=s[i].percent;
        }
    }
    printf("\nClass Average: %.2f",avg/n);
    printf("\nHighest: %.2f",high);
    printf("\nLowest: %.2f\n",low);
}