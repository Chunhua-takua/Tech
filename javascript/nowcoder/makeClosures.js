function makeClosures(arr, fn) {
	var result = new Array();
	arr.forEach(
		function(e) {
			result.push(
				function(num) {
					return function() { return fn(num); }
					//return fn(num); }
				}(e)
			);
		}
	);
	return result;
}