#include<stdio.h>
#include<string.h>
#include"file.h"
#include"marks.h"

int readFile(char *fname, struct Student s[]){
    FILE *fp=fopen(fname,"r");
    if(fp==NULL){
        return 0;
    }
    int n;
    fscanf(fp,"%d\n",&n);
    for(int i=0;i<n;i++){
        fgets(s[i].rollnum,20,fp);
        s[i].rollnum[strcspn(s[i].rollnum,"\n")]='\0';

        fgets(s[i].name,100,fp);
        s[i].name[strcspn(s[i].name,"\n")]='\0';

        for(int j=0;j<SUBJ;j++){
            fscanf(fp,"%d",&s[i].marks[j]);
        }

        fgetc(fp);
        calculateMarks(&s[i]);
    }
    fclose(fp);
    return n;
}