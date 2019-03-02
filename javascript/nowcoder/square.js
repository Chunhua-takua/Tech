/*
题目描述
为数组 arr 中的每个元素求二次方。不要直接修改数组 arr，结果返回新的数组
示例1
输入
复制
[1, 2, 3, 4]
输出
复制
[1, 4, 9
*/
function square(arr) {
	var newarr = new Array();
	for (var i = 0; i < arr.length; i++)
		newarr.push(arr[i] * arr[i]);
	
	return newarr;
}

function square(arr) {
	return arr.map(function(e) {
		return e * e;
	});
}