# C++语言学习记录
## 第一章: 基础知识点
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

### 8 if 条件控制
c++中使用`if`, `else`和`else if`来处理条件判断

```cpp
#include <iostream>
using namespace std;

int main() {
    int time = 22;
    if (time < 10){
        cout << "Good morning.";
    } else if (time < 20){
        cout << "Goof day.";
    }else{
        cout << "Good evening.";
    }
    return 0;
}
```

- 三元表达式
```cpp
#include <iostream>
using namespace std;

int main() {
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
}
```
### 9 switch 条件控制
switch 控制中使用 的关键词有`switch`, `case`, `default`。

```cpp
#include <iostream>
using namespace std;

int main() {
int day = 4;
   switch (day){
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Looking forward to the Weekend";
   }
  return 0;
}
```

### 10 while

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5){
        cout << i << "\n";
        i++;
    }
    return 0;
}
```
- while必须先条件判断，满足才执行，最少执行0ci
- do/while最少执行一次
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);
    return 0;
}
```
### 11 for 循环
```bash
for(statement 1; statement 2; statement 3){
    // code block 
}
# 语法和awk中for循环的语法一致
# statement 1:在代码块之前执行
# statement 2:执行代码块的条件
# statement 3:在代码块执行完成后执行
```

```cpp
#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 5; i++){
       cout << i << "\n";
    }
    return 0;
}
```

- 嵌套循环
```cpp
#include <iostream>
using namespace std;

int main() {
    // 外层循环
    for(int i = 1; i <= 2; ++i){
        cout << "Outer: " << i << "\n";
        // 内层循环
        for(int j = 1; j <= 3; ++j){
            cout << "Inner: " << j << "\n";
        };
    };
    return 0;
}
```

- foreach 循环
```bash
# 语法
for (type variableName : arrayName){
    // code block 
}
```
```cpp
#include <iostream>
using namespace std;

int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50}; // 申明一个数组，含有5个元素
    for (int i : myNumbers){
        cout << i << "\n";
    }
    return 0;
}
```

### 12 break/continue

- break跳出循环

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++){
        if (i == 4){
            break;
        }
    cout << i << "\n"; // 输出0 1 2 3 
    }
}
```
- continue跳出当前循环
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++){
        if (i == 4){
            continue;
        }
    cout << i << "\n"; // 输出0 1 2 3 5 6 7 8 9
    }
}
```

- break/continue in while

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 10){
        cout << i << "\n";
        i++;
        if (i == 4){
            break;
        } 
    }
    return 0;
}

```
```cpp
#include <iostream>
using namespace std;

int main(){
    int i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        cout << i << "\n";
        i++;
    }
}
```

### 13 数组

数组用于在一个变量中储存多个值。申明数组之前，需要指定变量的类型、变量名且后面接方括号`[]`, 同时`[n]`需要指定元素的个数。
数组的元素类型必须一致。
```cpp
string nucleotides[4];
string nucleotides[4] = {"A", "T", "C", "G"};
int week[7] = {1, 2, 3, 4, 5, 6, 7}; 
```
- 数组索引
```cpp
string nucleotides[4] = {"A", "T", "C", "G"};
cout << nucleotides[0]; // "A"
```
- 改变数组元素
```cpp
string nucleotides[4] = {"A", "T", "C", "G"};
nucleotides[1] = "U"
cout << nucleotides[1]; // "U"
```
- 循环数组
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string bases[4] = {"A", "T", "C", "G"};
    for (int i = 0; i < 4; i++){
        cout << i << " = " << bases[i] << "\n";
    }
    return 0;
}
```

- foreach
```cpp
#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << "\n";
    }
    return 0;
}

```
- 忽略数组大小
在c++中也可以不指定数组大小，编译器会自己识别
```cpp
string bases[] = {"A", "T", "C", "G"};
```
- 省略声明中的元素
```cpp
#include <iostream>
#include <string>
using namespace std;

int main(){
    string bases[4];
    bases[0] = "A";
    bases[1] = "T";
    bases[2] = "C";
    bases[3] = "G";
    for (int i = 0; i < 4; i++){
        cout << i << " = " << bases[i] << "\n";
    }
    return 0;
}

```
- 数组大小
```cpp
#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers);
    return 0;
}
```
返回值是`20`，是数组所占存储的大小，一个`int`是`4 bytes`, `5`个元素占`20 bytes`。

