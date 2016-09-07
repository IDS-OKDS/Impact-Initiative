<?php

error_reporting(E_ALL);
ini_set('display_errors', 1);


function readCSV($csvFile){
	$file_handle = fopen($csvFile, 'r');
	while (!feof($file_handle) ) {
		$line_of_text[] = fgetcsv($file_handle, 1024);
	}
	fclose($file_handle);
	return $line_of_text;
}


// Set path to CSV file
$csvFile = 'epd-grant-mapping.csv';

$mapped_project_data = readCSV($csvFile);

foreach($mapped_project_data as $row_id => $cols_arr){
	$pos = strpos($cols_arr[4], 'ES/');
	if ($pos !== false) {
		// to filter out ES/E021654/1 then RES-167-25-0251-A	
		$temp_arr = explode(' ', $cols_arr[4]);
		$grant_reference = $temp_arr[0];
		$grant_reference_arr[] = trim($grant_reference);
		
		//$grant_reference_arr[] = $cols_arr[4];
	}	
}


echo '<h2>CSV Grant reference array</h2>';
echo '<p>note: filtered out "ES/E021654/1 then RES-167-25-0251-A", just using ES/E021654/1</p>';
echo '<pre>';
print_r($grant_reference_arr);
echo '</pre>';

$projects_endpoint_query = 'f=pro.gr&s=100&q=';


foreach($grant_reference_arr as $grant_reference){
	$projects_endpoint_query .= '%22' . $grant_reference . '%22';
	if(end($grant_reference_arr)!= $grant_reference){
		$projects_endpoint_query .= '%20OR%20';
	}
}




//header('Content-Type: application/json');

//'http://gtr.rcuk.ac.uk/gtr/api/projects/?q=%22ES/D002206/1%22%20OR%20%22ES/D002621/1%22&f=pro.gr&s=100';

$projects_endpoint = "http://gtr.rcuk.ac.uk/gtr/api/projects/";


$projects_endpoint_full_url = $projects_endpoint . '?' . $projects_endpoint_query;

echo '<h2>API URL</h2>';
echo '<p><a href="' . $projects_endpoint_full_url . '">' . $projects_endpoint_full_url . '</a><p>';

$projects_endpoint_full_url = 'http://gtr.rcuk.ac.uk/gtr/api/persons/9AD27B0E-7D72-4BD0-B6BA-BB4DBE83E827';

//  Initiate curl
$ch = curl_init();

// Set The Response Format to Json
curl_setopt($ch, CURLOPT_HTTPHEADER, array('Accept: application/json'));

// Disable SSL verification
curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);

// Will return the response, if false it print the response
curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);

// Set the url
curl_setopt($ch, CURLOPT_URL, $projects_endpoint_full_url);

// Execute
$result=curl_exec($ch);

// Closing
curl_close($ch);

$json_obj = json_decode($result);

//echo $result;
echo '<h2>API JSON OBJ</h2>';
print_r($json_obj);