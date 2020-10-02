typedef struct Node
{
    char data;
    struct Node *next;
} SNode;
/*求链表长度的函数*/
int listlen(SNode *head)
{
    int len = 0;
    while (head->next != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

/*找出共同后缀的起始地址*/
SNode *find_addr(SNode *str1, SNode *str2)
{
    int m, n;
    SNode *p, *q;
    m = listlen(str1);                              //求str1的长度
    n = listlen(str2);                              //求str1的长度
    for (p = str1; m > n; m--)                      //若m>n，使p指向链表中的第m-n+1个结点
    {
        p = p->next;
    }
    for (q = str2; m < n; n--)                      //若m<n，使q指向链表中的第n-m+1个结点
    {
        q = q->next;
    }
    while (p->next != NULL && p->next != q->next)   //将指针p和q同步向后移动
    {
        p = p->next;
        q = q->next;
    } //while
    return p->next;                                 //返回共同后缀的起始地址
}