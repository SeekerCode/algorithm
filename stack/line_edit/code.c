void LineEdit()
{
	//利用字符栈S，从终端接受一行并传送至调用过程的数据区
	InitStack(S);
	ch = getchar();
	while (ch != EOF)
	{
		while (ch != EOF && ch != '\n')
			switch (ch)
			{
			case '#':
				Pop(S, c);
				break;
			case '@':
				ClearStack(S);
				break;
			default:
				Push(S, ch);
				break;
			}
		ClearStack(S);
		if (ch != EOF)
			ch = getchar();
	}
	DestoryStack(S);

} //LineEdit
