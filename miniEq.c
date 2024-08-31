/*
Mục tiêu: Tạo ra hoán vị q sao cho số lượng cặp (i, j) mà tổng các dãy con tương ứng bằng nhau là nhỏ nhất.

Ý tưởng: Để tránh sự trùng lặp về tổng các dãy con, chương trình này tạo ra hoán vị q bằng cách thay thế mỗi 
phần tử a của hoán vị p với giá trị a + 1. Nếu a là phần tử lớn nhất (n), thì nó được thay thế bằng 1 để đảm 
bảo hoán vị q vẫn là một hoán vị hợp lệ của các số từ 1 đến n.
*/

#include <stdio.h>

int main()
{
    int t, n, a, i, j;
    scanf("%d", &t);        
    for (i = 1; i <= t; i++) // Lặp qua mỗi testcase
    {
        scanf("%d", &n);        /
        for (j = 0; j < n; j++) // Lặp qua từng phần tử của hoán vị p

        {
            scanf("%d", &a);  
            if (a == n)       // Nếu giá trị a là giá trị lớn nhất (n)
                printf("1 "); // In ra "1" vào vị trí tương ứng của hoán vị q
            else
                printf("%d ", a + 1); // Ngược lại, in ra giá trị a + 1 vào vị trí tương ứng của hoán vị q

            printf("\n"); 
           
        }
        return 0;
    }
