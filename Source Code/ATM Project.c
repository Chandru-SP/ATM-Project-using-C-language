#include <stdio.h>

int main()
{
    float m_amount=50000;
    int pswd;
    printf("\t\n*************************\n");
    printf("\t\nWelcome To ATM\n\t");
    printf("\t\n*************************\n");
    printf("enter your password:");
    scanf("%d",&pswd);
    
    if (pswd!=1234){
        printf("\t Invalid PIN , Please Try again !");
        
    }
    else{
        printf("Select your Operation:\n\t1.Banking \t2.Balance Enquiry\n\t");
        int select;
        scanf("%d",&select);
        switch(select){
            case 1:
            printf("\t1.Withdraw\t2.Deposit\n\t");
            int a;
            float w_amount;
            float a_amount;
            float d_amount;
            scanf("%d",&a);
            if(a==1){
                printf("Enter the Amount to Withdraw:");
                scanf("%f",&w_amount);
                if(w_amount>m_amount){
                    printf("\t Not Enough Amount in your Account..!\n\t Your Current Balance is Rs.%f\n",m_amount);
                }
                else{
                    a_amount=m_amount-w_amount;
                    printf("Congractulations.!!\n\t Your Transcation Successful\n");
                    printf("\tYour Withdraw Amount is :Rs. %f \n \t And the Available Balance is : Rs.%f\n",w_amount,a_amount);
                    
                }
            }
            else if(a=2){
                printf("Enter the Amount to Deposit:");
                scanf("%f",&d_amount);
                if(d_amount==0){
                    printf("Invalid Amount...!");
                }
                else{
                    m_amount+=d_amount;
                    printf("Money Deposited Successfully..!");
                    printf("Available Amount:Rs.%f",m_amount);
                }    
                }
                break;
            case 2:
            printf("\t1.Check Balance\n\t");
            int c;
            scanf("%d",&a);
            printf("Total Account Balnce:Rs.%f",m_amount);
            break;
            }
        }
        return 0;
    }
    
    

    
