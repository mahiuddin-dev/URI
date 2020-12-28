// #include <iostream>
// #include <stdio.h>
// #include<string.h>
// using namespace std;


// int main()
// {
//     long long int N, i;
//     scanf("%lld",&N);
//     long long int st[N], sh[N];
//     long long int s_t=0, s_s=0;
//     for(i=0; i<N; i++)
//     {
//         cin >> sh[i];
//         st[i]=0;
//     }
//     i=0;
//     while(1)
//     {

//        if(sh[i]%2==0 && i==0)
//         {
//             st[i]=1;
//             if(sh[i]>0)
//                 sh[i]--;
//             break;
//         	}
//         	else if(sh[i]%2==0){
//         		 st[i]=1;
//             if(sh[i]>0)
//                 sh[i]--;
//             i--;
//         	}
//         else if(sh[i]%2==1 && i == N-1)
//         {
//             st[i]=1;
//             if(sh[i]>0)
//                 sh[i]--;
//             break;
//         	}
//        else if(sh[i]%2==1){
//         	 sh[i]--;
//             st[i]=1;
//             i++;
//         	}
//     }
//     for(i=0; i<N; i++)
//     {
//         s_s += sh[i];
//         s_t += st[i];
//     }
//     cout << s_t <<" "<< s_s <<endl;
//     return 0;
// }


// #include <bits/stdc++.h>


// using namespace std;

// int fazenda[1000005];
// int vis[1000005];

// long long int n,i,sum,ans,atacados;


// int main(){
//     ios_base :: sync_with_stdio(0); cin.tie(0);
    
//     while (cin >> n){
//         atacados = 0;
//          sum = 0;
//         for ( i = 0 ; i < n ; ++i){
//             cin >> fazenda[i];
//             sum += fazenda[i];
//             vis[i] = 0;
//         }
        
//          i = 0;
//          ans = 0;
//         while (i >= 0 && i < n){
//             if (!vis[i]) ++atacados;
//             vis[i] = 1;
//             if (fazenda[i] & 1)
//                 ++ans, --fazenda[i], ++i;
//             else{
//                 if (fazenda[i]) ++ans, --fazenda[i];
//                 --i;
//             }
//         }
        
//         cout << atacados << ' ' << sum - ans << 'n';
//     }
// }



// #include <stdio.h>
// int main(){
//     long long int N, i;
//     scanf("%lld", &N);
//     long long int star[N], sheep[N], sum_trak=0, sum_sheep=0;
//     for(i=0; i<N; i++){
//         scanf("%lld", &sheep[i]);
//         star[i]=0;
//     }
//     i=0;
//     while(1){
//         if(i==0 && sheep[i]%2==0){
//             star[i]=1;
//             if(sheep[i]>0)
//                 sheep[i]--;
//             break;
//         }
//         else if(i==N-1 && sheep[i]%2==1){
//             star[i]=1;
//             if(sheep[i]>0)
//                 sheep[i]--;
//             break;
//         }
//         else if(sheep[i]%2==1)
//         {
//             sheep[i]--;
//             star[i]=1;
//             i++;
//         }
//         else if(sheep[i]%2==0)
//         {
//             star[i]=1;
//             if(sheep[i]>0)
//                 sheep[i]--;
//             i--;
//         }


//     }
//     for(i=0; i<N; i++){
//         sum_sheep += sheep[i];
//         sum_trak += star[i];
//     }
//     printf("%lld %lld\n", sum_trak, sum_sheep);
//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>
int main(void) {
int N, i = 0, j = 0, contAtacou = 0;
scanf(&quot;%d&quot;, &N);
long long int X[N], soma = 0;
int *atacou = (int *) calloc(N, sizeof(int));
for(i = 0; i < N; i++)
scanf(&quot;%lld&quot;, &X[i]);
while(1) {
if((X[j] % 2) == 0) {
X[j]--;
j--;
atacou[j] = 1;
if(j == 0) {
break;
}
}else {
X[j]--;
j++;
atacou[j] = 1;
if(j == N) {
break;
}
}
}
for(i = 0; i < N; i++) {
soma += X[i];
if(atacou[i] == 1) {
contAtacou++;
}
}
printf(&quot;%d %lld\n&quot;, contAtacou, soma);
free(atacou);
return 0;