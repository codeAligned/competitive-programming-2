// author: Rodrigo Alves
// judge: URI
// problem: Odd Numbers
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1067
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) printf("%d\n", i);
  }

  return 0;
}
