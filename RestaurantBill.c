 #include<stdio.h>
void main()
{
    int item_number,item_quantity,item_cost,total_cost=0,n;
    printf("Welcome to Rasoi Restaurant! \n \n");
    printf("-----------Menu Card----------- \n \n");
    printf("1]  Veg. Sandwich..............Rs.65 \n");
    printf("2]  Veg. Grilled Sandwich......Rs.130 \n");
    printf("3]  Veg. Cheese Pizza..........Rs.175 \n");
    printf("4]  Jain Pav Bhaji.............Rs.120 \n");
    printf("5]  Chinese Bhel...............Rs.140 \n");
    printf("6]  Hakka Noodles..............Rs.180 \n");
    printf("7]  Sweet Lassi................Rs.70 \n");
    printf("8]  Soda.......................Rs.20 \n");
    printf("9]  Cold Coffee................Rs.110 \n");
    printf("10] Rose Faluda................Rs.140 \n \n");
    start:
    printf("Enter the item number you want to order: ");
    scanf("%d",&item_number);
    printf("Enter the quantity of the item: ");
    scanf("%d",&item_quantity);

    switch(item_number)
    {
        case 1:
            item_cost=65*item_quantity;
            total_cost+=item_cost;
            printf("Would you like to order something else? \n");
            printf("Enter 1 for Yes & 0 for No \n");
            scanf("%d",&n);
            if(n==1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        break;
        case 2:
            item_cost=130*item_quantity;
            total_cost+=item_cost;
            printf("Would you like to order something else? \n");
            printf("Enter 1 for Yes & 0 for No \n");
            scanf("%d",&n);
            if(n==1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        break;
        case 3:
            item_cost=175*item_quantity;
            total_cost+=item_cost;
            printf("Would you like to order something else? \n");
            printf("Enter 1 for Yes & 0 for No \n");
            scanf("%d",&n);
            if(n==1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        break;
        case 4:
            item_cost=120*item_quantity;
            total_cost+=item_cost;
            printf("Would you like to order something else? \n");
            printf("Enter 1 for Yes & 0 for No \n");
            scanf("%d",&n);
            if(n==1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        break;
        case 5:
            item_cost=140*item_quantity;
            total_cost+=item_cost;
            printf("Would you like to order something else? \n");
            printf("Enter 1 for Yes & 0 for No \n");
            scanf("%d",&n);
            if(n==1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        break;
        case 6:
            item_cost=180*item_quantity;
            total_cost+=item_cost;
            printf("Would you like to order something else? \n");
            printf("Enter 1 for Yes & 0 for No \n");
            scanf("%d",&n);
            if(n==1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        break;
        case 7:
            item_cost=70*item_quantity;
            total_cost+=item_cost;
            printf("Would you like to order something else? \n");
            printf("Enter 1 for Yes & 0 for No \n");
            scanf("%d",&n);
            if(n==1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        break;
        case 8:
            item_cost=20*item_quantity;
            total_cost+=item_cost;
            printf("Would you like to order something else? \n");
            printf("Enter 1 for Yes & 0 for No \n");
            scanf("%d",&n);
            if(n==1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        break;
        case 9:
            item_cost=110*item_quantity;
            total_cost+=item_cost;
            printf("Would you like to order something else? \n");
            printf("Enter 1 for Yes & 0 for No \n");
            scanf("%d",&n);
            if(n==1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        break;
        case 10:
            item_cost=140 *item_quantity;
            total_cost+=item_cost;
            printf("Would you like to order something else? \n");
            printf("Enter 1 for Yes & 0 for No \n");
            scanf("%d",&n);
            if(n==1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        break;
        default:
        printf("Invalid Input, Try Again \n \n");
        goto start;
    }

    end:
    printf("\nYour Total Bill is: Rs.%d",total_cost);
}
