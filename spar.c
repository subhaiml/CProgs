#include <stdio.h>
int main() {
    int n, m;
    printf("Enter rows: ");
    scanf("%d", &n);
    printf("Enter cols: ");
    scanf("%d", &m);
    int a[n][m];
    int i, j;

    printf("Enter Elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
int z=0;
int nz=0;
    printf("Original Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
    if(a[i][j]==0)
    {
    z++;
    }
    else
    {
    nz++;
  }
  }
  }
  if(z>nz){
    printf("Sparse Matrix");
  }
  else{
    printf("Not Sparse Matrix");
  }
  return 0;
}
