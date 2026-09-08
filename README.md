# PBL2 - Hệ thống đặt vé xem phim

Đây là đồ án **PBL2 – Đồ án cơ sở lập trình**, với đề tài xây dựng một ứng dụng đặt vé xem phim tại rạp.

Hệ thống được xây dựng bằng **C++**, hướng đến việc áp dụng các kiến thức về **Lập trình hướng đối tượng (OOP)**, **Cấu trúc dữ liệu**, **Cơ sở dữ liệu** và **thiết kế giao diện đồ họa**.

Dữ liệu của hệ thống được lưu trữ bằng **file text**, không sử dụng SQL Server hoặc hệ quản trị cơ sở dữ liệu.

---

## 1. Thông tin đồ án

* **Tên đề tài:** Hệ thống đặt vé xem phim
* **Môn học:** PBL2 – Đồ án cơ sở lập trình
* **Ngôn ngữ:** C++
* **Giao diện:** Giao diện đồ họa (GUI)
* **Lưu trữ dữ liệu:** File Text
* **Mô hình lập trình:** Lập trình hướng đối tượng (OOP)
* **Cấu trúc dữ liệu:** C++ STL và các cấu trúc dữ liệu phù hợp với từng chức năng

> Công nghệ/framework sử dụng cho phần giao diện sẽ được nhóm xác định và thống nhất trong quá trình phát triển.

---

## 2. Các vai trò người dùng

Hệ thống gồm 3 nhóm người dùng chính:

### Khách hàng (Customer)

Khách hàng có thể:

* Đăng ký tài khoản
* Đăng nhập / Đăng xuất
* Xem danh sách phim
* Tìm kiếm phim
* Xem thông tin chi tiết của phim
* Xem các suất chiếu
* Xem tình trạng ghế
* Chọn ghế
* Đặt vé
* Xem lịch sử đặt vé
* Hủy vé theo quy định của hệ thống

### Người thu ngân (Cashier)

Thu ngân có thể:

* Đăng nhập vào hệ thống
* Tra cứu phim và suất chiếu
* Tra cứu thông tin khách hàng
* Tạo vé tại quầy cho khách hàng
* Chọn ghế cho khách hàng
* Xác nhận thanh toán
* Xuất / in vé
* Tra cứu thông tin vé
* Hủy hoặc xử lý vé theo quyền hạn
* Xem lịch sử giao dịch

### Người quản lý (Manager)

Người quản lý có quyền quản lý và theo dõi hoạt động của hệ thống:

* Đăng nhập
* Quản lý phim

  * Thêm phim
  * Sửa thông tin phim
  * Xóa phim
  * Tìm kiếm phim
* Quản lý phòng chiếu
* Quản lý ghế
* Quản lý suất chiếu
* Quản lý tài khoản nhân viên
* Quản lý vé và giao dịch
* Xem thống kê
* Xem doanh thu

---

## 3. Các chức năng chính

Hệ thống dự kiến cung cấp các chức năng:

* Quản lý tài khoản và phân quyền
* Quản lý phim
* Quản lý phòng chiếu
* Quản lý ghế
* Quản lý suất chiếu
* Chọn ghế
* Đặt vé
* Quản lý vé
* Tra cứu lịch sử giao dịch
* Thống kê doanh thu

Luồng đặt vé cơ bản:

```text
Chọn phim
    ↓
Chọn suất chiếu
    ↓
Xem sơ đồ ghế
    ↓
Chọn ghế
    ↓
Xác nhận thông tin
    ↓
Thanh toán
    ↓
Tạo vé
```

---

## 4. Kiến trúc dự kiến

Nhóm dự kiến tổ chức chương trình theo các tầng nhằm tách biệt giao diện, xử lý nghiệp vụ và lưu trữ dữ liệu:

```text
                 GUI
                  │
                  ▼
        Business Logic / Service
                  │
                  ▼
        Model + Data Structures
                  │
                  ▼
          Repository / File
                  │
                  ▼
             Text Files
```

Ví dụ:

```text
MovieWindow
     ↓
MovieService
     ↓
MovieRepository
     ↓
movies.txt
```

Việc phân tách các thành phần giúp chương trình dễ bảo trì, dễ mở rộng và thuận lợi cho việc thể hiện các nguyên tắc của lập trình hướng đối tượng.

---

## 5. Các lớp chính dự kiến

Hệ thống dự kiến bao gồm các lớp chính:

```text
User
├── Customer
├── Cashier
└── Manager

Movie
Room
Seat
Showtime
Booking
Ticket
Payment
```

Cấu trúc lớp có thể được điều chỉnh trong quá trình phân tích và phát triển hệ thống.

---

## 6. Các tính chất OOP được áp dụng

Đồ án hướng đến việc thể hiện các tính chất của lập trình hướng đối tượng:

* Đóng gói (Encapsulation)
* Kế thừa (Inheritance)
* Đa hình (Polymorphism)
* Trừu tượng hóa (Abstraction)
* Quan hệ giữa các đối tượng
* Thành phần hóa (Composition) khi phù hợp

Đặc biệt, ba vai trò `Customer`, `Cashier` và `Manager` dự kiến được xây dựng dựa trên lớp cơ sở `User`.

---

## 7. Cấu trúc dữ liệu

