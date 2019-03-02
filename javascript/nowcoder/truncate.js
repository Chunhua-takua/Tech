function truncate(arr) {
	var newarr = new Array();
	newarr = arr.slice(0);
	newarr.pop();
	return newarr;
}