## C++语言学习记录

### 1 初识C++

```c++
#include <iostream>  // line1: 单行注释语法，使用两个正斜杆。头文件(header file library)，让我们使用输入和输出
using namespace std; // line2: 我们可以从标准文库中使用对象和变量
                     // line3: 空白行，增加代码可读性
// int main()函数
int main() {
  cout << "Hello World!"; // cout 对象，和插入操作符号连用，用于输出和输入，注意每个C++代码块都要以分号;结尾
  return 0;               // 函数结束
}                         // 代码结束符号
```
- 注释使用`//`或者`/* */`, 前者是单行注释，后者是多行注释
- 都要存在主函数main()
- 代码块使用分号;结尾
- 代码均在`{}`之间
  
### 2 变量声明
```bash
type variableName=value
```

```c++
#include <iostream>
using namespace std;
int main(){
    int myNum = 15;
    cout << myNum << endl;
    myNum = 20;              // 变量重新赋值
    cout << myNum << endl;
    int x = 5, y = 6, z = 7; // 同时申明多个变量
    cout << x+y+z << endl;
    int a, b, c;             //同时声明多个变量且赋值
    a = b = c = 10;
    const int minutesPerHour = 60;
    const float PI = 3.14;   // 常量，只能读，不能修改
    return 0;
}
```
- 注意，变量名要唯一
- 变量名最好描述性的，便于理解代码
- 变量名大小写敏感
- 变量名包含字符，数字，和下划线
- 变量名不能含有空白特殊字符等
- 保留字符不能用作变量名
