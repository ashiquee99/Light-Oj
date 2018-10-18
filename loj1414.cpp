#include <bits/stdc++.h>
using namespace std;
#define mx 1000000
int arr[mx], brr[mx];
int contobin(int n)
{
    int rem, cnt = 0;
    while(n>0)
    {
        rem = n % 2;
        arr[cnt] = rem;
        cnt++;
        n/=2;
    }
    return cnt;
}
int contodec(int n)
{
    int rem, cnt = 0;
    while(n>0)
    {
        rem = n%10;
        brr[cnt] = rem;
        n/=10;
        cnt++;

    }
    return cnt;
}
int main ()
{
    int T;
    scanf("%d", &T);
    for(int tc = 1; tc<=T; tc++)
    {
        bool flag = true;
        char ch;
        int A, B, C, D, a, b, c, d;
        scanf("%d%c%d%c%d%c%d", &A, &ch, &B, &ch, &C, &ch, &D);
        scanf("%d%c%d%c%d%c%d", &a, &ch, &b, &ch, &c, &ch, &d);
        int cntA = contobin(A);
        int cnta = contodec(a);
        if(cntA!=cnta)
        {
            flag = false;
        }
        else
        {
            int cnt = 0;
            for(int i = cntA-1; i>=0; i--)
            {
                if(arr[i] == brr[i])
                {
                    cnt++;
                }
            }
            if(cnt!=cntA)
            {
                flag = false;
            }
        }

        int cntB = contobin(B);
        int cntb = contodec(b);
        if(cntB!=cntb)
        {
            flag = false;
        }
        else
        {
            int cnt = 0;
            for(int i = cntB-1; i>=0; i--)
            {
                if(arr[i] == brr[i])
                {
                    cnt++;
                }
            }
            if(cnt!=cntB)
            {
                flag = false;
            }
        }
        int cntC = contobin(C);
        int cntc = contodec(c);
        if(cntC!=cntc)
        {
            flag = false;
        }
        else
        {
            int cnt = 0;
            for(int i = cntC-1; i>=0; i--)
            {
                if(arr[i] == brr[i])
                {
                    cnt++;
                }
            }
            if(cnt!=cntC)
            {
                flag = false;
            }
        }
        int cntD = contobin(D);
        int cntd = contodec(d);
        if(cntD!=cntd)
        {
            flag = false;
        }
        else
        {
            int cnt =  0;
            for(int i = cntD-1; i>=0; i--)
            {
                if(arr[i] == brr[i])
                {
                    cnt++;
                }
            }
            if(cnt!=cntD)
            {
                flag = false;
            }
        }
        if(flag)
        {
            printf("Case %d: Yes\n", tc);
        }
        else
        {
            printf("Case %d: No\n", tc);
        }

    }
    return 0;
}

