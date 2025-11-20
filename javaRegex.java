// import java.util.regex.*;     // Use pattern and matcher 

// public class mim {
//     public static void main(String[] args) {
//         String text = "Xin chào 2025!";
//         String regex = "\\d+"; // tìm số

//         Pattern pattern = Pattern.compile(regex);
//         Matcher matcher = pattern.matcher(text);

//         while (matcher.find()) {
//             System.out.println("find: " + matcher.group());
//         }
//     }
// }
// // Dùng khi cần xử lý phức tạp (dùng nhiều lần, thao tác với group, start/end, lặp lại find...).
//  // => find: 2025 

//  //Use Pattern.matches()
//  //Dùng khi cần validate dữ liệu (email, số điện thoại, password...).
//  import java.util.regex.Pattern;

// public class mim {
//     public static void main(String[] args) {
//         String email = "someone@tayjava.com";
//         String regex = "^[\\w.-]+@[\\w.-]+\\.[a-z]{2,6}$";

//         boolean isValid = Pattern.matches(regex, email);
//         System.out.println("Email hợp lệ? " + isValid);
//     }
// }

// // Email hợp lệ? true


// public class App {
//     public static void main(String[] args) {
//         String phone = "0901234567";
//         boolean isValid = phone.matches("\\d{10}"); // đúng 10 số
//         System.out.println("Số điện thoại hợp lệ? " + isValid);
//     }
// }

// // Khi check once again 

// //Có 6 cách viết và sử dụng Regex trong Java:

// // Pattern + Matcher → mạnh mẽ, linh hoạt.
// // Pattern.matches() → kiểm tra nhanh.
// // String.matches() → đơn giản, gọn.
// // String.split() → tách chuỗi.
// // String.replaceAll()/replaceFirst() → thay thế chuỗi.
// // Scanner với regex → đọc dữ liệu theo mẫu.
 

// // 👉 Với Java Regex, bạn có thể dễ dàng xử lý các tác vụ như:

// // Kiểm tra định dạng email, số điện thoại.
// // Tách chuỗi theo dấu phẩy, khoảng trắng.
// // Trích xuất thông tin từ văn bản.
// // Thay thế, làm sạch dữ liệu đầu vào.
