#include<stdio.h>
#include<string.h>

            ����һ���ַ����ж��Ƿ���Ԫ��
int main()
{
    char arr1[] = "AaEeIiOoUu";
    char c1 = 0;
    //��%c�ĺ�߷���һ��'\n'����ʵ������ʱ��ͻ����������\n�ַ�
   //����Ϊ�´����¿հ��ַ�������
     //��%c��ǰ��дһ���ո��������ǰ�����еĿհ��ַ���Ȼ���ȡһ���ַ�
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


            ����һ����������������
#include<stdio.h>
int cmp_int(const void* e1, const void* e2)
{
    //��������
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



������ĸ��ת����Сд��
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


�ж��ǲ�����ĸ                  //  ��getchar���룬Ҫ���� '\n'
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        //�ж���ĸ
        //if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        if (isalpha(ch))
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
        //�����\n
        getchar();
    }
    return 0;
}



�����ַ�����һ���ַ����Ƚϣ��ַ���Ļ�ʤ��
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