Cho một hoán vị p có độ dài n.
Tìm một hoán vị q có độ dài n sao cho số cặp (i, j) với 1 ≤ i ≤ j ≤ n mà p[i] + p[i+1] + ... + p[j] = q[i] + q[i+1] + ... + q[j] là nhỏ nhất.

Hoán vị của độ dài n là một mảng gồm n số nguyên phân biệt từ 1 đến n theo một thứ tự tùy ý. Ví dụ, [2, 3, 1, 5, 4] là một hoán vị, nhưng [1, 2, 2] không phải (số 2 xuất hiện hai lần trong mảng), và [1, 3, 4] cũng không phải (n = 3 nhưng có số 4 trong mảng).

Đầu vào:

Dòng đầu tiên chứa t (1 ≤ t ≤ 10^4) - số lượng trường hợp kiểm tra.

Dòng đầu tiên của mỗi trường hợp kiểm tra chứa n (1 ≤ n ≤ 2*10^5).

Dòng tiếp theo chứa n số nguyên p1, p2, ..., pn (1 ≤ pi ≤ n) - biểu thị hoán vị p có độ dài n.

Đảm bảo rằng tổng của n trên tất cả các trường hợp kiểm tra không vượt quá 2*10^5.

Đầu ra:

Đối với mỗi trường hợp kiểm tra, xuất ra một dòng chứa bất kỳ hoán vị nào có độ dài n (hoán vị q) sao cho q làm giảm số cặp ở trên.

Giải quyết:

Mục tiêu: Tạo ra hoán vị q sao cho số lượng cặp (i, j) mà tổng các dãy con tương ứng bằng nhau là nhỏ nhất.

Ý tưởng: Để tránh sự trùng lặp về tổng các dãy con, chương trình này tạo ra hoán vị q bằng cách thay thế mỗi phần tử a của hoán vị p với giá trị a + 1. Nếu a là phần tử lớn nhất (n), thì nó được thay thế bằng 1 để đảm bảo hoán vị q vẫn là một hoán vị hợp lệ của các số từ 1 đến n.
