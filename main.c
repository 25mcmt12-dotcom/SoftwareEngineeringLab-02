#include<stdio.h>
#include"file.h"
#include"stats.h"
#define MAX 50

int main(){
    struct Student s[MAX];
    int n=readFile("input.txt",s);
    if(n==0){
        printf("file error");
        return 1;
    }

    printf("ROLL    NAME                    TOTAL   %%  GRADE   CGPA\n");
    printf("----------------------------------------------------------\n");

    for(int i=0;i<n;i++){
        printf("%-6s %-22s %-6d %-6.2f %-5s %.2f\n",
        s[i].rollnum,s[i].name,
        s[i].total,s[i].percent,
        s[i].grade,s[i].cgpa);

    }
    Stats(s,n);
    return 0;
    
}