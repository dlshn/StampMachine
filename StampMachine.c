#include <stdio.h>


    int main()

    {

        int stamp25=1,stamp15=20,stamp10=20,stamp,coin,change,a;
        int coin50=10,coin25=0,coin10=10,coin5=10;

        while(1)
        {
        printf("**WELCOME TO STAMP VENDING MACHINE**\n\n");
        printf(">available quantity of STAMPS,\n stamp25=%d\n stamp15=%d\n stamp10=%d\n",stamp25,stamp15,stamp10);
        printf(">available quantity of COINS,\n coins50=%d\n coins25=%d\n coins10=%d\n coins5=%d\n",coin50,coin25,coin10,coin5);

        printf("\nEnter the stamp you want(25/15/10):");
        scanf("%d",&stamp);
        printf("Enter value of coin(50/25/10/5) :");
        scanf("%d",&coin);
        printf("\n");
        change=coin-stamp;
        if(coin==50||coin==25||coin==10||coin==5)
        {
            if(stamp==25||stamp==15||stamp==10)
        {

    {

    }        if(coin==50)
            {
                    if(change==25)
                    {
                        if(coin25>0)
                        {
                            if(stamp25>0)
                            {

                            printf("Value of the stamp : %d\n",stamp);
                            printf("change is coin25(Rs.25)\n");
                            coin50++;
                            coin25--;
                            stamp25--;
                            }
                            else
                            {
                                printf("no stamp available\nReturned your coin%d\n",coin);
                            }
                        }
                        else
                        {
                            printf("No change available\nReturned your coin50\n");
                        }
                    }
                    else if(change==35)
                    {
                        if(coin25>0&&coin10>0)
                        {
                            if(stamp15>0)
                            {
                            printf("Value of the stamp : %d\n",stamp);
                            printf("change is coin25 and coin10(Rs.35)\n");
                            coin50++;
                            coin25--;
                            coin10--;
                            stamp15--;
                            }
                            else
                            {
                                printf("no stamp available\nReturned your coin%d\n",coin);
                            }

                        }
                        else
                        {
                            printf("No change available\nReturned your coin50\n");
                        }
                    }
                    else
                    {
                         if(coin25>0&&coin10>0&&coin5>0)
                        {

                            if(stamp10>0)
                                {
                            printf("Value of the stamp : %d\n",stamp);
                            printf("change is coin25,coin10 and coin5(Rs.40)\n");
                            coin50++;
                            coin25--;
                            coin10--;
                            coin5--;
                            stamp10--;
                                }

                            else
                            {
                                printf("no stamp available\nReturned your coin%d\n",coin);
                            }

                        }
                        else
                        {
                            printf("No change available\nReturned your coin50\n");
                        }
                    }

            }
            else if(coin==25)
            {
                    if(change==0)
                    {

                       if(stamp25>0)
                       {
                        printf("Value of the stamp : %d\n",stamp);
                        printf("Change is Rs.0\n");
                        coin25++;
                        stamp25--;
                       }
                       else
                       {
                        printf("no stamp available\nReturned your coin%d\n",coin);
                       }

                    }
                    else if(change==10)
                            {
                                if(coin10>0)
                                    {
                                        if(stamp15>0)
                                        {
                                 printf("Value of the stamp : %d\n",stamp);
                                 printf("Change is coin10(Rs.10)\n");
                                 coin25++;
                                 coin10--;
                                 stamp15--;
                                        }
                                        else
                                        {
                                           printf("no stamp available\nReturned your coin%d\n",coin);
                                        }

                                 }

                                else
                                {
                                    printf("No change available\nReturned your coin25\n");
                                }

                    }
                    else
                    {
                        if(coin10>0&&coin5>0)
                        {
                            if(stamp10>0)
                            {
                        printf("Value of the stamp : %d\n",stamp);
                        printf("Change is coin10 and coin5(Rs.15)\n");
                        coin25++;
                        coin10--;
                        coin5--;
                        stamp10--;
                            }
                            else
                            {
                              printf("no stamp available\nReturned your coin%d\n",coin);
                            }


                        }
                        else
                        {
                            printf("No change available\nReturned your coin25\n");
                        }

                    }

            }
            else if(coin==10)
            {

                if(change==0)
                    {
                        if(stamp10>0)
                        {
                printf("Value of the stamp : %d\n",stamp);
                printf("Change is Rs.0\n");
                coin10++;
                stamp10--;
                        }
                        else
                        {
                            printf("no stamp available\nReturned your coin%d\n",coin);
                        }

                    }
                else
                    {
                        printf("insufficient amount tendered\nReturned your coin10\n");
                    }

            }
            else
            {
                printf("insufficient amount tendered\nReturned your coin5\n");   // for coin5
            }

        }
          else
        {
                printf("No these stamp.Only have stamp25,stamp15 and stamp10\nReturned your coin%d\nplease TRY AGAIN\n",coin);
        }

        }
        else
        {
                 printf("Not valid this coin\nReturned your coin%d\nplease TRY AGAIN\n",coin);
        }
        printf("Thank you\n>>If you want to LEAVE,press '1' key.\n>>If you want to TRY AGAIN,press '2' key.");
        scanf("%d",&a);
        printf("\n");
        if(a==1)
            break;

        }
   return 0;
    }



