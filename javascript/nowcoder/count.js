/*
题目描述
统计数组 arr 中值等于 item 的元素出现的次数
示例1
输入
复制
[1, 2, 4, 4, 3, 4, 3], 4
输出
复制
3
*/
function count(arr, item) {
	var count = 0;
	for (var i = 0; i < arr.length; i++)
		if (item == arr[i])
			count++;
		
	return count;
}