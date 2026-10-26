#include<stdio.h>
int main()
{
        int pin=1234;
        int epin,choice;
        float amount;
        float balance=5000; 
        printf("Enter a pin:");
        scanf("%d",&epin);
        if(epin!=pin)
        {
                printf("invalied pin\n");
                return 0;
        }
        printf("login success\n");
        do
        {
                printf("\nmenu\n");
                printf("\n 1.cheak balance\n");
                printf("\n 2.with draw\n");
                printf("\n 3.depasit\n");
                printf("\n 4.Exit\n");
                printf("Enter the choice:");
                scanf("%d",&choice);
        }
        while(choice!=4);
        switch(choice)
        {
                case 1:
                        {
                                printf("total balance=%f",balance);
                                break;
                        }
                case 2:
                    {
                            printf("Enter the withdraw amount:");
                            scanf("%f",&amount);
                            if(amount<=0)
                            {
                                    printf("\n invalied amount \n");
                                }
                                else if(amount>balance)
                                {
                                        printf("\n insufficent amount\n");
                                }
                                else
                                {
                                        balance-=amount;
                                        printf("\n withdraw success\n");
                                        printf("new balance=%f",balance);
                                }
                                break;
                        }
                case 3:
                        {
                            printf("\nEnter the deposit amount:");
                                scanf("%f",&amount);
                                if(amount>0)
                                {
                                        balance+=amount;
                                        printf("\ndeposit successful\n");
                                        printf("total amount:%f",balance);
                                } 
                                else
                                {
                                        printf("\n invalied amount \n");
                                }        
                             break;;
                    }
                case 4:
                {
                        printf("\nthank you\n");
                        break;
                }  
                default:
                {
                    printf("\n Invalied choice\n");        
                }  
        }

          getch();
	  return 0;
	}