Nhóm dự kiến sử dụng các cấu trúc dữ liệu phù hợp với từng chức năng, bao gồm:

* Mảng
* `vector`
* `map`
* `set`
* `stack`
* `queue`

Ngoài ra, nhóm sẽ sử dụng các thuật toán cơ bản như:

* Tìm kiếm
* Sắp xếp
* Lọc dữ liệu
* Kiểm tra dữ liệu
* Duyệt dữ liệu

Các cấu trúc dữ liệu sẽ được lựa chọn dựa trên yêu cầu thực tế của từng chức năng, không sử dụng một cách gượng ép.

---

## 8. Thiết kế dữ liệu

Mặc dù hệ thống sử dụng file text để lưu trữ dữ liệu, nhóm vẫn áp dụng các kiến thức cơ bản của cơ sở dữ liệu trong quá trình thiết kế.

Các thực thể chính dự kiến gồm:

```text
User
Movie
Room
Seat
Showtime
Booking
Ticket
Payment
```

Các nội dung dự kiến thực hiện:

* Xác định thực thể và thuộc tính
* Xác định khóa chính
* Xác định khóa ngoại
* Xác định mối quan hệ giữa các thực thể
* Xác định lực lượng quan hệ
* Xây dựng sơ đồ ERD
* Chuẩn hóa dữ liệu
* Xây dựng các khung nhìn dữ liệu phù hợp

---

## 9. Lưu trữ dữ liệu

Dữ liệu của hệ thống được lưu trữ bằng các file text.

Cấu trúc dự kiến:

```text
data/
├── users.txt
├── movies.txt
├── rooms.txt
├── seats.txt
├── showtimes.txt
├── bookings.txt
└── tickets.txt
```

Mỗi file sẽ lưu trữ dữ liệu tương ứng với một nhóm đối tượng trong hệ thống.

Ví dụ:

```text
movies.txt

M001|Tên phim 1|Thể loại|120
M002|Tên phim 2|Thể loại|135
```

Cách tổ chức dữ liệu có thể được thay đổi trong quá trình phát triển.

---

## 10. Cấu trúc thư mục dự kiến

```text
PBL2-Cinema-Booking-System/
│
├── src/
│   └── Các file mã nguồn .cpp
│
├── include/
│   └── Các file khai báo .h
│
├── data/
│   └── Các file dữ liệu .txt
│
├── docs/
│   ├── requirements/
│   ├── database/
│   ├── design/
│   └── diagrams/
│
├── .gitignore
└── README.md
```

---

## 11. Tài liệu thiết kế

Thư mục `docs/` sẽ chứa các tài liệu phục vụ quá trình phân tích và xây dựng hệ thống:

```text
docs/
├── requirements/
│   └── Phân tích yêu cầu
│
├── database/
│   └── ERD và thiết kế dữ liệu
│
├── design/
│   └── Thiết kế lớp và kiến trúc
│
└── diagrams/
    └── Use Case, Class Diagram, Activity Diagram,...
```

---

## 12. Tiến độ hiện tại

### Giai đoạn phân tích và thiết kế

* [x] Xác định đề tài
* [x] Xác định các vai trò người dùng
* [x] Xác định các chức năng chính
* [x] Xác định các thực thể chính
* [x] Xây dựng cấu trúc repository ban đầu
* [ ] Hoàn thiện phân tích yêu cầu
* [ ] Hoàn thiện sơ đồ ERD
* [ ] Hoàn thiện Class Diagram
* [ ] Hoàn thiện Use Case Diagram
* [ ] Thiết kế kiến trúc chương trình
* [ ] Xây dựng các lớp C++
* [ ] Xây dựng cơ chế đọc / ghi file
* [ ] Xây dựng các chức năng nghiệp vụ
* [ ] Xây dựng giao diện đồ họa
* [ ] Kết nối giao diện với phần xử lý
* [ ] Kiểm thử và sửa lỗi
* [ ] Hoàn thiện tài liệu
* [ ] Hoàn thiện báo cáo và thuyết trình

---

## 13. Mục tiêu của đồ án

Thông qua đồ án, nhóm hướng đến việc:

* Áp dụng kiến thức C++ vào một bài toán thực tế
* Vận dụng lập trình hướng đối tượng
* Áp dụng các cấu trúc dữ liệu phù hợp
* Vận dụng kiến thức cơ sở dữ liệu vào thiết kế hệ thống
* Xây dựng giao diện người dùng
* Làm quen với việc tổ chức và quản lý một project phần mềm
* Rèn luyện kỹ năng làm việc nhóm và sử dụng Git/GitHub

---

## 14. Trạng thái dự án

> **Dự án đang trong giai đoạn phân tích yêu cầu và thiết kế hệ thống.**

Các chức năng và thiết kế hiện tại chỉ là định hướng ban đầu và có thể tiếp tục được điều chỉnh trong quá trình học tập và phát triển.

---

## 15. Thành viên

Đồ án được thực hiện bởi nhóm sinh viên trong khuôn khổ học phần **PBL2 – Đồ án cơ sở lập trình**.

Trần Kiêm Anh Tài - 25T_KHDL
Nguyễn Thị Tuyết Nhi - 25T_DT3

---

## 16. Mục đích sử dụng

Dự án được xây dựng với mục đích học tập và phục vụ cho học phần **PBL2 – Đồ án cơ sở lập trình**.
