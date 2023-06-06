#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello welcome to my average calculator");
     printf("enter the number of students:  ");
     int stdNum,totalcoef[50];
     float total_marks[50],average[50];
     scanf("%d",&stdNum);
     while(stdNum < 0){
        printf("invalid value,please re-enter the student number:  ");
        scanf("%d",&stdNum);
    }

        printf("enter the number of subjects for each students\n");
    for(int i=0;i<stdNum;i++){
            int subnum;
            printf("enter the number of subject for student %d: ",i+1);
            scanf("%d",&subnum);



    int marks,coef;

    totalcoef[i]=0.0;
    total_marks[i]=0.0;
for(int j=0; j<subnum ;j++){
    printf("enter the marks for subject %d:  ",j+1 );
    scanf("%d",&marks);
    printf("enter its coeficient:  ");
    scanf("%d",&coef);
    total_marks[i] +=(marks * coef);
    totalcoef[i] =totalcoef[i] + coef;
}
    }
    for(int i=0;i<stdNum;i++){
                average[i]=total_marks[i]/totalcoef[i];
            }
            printf("***********results********");
        for(int i=0; i<stdNum ;i++){
                printf("student %d\n",i+1);
                printf("total marks %.2f\n",total_marks[i]);
                printf("total coefficients %d\n",totalcoef[i]);
                printf("average %.2f\n",average[i]);
            }




    return 0;
}