```cpp
#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength;
    return 0;
}
```

```cpp
#include <iostream>
using namespace std;
int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
        cout << myNumbers[i] << "\n";
    }
    return 0;
}
```

- 多维数组
multi-dimensional arrays 数组的元素还是一个数组。

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    cout << letters[0][0] << "\n";
    letters[0][0] = "Z";
    cout << letters[0][0] << "\n";
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            cout << letters[i][j] << "\n";
        }
    }
    return 0;
}

```

### 14 结构 structures(struct)
结构(struct)允许将不同类型且有关系的变量放在一起，每个变量都是结构的一个成员。
和数组不同，struct可以包含多种数据类型。创建结构时，使用关键字`struct`。
```bash
struct {            // structue 声明
   int Num;         // 成员， 整型
   string myString; // 成员，字符串
} muStructure; // 结构变量
```
- 使用结构成员采用`.`语法
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    struct {
        int myNum;
        string myString;
    } myStructure;
    myStructure.myNum = 1;
    myStructure.myString = "ATCG";
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";
    return 0;
}
```
- 多结构变量逗号分隔`,`

```cpp
struct{
    int myNum;
    string myString;
} myStruct1, myStruct2, myStruct3; // 多个结构变量名，使用逗号分隔
```

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    string brand;
    string model;
    int year;
  } myCar1, myCar2; // 使用多好分隔变量名

  // 放入数据到第一个结构中
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // 放入数据到第二个结构中
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;

  // 打印结构成员
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
  return 0;
}
```

- Named struct 命名结构
变量名放置在`struct`右边，即可创建。
```cpp
#include <iostream>
#include <string>

using namespace std;

struct amino {
    string abbr;
    string fullName;
    float isoelectric;
};

int main() {
    // 第一个氨基酸
    amino firstAmino;
    firstAmino.abbr = "Met";
    firstAmino.fullName = "Methionine";
    firstAmino.isoelectric = 5.74;

    // 第二个氨基酸
    amino secondAmino;
    secondAmino.abbr = "Ala";
    secondAmino.fullName = "Alanine";
    secondAmino.isoelectric = 6.11;

    //打印氨基酸
    cout << firstAmino.abbr << " " << firstAmino.fullName << " " << firstAmino.isoelectric << "\n";
    cout << secondAmino.abbr << " " << secondAmino.fullName << " " << secondAmino.isoelectric << "\n";
    return 0;
}
```
### 15 References 引用
使用`&`符号创建引用。

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";
  return 0;
}
```
`&`符号也可以用于c++变量的物理内存地址查询, 内存地址是十六进制 hexadecimal。

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";
    cout << &food;
    return 0;
}
```

### 16 Pointers 指针
指针是一个变量，采用存储内存地址作为指针的值。
```bash
# 推荐使用这种方式创建
string* mystring;
```
- 创建指针
使用`&`创建指针。
 
- 解引用 dereference
使用`*`解引用。

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;  // 创建指针
    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";  // 打印指针
    cout << *ptr << "\n"; // 打印指针对应的值
    return 0;
}
```
- 修改指针的值
```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string food = "Pizza";
    string* ptr= &food;    // 创建指针
    cout << food << "\n";  // 打印变量
    cout << &food << "\n"; // 打印变量的内存地址
    cout << *ptr << "\n";  // 指针解析
    *ptr = "Hamburger";    // 改变指针的值
    cout << *ptr << "\n";   // 打印新指针的值
    cout << food << "\n";   //打印food变量的新值
    return 0;

}
```

## 第二章: 函数

- 函数是用于特定计算的代码块
- 函数为的是代码复用
- 传如参数即可调用
### 1 创建函数
```bash
# 语法
void myFunction() {
    // code block 
}
# myFunction() 函数名
# void 表示该函数没有返回值
```

```cpp
#include <iostream>
using namespace std;

void myFunction(){
    cout << "I just go executed!";
}

int main() {
    myFunction(); // 调用函数
    return 0;
}
```
- 注意，函数可以多次调用
### 2 函数参数
```bash
# 语法
void functionName(parameter1, parameter2, parameter3){
    // code block
}
```

