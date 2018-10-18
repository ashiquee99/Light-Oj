    #include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
    int main ()
    {

        ll T, A, B;
        scanf("%lld", &T);
        for(ll tc = 1; tc<=T; tc++)
        {
            scanf("%lld%lld", &A, &B);
            ll digsumA = (A+1)*((A+1)-1)/2;
            ll digsumB = (B+1)*((B+1)-1)/2;
            ll cnt = 0;
            if(digsumA % 3 == 0 && digsumB % 3 == 0 && A-B == 0)
            {
                printf("Case %lld: 1\n", tc);

            }
            else if(digsumA % 3 == 0 && digsumB % 3 == 0 && B-A == 1)
            {
                printf("Case %lld: 2\n", tc);
            }
            else
            {
                while(digsumA % 3 == 0)
                {
                    A++;
                    cnt++;
                    digsumA = (A+1)*((A+1)-1)/2;
                }
                while(digsumB % 3 == 0)
                {
                    B--;
                    cnt++;
                    digsumB = (B+1)*((B+1)-1)/2;
                }
                ll ans = abs(A-B)+1;
                ans/=3;
                ans++;
                ll pp = abs(A-B)+1;
                ans = pp - ans;
                printf("Case %lld: %lld\n", tc, ans+cnt);
            }

        }
        return 0;
    }

