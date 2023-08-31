// Write a programe to take 5 name as input
#include <stdio.h>
void main()
{
    char name[5][6];
    int count = 0;
    printf("write name of person 1 ");
    for (count = 0; count < 6; count + 1)
    {
        scanf("%c", &name[0][count]);
         if (name[0][count] == '\n')
          {
               break;
          }
    }
    count = 0;
    printf("name of person 1");
    for (count = 0; count < 6; count + 1)
    {
        printf("%c",name[0][count]);
        //   if(name[0][count] == '\n')
        //   {
        //        break;
        //   }
          
    }
}
// printf("%c",name [0][1]);
// printf("%c",name [0][2]);
// printf("%c",name [0][3]);
// printf("%c",name [0][4]);
// printf("%c",name [0][5]);
// scanf("%c",&name [0][0]);
// scanf("%c",&name [0][1]);
// scanf("%c",&name [0][2]);
// scanf("%c",&name [0][3]);
// scanf("%c",&name [0][4]);
// scanf("%c",&name [0][5]);
