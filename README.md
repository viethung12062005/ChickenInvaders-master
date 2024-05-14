# Chicken Invaders
# Mục lục
1. Hướng dẫn cài đặt và chạy game
2. Mô tả chung về trò chơi
3. Các chức năng của trò chơi
4. Các kĩ thuật lập trình được sử dụng
5. Hỗ trợ
6. Tham Khảo
# I, Hướng dẫn cài đặt và chạy game
B1: Tải project về

Cách 1: Trên Github, vào branch master, chọn Code => Download ZIP

Cách 2: Mở terminal tại thư mục muốn lưu project, sử dụng lệnh git init để khởi tạo Git, sau đó dùng lệnh git clone https://github.com/viethung12062005/ChickenInvaders-master.git để clone project về máy

B2: Chạy game
Tìm file Chicken Invaders3.exe và chạy file.
# II, Mô tả chung về trò chơi:
- Game arcade kinh điển, di chuyển chống lại đợt tấn công của các con gà ngoài hành tinh đang xâm chiếm Trái Đất.
- Người chơi điều khiển tàu vũ trụ, di chuyển sang trái và phải, tiêu diệt các con gà và Boss.
- Tàu vũ trụ có số lượng máu là 10, mỗi lần bị tiêu diệt sẽ bị trừ 1 máu. Tàu vũ trụ có thể bị tiêu diệt bởi trứng hoặc va chạm với các con gà và Boss.
- Tiêu diệt tất cả các con gà, người chơi sẽ gặp Boss cuối cùng.
# III, Các chức năng của trò chơi:
- Menu có phần hướng dẫn chơi và giới thiệu các loại đạn.
- Điều khiển tàu vũ trụ di chuyển sang trái, phải và bắn bằng các nút lần lượt A,D,Space.
- Các con gà sẽ thả trứng và di chuyển để tấn công tàu, khi va chạm với trứng hoặc các con gà tàu vũ trụ sẽ mất 1 mạng. Khi vẫn còn mạng người chơi bấm 'Enter' để hồi sinh và tiếp tục chơi. Trong quá trình chơi sẽ có các phần quà được thả ngẫu nhiên để đổi loại đạn và tăng số lượng đạn bắn ra mỗi lần.
- Khi tiêu diệt hết số gà thì người chơi sẽ gặp Boss. Boss có tốc độ nhanh và trứng to hơn.
- Người chơi chiến thắng khi tiêu diệt Boss.
# IV, Các kỹ thuật lập trình:
- Sử dụng thư viện đồ họa SDL
- Lập trình hướng đối tượng(OOP)
- Con trỏ, cấp phát động
- Chuẩn hóa vector
- Sử dụng các thuật toán cơ bản như thuật toán xử lý va chạm, animation,....
# V, Hỗ trợ:
- Sử dụng Photoshop để edit ảnh
# VI, Tham khảo:
- https://lazyfoo.net/tutorials/SDL/index.php#Getting%20an%20Image%20on%20the%20Screen
