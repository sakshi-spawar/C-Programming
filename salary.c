#include<stdio.h>
int main()
{
    float ts,bs,da,hra,tax;
    int eid;
    char ename[100];
    FILE *fp;

    fp = fopen("salarySlip.txt","w");

    printf("Enter Employee Details :");

    printf("\nID :");
    scanf("%d",&eid);

    printf("Name :");
    scanf("%s",&ename);


    printf("Enter a Basic salary :");
    scanf("%f",&bs);

    printf("Enter a Daily allownces (%%):");
    scanf("%f",&da);

    printf("Enter a House rent allownce (%%):");
    scanf("%f",&hra);

    printf("Enter a tax (%%):");
    scanf("%f",&tax);

    ts=bs+((bs*(da+hra-tax))/100);

    fprintf(fp,"\n-----------------Employee Salary Slip--------------");
    fprintf(fp,"\n\t\tID                  :%d",eid);
    fprintf(fp,"\n\t\tName                :%s",ename);
    fprintf(fp,"\n\t\tBasic salary        :%.2f",bs);
    fprintf(fp,"\n\t\tDA                  :%.2f",da);
    fprintf(fp,"\n\t\tHRA                 :%.2f",hra);
    fprintf(fp,"\n\t\tTAX                 :%.2f",tax);
    fprintf(fp,"\n\t\tTotal salary        :%.2f",ts);

    return 0;
}