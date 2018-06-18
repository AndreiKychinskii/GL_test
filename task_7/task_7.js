// Start

function getTotalDistance( numOfSensors, distance){
	var totalDistance = 0;

	for( var i = 1; i <= numOfSensors; i++ ){
		totalDistance += i * distance;
	}
	console.log("Total distance is " + totalDistance + " unit(s)");
	return totalDistance;
}

getTotalDistance( 5, 10 );
