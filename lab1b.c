#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
bool verifyregistration(char registration[]){
    if(strlen(registration)!=10){
        return false;
    }
    for(int i=0;i<2;i++){
        if(!isalpha(registration[i])){
            return false;
        }
    }
    for(int i=2;i<4;i++){
        if(!isdigit(registration[i])){
            return false;
        }
    }
    for(int i=4;i<6;i++){
        if(!isalpha(registration[i])){
            return false;
        }
    }
    for(int i=6;i<10;i++){
        if(!isdigit(registration[i])){
            return false;
        }
    }
    return true;
}
int main(){
    char registration[11];
    printf("enter the vehicle registration no:");
    scanf("%s",registration);
    if(verifyregistration(registration)){
        printf("Accept");
    }
    else{
        printf("Reject");
    }
}