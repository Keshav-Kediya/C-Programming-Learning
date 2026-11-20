#include<stdio.h>
int main()
{
    int x=0,y=0,ch;

    printf("1.Up\n");
    printf("2.Down\n");
    printf("3.Right\n");
    printf("4.Left\n");

    printf("\n-----Robot movement-----\n");

    while(1)
    {
        printf("Enter a choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            y++;
            printf("Robot moved up!\n");
            break;

            case 2:
            y--;
            printf("Robot moved down!\n");
            break;

            case 3:
            x++;
            printf("Robot moved right!\n");
            break;

            case 4:
            x--;
            printf("Robot moved left!\n");
            break;

            case 5:
            printf("Robot Stopped!!");
            return 0;
        }
        printf("Position X=%d,Y=%d\n\n",x,y);
    }
return 0;

}
