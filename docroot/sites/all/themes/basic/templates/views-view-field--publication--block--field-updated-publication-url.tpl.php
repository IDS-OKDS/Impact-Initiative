<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php 
// Display this one if there is something in the field, otherwise display the previous one. Or sorry message

//$orig = $row->field_field_publication_url;
//$new = $row->field_field_updated_publication_url;

if (isset($row->field_field_publication_url[0])) {
	$orig_url = $row->field_field_publication_url[0]['raw']['value'];
} else {
	$orig_url = '';
}
if (isset($row->field_field_updated_publication_url[0])) {
	$new_url = $row->field_field_updated_publication_url[0]['raw']['url'];
} else {
	$new_url = '';
}
//drupal_set_message('<pre>'.print_r($new[0]['raw'],true).'</pre>');
//print ('Orig '.$orig_url.'<br>new '.$new_url.'<br>');
if (trim($new_url)!='') {
		print l($new_url, $new_url);
} else {
		if(trim($orig_url)!='') {
			print (l($orig_url, $orig_url));
		} else {
			print ('Sorry, there is no link to this publication');
		}
}
//print $output; 
?>