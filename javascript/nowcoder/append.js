function append(arr, item) {
	var arr1 = new Array();
	for (var i = 0; i < arr.length; i++)
		arr1.push(arr[i]);
	
	arr1.push(item);
	return arr1;
}

function append(arr, item) {
	var arr1 = new Array();
	arr1 = arr.slice(0);
	arr1.push(item);
	return arr1;
}