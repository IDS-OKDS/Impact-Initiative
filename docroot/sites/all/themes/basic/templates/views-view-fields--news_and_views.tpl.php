<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
$row_id = $id;
$fields_content = array();
?>
<?php foreach ($fields as $id => $field): ?>
<?php $fields_content[$id] = $field->content; ?>
<?php endforeach; ?>
<?php 
$fields_content['url'] = url('node/'. $fields_content['nid']);
?>
<?php 
$tid = $fields_content['field_primary_theme_1'];
$theme_style = '';
if(isset($tid)): 
	$theme_color = epdmod_get_theme_color($tid); 
	$theme_style = 'border-bottom-color:#' . $theme_color;
endif;

$this_node = node_load($fields_content['nid']);
?>
<style>
<?php 
$image_path = basic_epd_get_field_image_path('field_supporting_image', $this_node);
print ".featuredphoto_{$this_node->nid}{ background-image:url($image_path);}"; 
?>
</style>
<?php if($row_id == 1): ?>
            <a class="w-clearfix w-inline-block featuredlinkblock" href="<?php print($fields_content['url']); ?>">
              <h4 class="featuredtheme" style="<?php print $theme_style; ?>"><?php print($fields_content['field_primary_theme']); ?></h4>
              <div class="w-clearfix featuredphoto featuredphoto_<?php print($this_node->nid); ?> big">
                <h3 class="featuredh3"><?php print($fields_content['title']); ?></h3>
              </div>
              <div class="featuredp"><?php print($fields_content['body']); ?></div>
            </a>
<?php else: ?>
                <a class="w-clearfix w-inline-block featuredlinkblock small" href="<?php print($fields_content['url']); ?>">
                  <h4 class="featuredtheme" style="<?php print $theme_style; ?>"><?php print($fields_content['field_primary_theme']); ?></h4>
                  <div class="w-clearfix featuredphoto featuredphoto_<?php print($this_node->nid); ?>">
                    <h3 class="featuredh3"><?php print($fields_content['title']); ?></h3>
                  </div>
                </a>
<?php endif; ?>