```cpp
#include <iostream>
#include <string>

using namespace std;

void myFunction(string fname){
    cout << fname << " Refsnes\n";
}

int main() {
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    return 0;
}
```
### 3 默认参数
默认参数在函数定义是写在`()`内。
```cpp
#include <iostream>
using namespace std;

void myFunction(string country = "Norway"){
   cout << country << "\n";
}

int main() {
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("China");
    return 0;
}
```

### 4 多个参数
```cpp
#include <iostream>
using namespace std;

void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

```

### 5 返回值
先前使用的函数都是`void`关键字定义的，均没有返回值。如果要想函数有返回值，需要是使用相应的数据类型作为关键字。

```cpp
#include <iostream>
using namespace std;

int addFive(int x){
    return x + 5;
}

int sumTwoValue(int x, int y){
    return x + y;
}

int main() {
    cout << addFive(3) << "\n";
    cout << sumTwoValue(10,20) << "\n";
    int sum = sumTwoValue(30,40);
    cout << sum << "\n";
    return 0;
}
```
### 6 传递引用

函数的参数是引用

```cpp
#include <iostream>
using namespace std;

// 交换两个变量的内存地址
void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << " "<< secondNum << "\n";

    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum << " " << secondNum << "\n";

    return 0;
}

```

### 7 传递数组
函数的参数为数组。
```cpp
#include <iostream>  
using namespace std;  

void myFunction(int myNumbers[5]) {
    for (int i = 0; i < 5; i++) {  
      cout << myNumbers[i] << "\n";    
    } 
}

int main() {  
    int myNumbers[5] = {10, 20, 30, 40, 50};  
    myFunction(myNumbers);
    return 0;
}  
```
### 8 函数重载 overloading
多个不同的函数可以使用相同的函数名，但是参数不同。避免定义很多
```bash
int myFunction(int x, int y)
float myFunction(float x, float y)
double myFunction(double x, double y)
```

```cpp
#include <iostream>
using namespace std;

int plusFunc(int x, int y){
    return x + y;
}

double plusFunc(double x, double y){
    return x + y;
}

int main() {
    int myNum1 = plusFunc(3, 5);
    double myNum2 = plusFunc(3.3, 5.5);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << "\n";
    return 0;
}

```
### 9 函数递归
函数调用自身就是递归。递归能够将复杂的问题简单化。

```cpp
#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}
```

## 第三章：类

### 面对对象
类就是面向对象编程(Object-Oriented Programming)。
面向对象编程的特点。
- OOP 速度快，更容易执行
- OOP 程序结构更加清楚
- OOP 创建重复使用的模块，节约开发时间

```cpp
class MyClass {          // 类
    public:              // 限定访问属性的关键字
        int myNum;       // 属性
        string myString; // 属性
};                       // 分号结束
```

```cpp
#include <iostream>
#include <string>

using namespace std;

class MyClass {
    public:
        int myNum;
        string myString;
};

int main() {
    MyClass myObj; // 创建一个MyClass对象
    // 获取属性，赋值
    myObj.myNum = 15;
    myObj.myString = "Some text";
    // 打印属性
    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";
    return 0;
}
```
#### 对象的方法
属于类的函数成为方法。
- 有两种定义方式
  - 类内部定义
  - 类外部定义

```cpp
#include <iostream>
using namespace std;

class MyClass {         // 类
  public:               // 属性访问
    void myMethod() {   // 方法，类内部定义
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // 创建类
  myObj.myMethod();  // 调用方法
  return 0;
}

```

```cpp
#include <iostream>
#include <string>
using namespace std;

// 创建类，但是不写方法的代码块
class MyClass {
    public:
        void myMethod();
};
// 类外部创建方法
void MyClass::myMethod(){
   cout << "Hello World!";
}

int main() {
    MyClass myObj;    // 创建类
    myObj.myMethod(); // 调用函数方法
    return 0;
}
```

#### 构造函数
类的构造函数是特殊的函数，每次创建类的新对象时执行。
构造函数的名称和类的名称相同，且不会返回任何类型，

```cpp
#include <iostream>
#include <string>
using namespace std;

class MyClass {                     // 创建类
    public:                         // 访问限定符
        MyClass(){                  // 构造函数
            cout << "Hello World!";
        }
};

int main() {
    MyClass myObj; // 创建该类时，会自动执行构造函数
    return 0;
}
```

-构造函数传入参数




