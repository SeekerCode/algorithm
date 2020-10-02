typedef int ElemType; //链表数据类型定义
typedef struct LNode  //链表结点的结构定义
{
    ElemType data;      //结点数据
    struct LNode *link; //结点链接指针
} LNode, *LinkList;

int Search_k(LinkList list, int k)
{
    //查找链表list倒数第k个结点并输出该节点data域的值
    LNode *p = list->link, *q = list->link;
    int count = 0;
    while (p != NULL)
    {
        if (count < k)
            count++;
        else
            q = q->link;
        p = p->link;

    } //while
    if (count < k)
    {
        return 0;
    }
    else
    {
        printf(
            "%d", q->data);
        return 1;
    }
}//Search_k