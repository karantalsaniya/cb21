// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000

#include <stdio.h>
void main()
{
    int num = 1;
    int ans = 0;

    do{
        printf("%d ", ans);
    ans = ans + num; 
    num=num+1;
    }while(ans<1000);

    //    print("%d",ans);//1
    //    ans=ans+num;//3
    //    num=num+1;//3

    //    print("%d",ans);
    //    ans=ans+num;//6
    //    num=num+1;//4

    //    print("%d",ans);
    //    ans=ans+num;//10
    //    num=num+1;//5

    //    print("%d",ans);
}
