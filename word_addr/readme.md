# 链表保存单词

-----------------------------------------------;

## 假定采用带头结点的单链表保存单词，当两个单词有相同的后缀时，可享用相同的后缀存储空间。例如“loading”,“being”

------------------------------------------------;

### 算法的基本思想

------------------------------------------------;

1. 分别求出str1和str2所指的两个链表的长度m和n  

2. 将两个链表以表尾对齐，令指针p、q分别指向str1和str2的头结点，若m>=n，则指针p先走，使p指向链表中的第m-n+1个结点，若m<n，则使p指向链表中的第m-n+1个结点

3. 反复将指针p和q同步向后移动，当p、q指向同一位置时停止，即为共同后缀的起始位置，算法结束

### 算法的时间复杂度

------------------------------------------------;

时间复杂度为：O(len1+len2)或O(max(len1,len2))

**2012统考真题*
