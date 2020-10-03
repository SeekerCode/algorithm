void LineEdit()
{
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
