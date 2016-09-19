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
//print '<pre>'.print_r($row->field_field_supporting_image,true).'</pre>';

//print image_style_url('medium', $img_uri);

	print '<div class="w-col w-col-3">';
	$referenced_node = node_load($row->nid);
	if($referenced_node):
		print '<style>';
		//$image_path = basic_epd_get_field_image_path('field_supporting_image', $referenced_node);
		//print ".featuredphoto_{$referenced_node->nid}{ background-image:url($image_path);}"; 
		$img_uri = $row->field_field_supporting_image[0]['rendered']['#item']['uri'];
		print '.featuredphoto_'.$row->nid.' { background-image:url('.image_style_url('medium', $img_uri).');}'; 
		print '</style>';
	?>           
              <a class="w-clearfix w-inline-block featuredlinkblock" href="<?php print url('node/'.$referenced_node->nid); ?>"><?php
             		 $render_obj= field_view_field('node', $referenced_node, 'field_primary_theme', array(
						'label' => 'hidden', 
		  				'type' => 'taxonomy_term_reference_plain'
					)); 
					$theme_style = '';
					if(isset($render_obj['#items'][0]['tid'])): 
						$theme_color = epdmod_get_theme_color($render_obj['#items'][0]['tid']); 
						$theme_style = 'border-bottom-color:#' . $theme_color;
					endif;
              ?>
                <h4 class="featuredtheme" style="<?php print $theme_style; ?>"><?php 
		  			$render_obj= field_view_field('node', $referenced_node, 'field_resource_type', array(
						'label' => 'hidden', 
		  			    'type' => 'taxonomy_term_reference_plain'
					));
					if($render_obj):
						print render($render_obj);  
					endif;
                  ?></h4>
                <div class="w-clearfix featuredphoto featuredphoto_<?php  print $referenced_node->nid; ?>">
                  <h3 class="featuredh3"><?php 
                    $render_obj = field_view_field('node', $referenced_node, 'field_short_title', array(
						'label' => 'hidden', 
					));
					$short_title = '';
					if($render_obj):
						$short_title = render($render_obj); 
					endif;
					$resource_title = ($short_title)? $short_title:$referenced_node->title;
					print strip_tags($resource_title);
                  ?></h3>
                </div>
                <div class="featuredp"><?php 
                	$render_obj = field_view_field('node', $referenced_node, 'body', array(
					    'type' => 'text_summary_or_trimmed',
						'label' => 'hidden',  
					)); 
					if($render_obj):
						print strip_tags(render($render_obj));  
					endif;
                  ?>
			<div class="button" style="padding: 10px 0px; color: #0082f3 !important; text-decoration: underline !important">Read more</div>
			
		    </div>
              </a>
       
	<?php endif; ?>
	</div>
