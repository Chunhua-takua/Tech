// METHOD 1
// 使用数组直接量
var empty = []; // With no element
var primes = [2, 3, 5, 7, 11]; // Having five elements
var misc = [1.1, true, "a", ]; // Element of different types

// 数组中可以使用表达式
var base = 1024;
var table = [base, base + 1, base + 2, base + 3];

// 如果省略数组直接量中的某个元素，它将被赋值为undefined
var count = [1, , 3]


// METHOD 2
// 使用构造函数

// 调用时没有参数
var a = new Array();

// 调用时指定长度
var a = new Array(10);

// 调用时显示指定元素内容
var a = new Array(5, 4, 3, 2, 1, "testing, testing");
