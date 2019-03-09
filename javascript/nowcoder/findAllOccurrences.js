function findAllOccurrences(arr, target) {
	var newarr = new Array();
	for (var i = 0; i < arr.length; i++)
		if (target == arr[i])
			newarr.push(i);
		
	return newarr;
}