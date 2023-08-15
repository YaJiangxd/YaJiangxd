#define learn_file

/*
#include <stdio.h>

一：两数之和

int main()
{
    int num1 = 0;         
    int num2 = 0;
    int sum =0;
    scanf("%d %d",&num1,&num2);  //输入函数scanf                               //取地址符号&
    sum = num1 + num2;
    printf("sum = %d\n",sum);
    return 0;
}
//注:注意顺序，定义变量在代码块开始，输入函数在sum之前


二：输出数组

#include <stdio.h>

int main()
{
    char shuzu1 [] = "abc";            //字符串自带的0被隐藏
    char shuzu2 [] = {'1','2','4','\0'};  //增加0来占位字符串结尾 
                                         //'\0'的值为0，为字符串结束标志
    printf("%s\n",shuzu1);
    printf("%s\n",shuzu2);
    return 0;
}
//用[]标记数组，%s来表示,一般用存放


三：简单的if语句

#include <stdio.h>

int main()
{
    int input = 0;
    printf("学不学C语言?\n输入1为学,输入0为不学\n请输入你的选择>:");
    scanf("%d",&input);
    if(input == 1)
        printf("给好学的你点个赞！");
    else
        printf("不学C语言可是不行的哟");
    return 0;

}
  
四：简单的while语句

#include <stdio.h>

int main()
{
    int input = '\0';
    int line = '\0';
    printf("你想获得力量吗？少年");
    while(line < 2001)
    {
        printf("一行代码飘过\n这是你写入的第%d行代码\n",line);
        line += 1;
    }
    if(line >= 2001)
    {
        printf("现在你已经有能力斩杀恶龙了！去吧少年！");
    }
return 0;
}



五：简单的定义函数

#include <stdio.h>

int addf(int x, int y)
{
    return x * y ;
}

int main()
{
    int a = 0;
    int b = 0;
    printf("请输入两个数字 >:");
    scanf("%d%d",&a,&b);
    int sum = addf(a,b);
    printf("%d * %d = %d",a,b,sum);
}


六：void的简单使用

#include <stdio.h>

void test ()
{
    int a = 1;    //a为局部变量，调用test后重新定义为1
    a++;
    printf("a = %d\n",a);  //每次输出均为2
}

int main()
{
    int i = 0;
    while(i < 5)
    {
        test();
        i++;
    }
    return 0;
}


七：static和while的简单使用
#include <stdio.h>

int sum(int a)
{
    int c = 0;
    static int b = 1;
    b += 2;
    c += 1;
    return (a + b + c);
}

int main ()
{
    int i = 0;
    int a = 2;
    while(i <= 5)
    {
        int Sum = sum(a);
        printf("sum = %d\n",Sum);
        i++;
    } 
    return 0;
}


八：指针和结构体的简单应用

#include <stdio.h>

struct book  //创建一个结构体类型
{
    char name[20]; 
    short prize;    
};

int main()
{
    struct book b1 = {"C语言程序设计",55};
                    //创建一个该类型的结构体变量
    struct book* pb = &b1;
        //.  结构体变量.成员
        //-> 结构体指针->成员

    printf("%s\n",(*pb).name);  //也可以用pb->name来代替
    printf("%d\n",(*pb).prize);
    return 0;
}

九：switch-case语句的简单应用

#include <stdio.h>

int main()
{
    int day;
    scanf("%d",&day);
    switch(day)    
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("工作日\n");
            break;
        case 6:
        case 7:
            printf("休息日\n");
            break;
        default:
            printf("其他\n");
            break;  //当没有任何 case 分支匹配时，将执行 default 分支中的代码
    }
    return 0;
}


十：switch-case中的default与break与continue语句*/
#include <stdio.h>

int main()
{
    int num;
    printf("加入比特\n买彩票");
    switch(num)
    {
        case 555 :
            printf("迎娶白富美\n");
        default:
            printf("老实学习\n成为大牛\n迎娶白富美");
        break;
    }
    return 0;
}
//continue语句执行后回到switch判断从，并非“继续执行”
