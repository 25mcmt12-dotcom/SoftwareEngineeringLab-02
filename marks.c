#include<string.h>
#include "marks.h"

void calculateMarks(struct Student *st){
    int sum=0;
    for(int i=0;i<SUBJ;i++){
        sum=sum+st->marks[i];

    }

    st->total=sum;
    st->percent=(sum/ (SUBJ*100.0))*100;

    if(st->percent>=90)
        strcpy(st->grade,"O");
    else if(st->percent>=75)
        strcpy(st->grade,"A");
    else if(st->percent>=60)
        strcpy(st->grade,"B");
    else    
        strcpy(st->grade,"C");
        
    st->cgpa=st->percent/10;
}