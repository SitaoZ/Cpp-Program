## C++语言学习记录

### 1 初识C++

```cpp
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

```cpp
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

```cpp
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

```cpp
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

```cpp
bool isCodingFun = true;
bool isFishTasty = false;
cout << isCodingFun;  // 输出 1 (true)
cout << isFishTasty;  // 输出 0 (false)
```
- 布尔值输出的话，true是1，false是0

```cpp
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


```cpp
#include <string>   // 导入string库，非内建数据类型，需要导入
#include <iostream> // 导入iostream库
using namespace std;

int main(){
    string amino = "Met"
    cout << amino;
    return 0;
}
```
- 注意，字符串需要双引号

### 5 字符串 string
#### 字符串合并
```cpp
#include <string>
#include <iostream>
using namespace std;

int main() {
    string firstName = "Jhon ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName;
    return 0;
} 
```

#### 字符串追加
```cpp
#include <string>
#include <iostream>

using namespace std;

int main() {
    string firstName = "Jhon ";
    string lastName = "Doe";
    // string fullName = firstName.append(lastName);
    string fullName = firstName + lastName; // 等价于append
    cout << fullName;
    return 0;
}
```

- 注意，`+`用于字符串是追加，用于数字是求和

#### 字符串长度

```cpp
#include <string>
#include <iostream>

using namespace std;

int main() {
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the alphabet string is : " << alphabet.length();
    return 0;
}
```
#### 字符串索引

```cpp
#include <string>
#include <iostream>

using namespace std;
int main() {
    string myString = "Hello";
    cout << myString[0]; // 0-base
    myString[0] = 'J';
    cout << myString;
    string txt = "We are the so-called \"Vikings\" from the north.";
    cout << txt;
    return 0;
}
```
- `\`反斜杠转义字符
- 转义特殊字符`\'`, `\"`, `\\`

#### 输入字符串

```cpp
#include <string>
#include <iostream>

using namespace std;

int main() {
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName;
    cout << "Your name is: " << firstName;
    return 0;
}
```
- `cin`将空白(空白，tabs等)视为结束字符

```cpp
#include <string>
#include <iostream>

using namespace std;

int main() {
    string firstName;
    cout << "Type your first name: ";
    getline(cin, firstName);
    cout << "Your name is: " << firstName;
    return 0;
}
```
- getline 可以克服上面出现的问题，一次读取一行

#### 忽略Namespace

```cpp
#include <string>
#include <iostream>

int main() {
    std::string greeting = "Hello";
    std::cout << greeting;
    return 0;
}
```

### 6 操作符
```bash
算术操作符 Arithmetic operators
赋值操作符 Assignment operators
比较运算符 Comparison operators
逻辑运算符 Logical operators
位运算    Bitwise operators
```
- 算术操作符
```cpp
#include <string>
#include <iostream>

using namespace std;

int main() {
    int x = 10, y = 3;
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl;
    cout << ++x << endl;
    cout << --x << endl;
    cout << --x << endl;
    return 0;
}
```

- 赋值操作符
```cpp
#include <string>
#include <iostream>

using namespace std;

int main() {
    int a = 10; // =赋值
    int b = 10;
    b += 10;    // += 加且赋值
    int c = 10;
    c -= 10;    // -= 减号且赋值
    int d = 10;
    d *= 3;     // *= 乘且赋值
    int e = 10;
    e /= 3;     // /= 除且赋值
    int f = 10;
    f %= 3;     // %= 求模且赋值
    int g = 10;
    g <<=2;     // 左移且赋值
    int h = 10;
    h >>= 2;    // 右移且赋值
    int i = 10;
    i &=2;      // 按位与且赋值
    int j = 10;
    j |=2;      // 按位或且赋值
    int k = 10;
    k ^=2;      // 按位异或且赋值
    cout << "= 赋值: "<< a << endl;
    cout << "+= 赋值: "<< b << endl;
    cout << "-= 赋值: "<< c << endl;
    cout << "*= 赋值: "<< d << endl;
    cout << "/= 赋值: "<< e << endl;
    cout << "%= 赋值: "<< f << endl;
    cout << "<<= 赋值: "<< g << endl;
    cout << ">>= 赋值: "<< h << endl;
    cout << "&= 赋值: "<< i << endl;
    cout << "|= 赋值: "<< j << endl;
    cout << "^= 赋值: "<< k << endl;
    return 0;
    
}
```
[cpp运算符](https://www.runoob.com/cplusplus/cpp-operators.html)

- 比较操作符
  用于比较两个值或变量，比较返回的是`0`和`1`，在cpp中true(1)、false(0)。
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 3;
    cout << (x == y) << endl;  // 等于 0
    cout << (x != y) << endl;  // 不等于 1
    cout << (x > y) << endl;   // 大于 1
    cout << (x < y) << endl;   // 小于 0
    cout << (x >= y) << endl;  // 大于且等于 1
    cout << (x <= y) << endl;  // 小于且等于 0
    return 0; 

}
```

- 逻辑操作符
  逻辑和`&&` 或`||` 非 `!`

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 3;
    cout << (x > 3 && y < 10) << endl;     // 逻辑与， 返回1
    cout << (x > 3 || x < 4) << endl;      // 逻辑或， 返回1
    cout << (!(x > 3 && x < 10)) << endl;  // 逻辑非，返回0
    return 0;

}
```

### 7 数学运算
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << max(5, 10) << endl;
    cout << min(5, 10) << endl;
    return 0;
}
```
其他的数学函数，需要导入头文件cmath。cmath含有一些列函数，包括

函数|功能
-|:-:|
abs(x)|绝对值
acos(x)|反余弦
asin(x)|反正弦
atan(x)|反正切
cbrt(x)|立方根
ceil(x)|大于或等于x的最大的整数(向上取整)
cos(x)|余弦
cosh(x)|双区余弦
exp(x)|指数
expm1(x)|指数-1
fabs(x)|浮点数的绝对值
fdim(x, y)|xy的差异
floor(x)|小于或等于x最大的整数(向下取整)
pow(x, y)|x的y次幂
sin(x)|正弦
tan(x)|正切




```cpp
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    cout << sqrt(64) << endl;
    cout << round(2.6) << endl;
    cout << log(2) << endl;
    return 0;
}

```
