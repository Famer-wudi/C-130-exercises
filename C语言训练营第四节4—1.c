#include<stdio.h>
#include<string.h>

            输入一个字符，判断是否是元音
int main()
{
    char arr1[] = "AaEeIiOoUu";
    char c1 = 0;
    //在%c的后边发给一个'\n'，其实在输入时候就会消化掉这个\n字符
   //不会为下次留下空白字符的隐患
     //在%c的前面写一个空格会消化掉前面所有的空白字符，然后读取一个字符
    while (~scanf("%c\n", &c1))
    {
        int i = 0;
        for (i = 0; i < 10; ++i)
        {
            if (c1 == arr1[i])
            {
                printf("Vowel\n");
                break;
            }
        }
        if (i == 10)
            printf("Consonant\n");
    }
    return 0;
}


            输入一组数，输出最大的五个
#include<stdio.h>
int cmp_int(const void* e1, const void* e2)
{
    //降序排列
    return *(int*)e2 - *(int*)e1;
}

int main()
{
    int n = 0;
    int ar[40] = { 0 };
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &ar[i]);
    }
    qsort(ar, n, 4, cmp_int);
    for (i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}



输入字母，转换大小写，
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            printf("%c\n", toupper(ch));
        }
        else
        {
            printf("%c\n", tolower(ch));
        }
        getchar();
    }
    return 0;
}


判断是不是字母                  //  用getchar输入，要清理 '\n'
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        //判断字母
        //if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        if (isalpha(ch))
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
        //清理掉\n
        getchar();
    }
    return 0;
}



输入字符，和一个字符串比较，字符多的获胜，
int main()
{
    char arr[100] = { 0 };
    gets(arr);
    int i = 0;
    int flag = 0;
    while (arr[i] != '0')
    {
        if (arr[i] == 'A')
        {
            flag++;
        }
        else if (arr[i] == 'B')
        {
            flag--;
        }
        i++;
    }
    if (flag > 0)
        printf("A");
    else if (flag < 0)
        printf("B");
    else
        printf("E");
    return 0;
}