#include <stdio.h>

void gradeClassifier(int num){
    
     if(num>=90){
        printf("A");
    } else if(num>=80){
        printf("B");
    } else if(num>=70){
        printf("C");
    } else if(num>=60){
        printf("D");
    } else{
        printf("F");
    }
}



int main() {

    int num;
   char classifier;
    
    printf("Enter a score: ");
     scanf("%d",&num);

    
    printf("Your grade is %c",classifier);
    gradeClassifier(num);
    
    return 0;
}
