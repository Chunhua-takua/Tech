/*
题目描述
在数组 arr 开头添加元素 item。不要直接修改数组 arr，结果返回新的数组
示例1
输入
复制
[1, 2, 3, 4], 10
输出
复制
[10, 1, 2, 3, 4]
*/
function prepend(arr, item) {
	var newarr = new Array();
	newarr = arr.slice(0);
	// 从位置0开始用item覆盖0个元素
	newarr.splice(0, 0, item);
	return newarr;
}