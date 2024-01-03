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
    int a, b, c;             // 同时声明多个变量且赋值
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

### 3 输入
C++用户输入前面使用`cout`打印。现在我们使用`cin`来获取用户输入。(读作：see-out, see-in)

```c
#include <iostream>
using namespace std;
int main(){
    int x;                             // 申明一个变量
    cout << "Type a number: ";         // 键入一个数字，按下enter
    cin >> x;                          // 获取用户的键盘输入
    cout << "Your number is: " << x;   // 展示输入的数字
    return 0;
}
```

### 4 数据结构

```c
int myNum = 5;             // 整型
float myFloatNum = 5.99;   // 浮点型
double myDoubleNum = 9.98; // 浮点型
char myLetter = 'D';       // 字符型
bool myBoolean = true;     // 布尔型
string myText = "Hello"    // 字符串
float f1 = 35e3            // 科学计数法，使用e表示10幂
double d1 = 12E4           // E也可以表示10的幂
```
- `float`和`double`的区别在于精度，float一般能到小数点后6或7位，double可以精确到小数点后15位，一般情况下使用`double`

```c
bool isCodingFun = true;
bool isFishTasty = false;
cout << isCodingFun;  // 输出 1 (true)
cout << isFishTasty;  // 输出 0 (false)
``
- 布尔值输出的话，true是1，false是0

```c
# include <iostream>
using namespace std;
int main (){
    char myGrade = 'B';
    cout << myGrade;
    char a = 65, b = 66, c = 67; // 会将整型转化成对应的ASCII字符
    cout << a;
    cout << b;
    cout << c;
    return 0;
}
```
[ASCII和整型对应表格](https://www.w3schools.com/charsets/ref_html_ascii.asp)
