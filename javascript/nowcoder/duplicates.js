/*
题目描述
找出数组 arr 中重复出现过的元素
示例1
输入
复制
[1, 2, 4, 4, 3, 3, 1, 5, 3]
输出
复制
[1, 3, 4]
*/
function duplicates(arr) {
	var arr1 = new Array();
	var arr2 = new Array();
	for (var i = 0; i < arr.length; i++) {
		if (arr1.indexOf(arr[i]) > -1 && arr2.indexOf(arr[i]) == -1)
			arr2.push(arr[i]);
		else
			arr1.push(arr[i]);
	}
	
	arr2.sort();
	return arr2;
}