#include<bits/stdc++.h>
using namespace std;

//Hàm chuyển chuỗi thành số nguyên
int strToInt(string s) {
    stringstream ss;
    ss << s;
    int n;
    ss >> n;
    return n;
}

int main() {
    string s;
    cin >> s;
    stack<char> st;    //tạo 1 stack để đẩy hết ký tự chuỗi s vào
    queue<char> q;     // queue để lưu trữ ký tự trong dấu [] và xử lý

    for (char c:s) {                        //duyệt từ đầu đến cuối các ký tự của string s
        if (c == ']') {                     // duyệt đến khi gặp ký tự ']' thì kiểm tra còn không thì đẩy ký tự vào stack st (1)
            while (st.top() != '[') {       
                q.push(st.top());           //kiểm tra đỉnh stack st nếu nó không phải là '[' thì đẩy đỉnh st vào queue q và loại bỏ nó ra khỏi stack
                st.pop();                   //lúc này trong hàng đợi q chỉ còn các ký tự trong một bộ ngoặc '[]'
            }
            st.pop();                       //loại bỏ ký tự '[' sau khi kiểm tra các phần tử trong '[]'

            string _s = "";                 // tạo 2 string để lưu trữ  xâu ký tự và số lần xâu đó có trong '[]'
            string _n = "";
            int n;

            while (!q.empty()) {                                        //vòng lặp while kiểm tra xâu ký tự trong queue
                if (q.front() >= '0' && q.front() <= '9') {
                    break;
                }

                _s = q.front() + _s;
                q.pop();
            }

            while (!q.empty()) {                                        // vòng lặp while kiểm tra số lần xâu ký tự trong queue
                _n = q.front() + _n;
                q.pop();
            }

            if (_n == "") {                           // nếu không có n thì n = 1
                n = 1;
            } else {
                n = strToInt(_n);
            }

            for (int i = 0; i < n; i++) {                  
                for(char j:_s)                  // đẩy n lần chuỗi s vào stack st.
                    st.push(j);
            }
        } else {
            st.push(c);         // (1) đẩy ký tự vào stack(1)
        }
    }

    string res = "";
    while (!st.empty ()) {        // tạo string = in ngược các giá trị trong stack, ta được kết quả.
        res = st.top() + res;
        st.pop();
    }

    cout << res;

    return 0;
}
