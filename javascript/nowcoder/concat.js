/*
题目描述
合并数组 arr1 和数组 arr2。不要直接修改数组 arr，结果返回新的数组
示例1
输入
复制
[1, 2, 3, 4], ['a', 'b', 'c', 1]
输出
复制
[1, 2, 3, 4, 'a', 'b', 'c', 1]
*/
function concat(arr1, arr2) {
	var newarr = new Array();
	newarr = arr1.slice(0);
	debugger;
	for (var i = 0; i < arr2.length; i++)
		newarr.splice(newarr.length, 0, arr2[i]);
	
	return newarr;
}