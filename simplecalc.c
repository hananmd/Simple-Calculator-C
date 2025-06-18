#include<stdio.h>
#include<math.h>


int main()
{
    float x,y;
    int r;
    printf("Enter the Number 1 :");
    scanf("%f",&x);
    printf("Enter the Number 2 :");
    scanf("%f",&y);
    
   
    
   while(1)
   {
    printf("\nSelect the Operation given below\n1.Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus (only if both inputs are integers)\n6. Exit\n");
    printf("Your Option :");
    scanf("%d",&r);
    
    switch(r){
        case 1:
        printf("%f + %f = %f",x,y,x+y);
        break;

        case 2:
        printf("%f-%f =%f",x,y,x-y);
        break;

        case 3:
        printf("%f * %f= %f",x,y,x*y);
        break;

        case 4:
        if(y!=0)
        {
             printf("%f/%f = %d",x,y,x/y);
        }
       else{
        printf("Invalid Operation");
       }
        break;
        
        case 5:
        printf("modulus of %f divided by %f =%.3f",x,y,fmod(x,y));
        break;
        
        case 6:
        printf("Exiting the Operations");
        return 0;

        default:
        printf("Invalid INPUT !!\ntry again");
        
    }

}

    

}
