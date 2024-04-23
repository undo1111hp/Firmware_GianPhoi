# Dự án: Hệ thống giàn phơi tự động

## Mục lục

1. [Tổng quan dự án](#tổng-quan-dự-án)
2. [Phân tích yêu cầu](#phân-tích-yêu-cầu)
3. [Thiết kế hệ thống](#thiết-kế-hệ-thống)
4. [Tài liệu các phiên bản](#tài-liệu-các-phiên-bản)

## Tổng quan dự án

Dự án này nhằm mục đích xây dựng một hệ thống giàn phơi quần áo tự động giúp tiết kiệm thời gian và công sức của người sử dụng. Hệ thống sẽ hoạt động dựa trên nguyên lý điều khiển động cơ giúp nâng hạ giàn phơi thông qua 1 bộ điều khiển và thiết bị điều khiển không dây.

### Thông tin dự án

- Tên dự án: Hệ thống giàn phơi tự động
- Phiên bản hiện tại: Concept 1.0
- Ngày bắt đầu: 15/04/2024
- Thời gian hoàn thiện: Dự kiến 06/05/2024 (3 tuần)

### Thành viên tham gia:
Tên  | Chuyên môn  | Contact
:----------:|:-------------:|:-----------:
Đàm Phi Hùng   | Project Manager | [Email](mailto:anh898820@gmail.com)
Phạm Quốc Việt | Hardware        | [Email](mailto:astralnuts123@gmail.com)
Trần Hồng Quân | Hardware        | 
Lương Sơn Tùng | Lead Firmware   | [Email](mailto:sontunghero36@gmail.com)
Lương Thế Vinh | Firmware        | [Email](mailto:everwellmax@gmail.com)

## Phân tích yêu cầu

Dự án giàn phơi tự động sẽ có các yêu cầu cụ thể như sau:
- Nhu cầu sử dụng cho gia đình 5 người
- 02 thanh phơi lên xuống độc lập
- Điều khiển được từ xa qua remote hoặc điều khiển qua switch
- Sử dụng 01 động cơ để nâng hạ giàn phơi
- Chi phí sản xuất không quá 900.000 VND

## Thiết kế hệ thống
(Hệ thống hiện tại dựa trên phiên bản mới nhất - Concept 1.0)

Hệ thống sẽ bao gồm các phần chính dựa trên yêu cầu:

### Hệ thống cơ khí

Hệ thống cơ khí sẽ bao gồm các phần sau:
- 02 thanh phơi
- 01 động cơ
- 01 bộ truyền động (củ quay, dây cáp)
- 01 bộ điều khiển

### Hệ thống điều khiển và phần mềm

Hệ thống điều khiển sẽ bao gồm các phần sau: (pending)
- 01 bộ điều khiển (Microcontroller - ESP32)
- 01 remote hoặc switch điều khiển 
- 01 bộ điều khiển động cơ (6 - 24V)
- 01 bộ nguồn 12V

## Tài liệu các phiên bản

### Concept 1.0

- [Bản vẽ thiết kế hệ thống](/documents/concept1.0/design.pdf)
- [README.md](/documents/concept1.0/README.md)
