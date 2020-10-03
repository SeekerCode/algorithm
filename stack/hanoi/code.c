void hanoi(int n,char x,char y,char z){
    //将塔座x上按直径由小到大且自上而下编号为1至n的n个圆盘按规则搬到塔座z上，y可用做辅助塔座
    //搬动操作move(x,n,z)可定义为(c是初值为0的全局变量，对搬动计数)；
    //printf("%i.Move disk %i from %c to %c\n",++c,n,x,z);
    if (n==1)
    {
        move(x,1,z);        //将编号为1的圆盘从x移到z
    }
    else
    {
        hanoi(n-1,x,z,y);   //将x上编号为1至n-1的圆盘移到y， z做辅助塔
        move(x,n,z);        //将编号为n的圆盘从x移到z
        hanoi(n-1,y,x,z);   //将y上编号为1至n-1的圆盘移到z， x做辅助塔
    }
    
    
}