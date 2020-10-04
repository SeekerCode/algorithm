

bool BracketsCheck(char *str)
{
    InitStack(S);
    int i = 0;
    while (str[i] != '\0')
    {
        switch (str[i])
        {
        case '(':   Push(S, '(');   break;
        case '[':   Push(S, '[');   break;
        case '{':   Push(S, '{');   break;

        case ')':   Pop(S, e);
            if (e != '(')
                return false;
            break;
        case ']':   Pop(S, e);
            if (e != '[')
                return false;
            break;
        case '}':   Pop(S, e);
            if (e != '{')
                return false;
            break;
        default:    break;
        } // switch
        i++;
    } // while

    if (!IsEmpty(S))
    {
        printf("括号不匹配\n");

        return false;
    }

    else
    {
        printf("括号匹配\n");
        return true;
    }
}
