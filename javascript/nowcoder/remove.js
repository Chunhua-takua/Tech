/*
* 题目描述
* 移除数组 arr 中的所有值与 item 相等的元素。不要直接修改数组 arr，结果返回新的数组
* 示例1
* 输入
* 
* [1, 2, 3, 4, 2], 2
* 输出
* 
* [1, 3, 4]
*/
function remove(arr, item) {
	var arr1 = new Array();
	for (var i = 0; i < arr.length; i++)
		if (item != arr[i])
			arr1.push(arr[i]);
	return arr1;	
}