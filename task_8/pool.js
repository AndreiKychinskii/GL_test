// Start
var heights = [ 0, 1, 2, 1, 2, 3, 1, 0, 1, 2 ];

function getWaterVolume( input ){

	var B = new Array(), N = 0;
	var WaterVolume = 0;
	var iterration = 1;

	function getIndexes(value, arr){
		var indexes = new Array();
		for(var i = 0; i < arr.length; i++){
			if( arr[i] === value ){
				indexes.push(i);
			}
			}
			return indexes;
	}

	function makeMaxSmaller(arr, indexes, decrement){
		for(var i = 0; i < indexes.length; i++ ){
			arr[indexes[i]] -= decrement;
		}
	}

	while( Math.max.apply(null, input) > 0 ){
			B = getIndexes(Math.max.apply(null, input), input);
			N = B.length;

		if( N > 1 ){
			for(var i = 1; i < N; i++){
				WaterVolume += B[i] - B[i-1] - 1;
			}
			makeMaxSmaller(input, getIndexes(Math.max.apply(null, input), input), 1);
		}else if( N <= 1 ){
			makeMaxSmaller(input, getIndexes(Math.max.apply(null, input), input), 1);
		}

		}//while: end
		return WaterVolume;
}

getWaterVolume(heights);
