#include <stdio.h>


void printRoman(int number);

int main(){
    
    int number, counter=1;
    while(counter>0){
       
        printf("Enter a number between 1 and 89, Enter 0 to quit: \n");
        scanf("%d", &number);
        
        if(number<0 || number>89) printf("Invalid number!\n");
        else if(number==0){
            printf("Goodbye!\n"); return 0;
        }else{
            printf("\n");
            printRoman(number);
            printf("\n");
            printf("\n");
        }
    }
    return 0;
}

void printRoman(int number){
    
    int counter1=2, counter2=2;
    while(number>0){
        
        if (number>=1 && number<4){
            printf("I");
            number-=1;
        }
        
        else if (number==4){
            if(counter1==2) printf("I");
            else if (counter1==1) printf("V");
            else number-=4;
            counter1--;
        }
        
        else if (number>=5 && number<9){
            printf("V");
            number-=5;
        }

        else if (number==9){
            if(counter1==2) printf("I");
            else if (counter1==1) printf("X");
            else number-=9;
            counter1--;
        }
        
        else if (number>=10 && number<40){
            printf("X");
            number-=10;
        }
        
        else if (number>=40 && number<50){
            if(counter2==2) printf("X");
            else if (counter2==1) printf("L");
            else number-=40;
            counter2--;
            
        }
        
        else if (number>=50 && number<90){
            printf("L");
            number-=50;
        }
        

    
    }
   
}







