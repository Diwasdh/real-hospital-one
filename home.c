#include<stdio.h>
#include<stdlib.h>

void main(){
int a;
label1:
printf("\n\n*********************************************** WELCOME TO THE HOSPITAL**********************************************\n\n\n");

printf("||\t\t PRESS\t\t||\t\t\t FUNCTION\t\t||\n\n");
printf("____________________________________________________________________________________________________________________\n");

printf("||\t\t   1  \t\t||\t\t\t EVENTS\\NOTICE\t\t||\n\n");
printf("||\t\t   2  \t\t||\t\t DOCTOR APPOINTMENT\t\t||\n\n");
printf("||\t\t   3  \t\t||\t\t\t   BLOG  \t\t||\n\n");
printf("||\t\t   4  \t\t||\t\t\t OUR DOCTORS\t\t||\n\n");
printf("||\t\t   5  \t\t||\t\t\t ABOUT US  \t\t||\n\n");
printf("||\t\t   6  \t\t||\t\t\tCONTACT US\t\t||\n\n");
printf("||\t\t   7  \t\t||\t\t\t STAFF WORK\t\t||\n\n");
printf("||\t\t   8  \t\t||\t\t\t INSTRUCTIONS\t\t||\n\n");
printf("||\t\t   9  \t\t||\t\t\t  EMERCENCY    \t\t||\n\n");
printf("||\t\t   10  \t\t||\t\t\t  EXITS    \t\t||\n\n");
printf("____________________________________________________________________________________________________________________\n\n\n\n");
scanf("%d",&a);
switch(a){
    case 1://EVENTS
        system("cls");
        printf("\t\t*************EVENTS/NOTICE****************\n\n");
        int b;// FO GOING BACK HOME


        break;
        case 2://APPOIYMENT
            system("cls");
        printf("\t\t*************DOCTOR APPOINTMENT****************\n\n");

        break;
        case 3://BLOG
            system("cls");
        printf("\t\t*************BLOGs****************\n\n");

        break;
        case 4://DOCT INFO
            system("cls");
        printf("\t\t*************OUR DOCTORS****************\n\n");

        break;
        case 5:// ABOUT HOSPITAL
            system("cls");
        printf("\t\t*************ABOUT US****************\n\n");

        break;
        case 6:// GENERAL INFORAMTION
            contact: // to back from feed back
            system("cls");
        printf("\t\t*************CONTACT US****************\n\n");
        int cont;
        printf("\t\t\tNAME OF HOSPITAL : KANTIPUR HOSPITAL\n\n");
        printf("\t\t\t ADDERESS        : TINKUNE ,KATHMANDU NEPAL\n\n");
        printf("\t\t\t DIRECTION       : SHRIGANESH MARGA,KATHMANDU 44600,27.6857,85.344919\n\n");
        printf("\t\t\t TEL-PHONE NO. 01: 01-2102107 \n\n");
printf("\t\t\t TEL-PHONE NO. 02        : 01-2102108 \n\n");
printf("\t\t\t MOBILE NO 01            :+977-9863382689 \n\n");
printf("\t\t\t MOBILE N0 02     :+977-9864482687 \n\n");
printf("\t\t\tPOX.BOX.NO       : 191645,TINKUNE ,KATHMANDU ,NEPAL\n\n");
printf("\t\t\t EMAIL      :kantipurhospital@gmail.com \n\n");
printf("\t\t\t WEBSITE       :www.kantipurhospital.com.np \n\n");
printf("\t\t\t FACEBOOK PAGE       :kantipur hospital \n\n\n\n");
printf("\t\t\t PRESS 1 FOR FEED BACK\n\n");
printf(" \t\t\t ANY OTHER NUMBER TO GO BACK HOME\n\n");//") int contact gonna be usewd
scanf("%d",&cont);
switch(cont){
case 1:
    {
        system("cls");


    int feed; // to choose for view and write
    printf("\t\t\t press 1 to view \n\n ");
    printf("\t\t\t press 2 to write feedback      : \n\n");
    printf("\t\t\t press any remaining number to back     : \n\n");
    scanf("%d",&feed);
    switch(feed){
    case 1:
        system("cls");
        printf("\t\t\t******FEEDBACK********");
        break;
    case 2:
        system("cls");
        printf("\t\t\t****FEEDBACK********");
        break;
    default:
        goto contact;

    }
    break;




    }
    default:
        goto label1;
}








        break;
        case 7:
            system("cls");
        printf("\t\t*************STAFF WORK****************\n\n");

        break;
        case 8:
            system("cls");
        printf("\t\t*************INSTRUCTION****************\n\n");
        int in;

        printf("\t\t\t PLEASE FOLLOW THESE INSTRUCTION FOR EASY\n\n");
        printf("\t\t\t 1. VISITING HOURS AT THE SPECECIALTY HOSPITAL ARE FROM \"5\" AM TILL \"6\"PM \n\n");
        printf("\t\t\t 2. PLEASE DONOT BRING FOOD OR DRINKS TO A PATIENTS \n\n");
        printf("\t\t\t 3. OUR HOSPITAL IS A FREE OF SMOKING ENVIRONMENT\n\n");
        printf("\t\t\t 4. PLEASE STAY QUIET AND KEEP THE HOSPITAL CLEAN\n\n");
        printf("\t\t\t 5. PLEASE DO NOT REMOVE THE IDENTIFICATION BAND\n\n");
        printf("\t\t\t 6. LABORTARY SAMPLES MUST BE TAKEN ACCORDING TO DCTORS\n\n");

        printf("\t\t\t 7.  PLEASE SELECT THE OPTION CAREFULLY AS PER YOUR NEED ONLY\n\n");
        printf("\t\t\t PRESS ANY NUMBER KEY TO GO BACK ON HOME\n\n");
        scanf("%d",&in);
        switch(in){
    default:
        goto label1;
        }



        break;

        case 9:
            system("cls");

        printf("\t\t*************EMERGENCY****************\n\n");

        break;
        case 10:
system("cls");
exit:
        printf("\t\t*************EXIT****************\n\n");

        break;


    default:
        goto label1;









}











}
