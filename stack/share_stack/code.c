#define maxsize 100 //两个栈共享顺序存储空间所能达到的最多元素数 \
                    //初始化为100

#define elemtp int //假设元素类型为整型

typedef struct
{
    elemtp stack[maxsize]; //栈空间
    int top[2];
} stk;

stk s; //s是如上定义的结构类型变量，为全局变量

int push(int i, elemtp x)
{
    //入栈操作。主为栈号，i=0表示左边的s1栈，i=1表示右边的s2栈，x是入栈元素
    //入栈成功返回1,否则返回0

    if (i < 0 || i > 1)
    {
        printf("栈号输入不对");
        exit(0);
    }

    if (s.top[1] - s.top[0] == 1)
    {
        printf("栈已满\n");
        return 0;
    }

    switch (i)
    {
    case 0:
        s.stack[++s.top[0]] = x;
        return 1;
        break;
    case 1:
        s.stack[--s.top[1]] = x;
        return 1;
    }
}

//退栈操作

elemtp pop(int i)
{
    //退栈算法。i表示栈号，i=0时为s1栈，i=1时为s2栈
    //退栈成功返回退栈元素，否则返回-1
    if (i < 0 || i > 1)
    {
        printf("栈号输入错误\n");
        exit(0);
    }
    switch (i)
    {
    case 0:
        if (s.top[0] == -1)
        {
            printf("栈空\n");
            return -1;
        }
        else
            return s.stack[s.top[0]--];

    case 1:
        if (s.top[1] == maxsize)
        {
            printf("栈空\n");
            return -1;
        }
        else
            return s.stack[s.top[0]--];
    } //switch
}
