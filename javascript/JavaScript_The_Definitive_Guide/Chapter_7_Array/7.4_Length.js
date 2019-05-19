[].length // 0
['a', 'b', 'c'].length // 3

// length可以赋值，相当于截取
a = [1, 2, 3, 4, 5];
a.length = 2; // a为[1, 2]
a.length = 5; // [1, 2,,,,]
a.length = 0; // 删除所有元素，[]

// 可以使length可读，不可修改
a = [1, 2, 3];
Object.defineProperty(a, 'length', {writable: false});
