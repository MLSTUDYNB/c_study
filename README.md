# c/c++学习笔记

# c



# c++

## 命名空间

我们在写c++程序的时候，开始的时候都写这句话`using namespace std;`，这个话的意思就是把标准库里面的东西展开。

还有，我们在给变量或者是函数起名的时候，如果出现了重名的情况，编译器是不能分辨出来的，如果把它们放在不同的命名空间内就不会出现这种情况了。

这样对空间进行命名：`namespace + 名字`，使用的时候`名字::成员名`

 ```c++
 namespace ML
 {
 	int a = 10;
 }
 int main()
 {
 	int a = 1;
 	cout << a << endl;
 	cout << ML::a;
 	return 0;
 }
 ```

如果嫌麻烦就直接用`using`展开命名空间，或者展开常用的成员

命名空间也可以嵌套。

## 缺省参数

所谓的缺省参数就是在函数声明或者定义的时候，给参数一个值，(注意：声明和定义不能同时缺省参数)

```c++
void f(int a, int b);
//void f(int a = 10, int b = 20)错误
//void f(int a, int b = 20)错误
//void f(int a , int b = 20)错误
void f(int a = 10, int b = 20)
{
	printf("a=%d,b=%d", a, b);
}
```

缺省参数分为：全缺省，半缺省，不缺省。

对于半缺省：

从右往左进行缺省。不能从左往右，不能跳跃缺省。

对于缺省参数传参时，从左往右进行传参。

## 函数重载

函数重载：同一作用域下的同名函数。函数名相同，函数参数的类型不同，对函数返回值没有要求。

```c++
int f(int a, int b)
{
	cout << a <<' ' << b << endl;
	return 0;
}
int f(int a, char b)
{
	cout << a <<' ' << b << endl;
	return 0;
}
void f(char a, int b)
{
	cout << a << ' ' << b << endl;
}
int main()
{
	f(1, 1);
	f(1, 'a');
	f('a', 1);
	return 0;
}
```

![image-20220710104224127](C:\Users\ML\AppData\Roaming\Typora\typora-user-images\image-20220710104224127.png)

为什么c++支持函数重载，而c不支持函数重载呢？





## 引用

引用就是取别名。在语法意义上就是同一块空间。

引用的使用：`类型+&+新名字`

```c++
	int a = 10;
	int& b = a;
	cout << b << endl;
	cout << a << endl;

```

![image-20220710105335463](C:\Users\ML\AppData\Roaming\Typora\typora-user-images\image-20220710105335463.png)

引用做返回值时，要注意不能返回局部变量，否则会造成越界访问。

```c++
int& f(int a)
{
	a = 20;
	return a;
}
int main()
{
	int& ret=f(10);
	cout << ret << endl;
	cout << ret << endl;

	return 0;
}
```

![image-20220710110437855](C:\Users\ML\AppData\Roaming\Typora\typora-user-images\image-20220710110437855.png)

![image-20220710110506089](C:\Users\ML\AppData\Roaming\Typora\typora-user-images\image-20220710110506089.png)

那里的a为局部变量，当函数调用完成的时候，局部变量被销毁，对此时的空间在进行访问就是非法的。



```c++
	int a = 10;
	const int& pa = a;
	double& pa1 = a;
	const double& pa2 = a;

```



引用与指针：

1.引用需要初始化，指针不需要

2.引用一个实体之后就不能再引用其他的实体，指针可以指向相同类型的不同实体。

3.有空指针，没有空引用

4.引用比指针较为安全。
