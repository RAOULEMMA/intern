//a//a program that performs various matrix operations

#include<stdio.h>
#include<stdlib.h>

int main(){

//telling the user about the function of our code

printf("welcome to our program\n");
printf("our program is designed to calculate all basic matrix calculations\n");

//prompt user to input the a value to select an operation
char answer;
do{
printf("input 1 for matrix addition\n");
printf("input 2 for matrix subtraction\n");
printf("input 3 for matrix multipliation\n");
printf("input 4 for matrix inverse\n");
int dec;
scanf("%d",&dec);

//if statement to perform particular operation selected by the user
if(dec==1)
{

    int a[2][2],b[2][2],sum[2][2],i,j;
printf("enter the first 2*2 matrix element: \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the second 2*2 matrix elemnt: \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
//calculate sum of matrice

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
}
//display result of sum

printf("sum of matrices A and B is:\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",sum[i][j]);
}
printf("\n");
}
}

//performing the subtraction when the option 2 is choosen
else if(dec==2)
{

    int a[2][2],b[2][2],sub[2][2],i,j;
printf("enter the first 2*2 matrix element: \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the second 2*2 matrix elemnt: \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
//calculate the subtraction of matrix

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        sub[i][j]=a[i][j]-b[i][j];
    }
}
//display result of subtraction

printf("subtraction of matrices A from B is:\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",sub[i][j]);
}
printf("\n");
}
}
//performing the multiplication if option 3 is choosen
else if(dec==3)
{
//colecting values of the two matrices to be multiplied
    int a[2][2],b[2][2],c[2][2],i,j,k;
printf("enter the first 2*2 matrix element: \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the second 2*2 matrix elemnt: \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
//multiplying the two matrix
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)

        for(k=0;k<2;k++)
        {
            c[i][j]=a[i][k]*b[k][j];
        }
    }

//display results of multiplucation
printf("product of matrices A and B is:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
}

else if(dec==4)
{
//colecting values of the  matrices to be inversed
    float a[2][2],inv_a[2][2],adj[2][2],det_a;
    int i,j;
printf("enter the  2*2 matrix element: \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%f",&a[i][j]);
    }
}
//calculating the determinant of the matrix
det_a=a[0][0]*a[1][1]-a[0][1]*a[1][0];
//condition for a matrix to have an inverse

 if(det_a==0){
    printf("the determinant is zero ,hence the matrix has no inverse");
 }
 else{
        printf("the determinant of the matrix is %.1f: \n",det_a);

//calculating the adjoint of the 2*2 matrix
 adj[0][0] = a[1][1];
    adj[0][1] = -a[0][1];
    adj[1][0] = -a[1][0];
    adj[1][1] = a[0][0];


printf("The adjoint of the matrix is:\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            printf("%.1f\t", adj[i][j]);
        }
        printf("\n");
}
//we now calculate the inverse of matrix a using the value of the adjoint and determinant gotten above

 printf("Inverse of   theMatrix  is\n");

            inv_a[0][0]=(adj[0][0])/det_a;
            inv_a[0][1]=(adj[0][1])/det_a;
            inv_a[1][0]=(adj[1][0])/det_a;
            inv_a[1][1]=(adj[1][1])/det_a;
             for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {


            printf("%.1f\t ",inv_a[i][j]);
        }
        printf("\n");

}
}
}

printf("do you want to perform another matrix operation\n ");
printf("type yes to continue \n");
        scanf("%c",&answer);


   } while (answer == 'yes');
    system("pause");


return 0;
}
