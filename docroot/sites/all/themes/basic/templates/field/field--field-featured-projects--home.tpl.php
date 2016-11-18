    <div class="w-section maincontent featuredprojects">
      <div class="maincontentwrapper">
        <div class="featured">
		  <?php if (!$label_hidden): ?>
		    <h2 class="h2featured alternative"><?php print $label ?></h2>
		  <?php endif; ?>
          <div class="w-row">
          <?php foreach ($items as $delta => $item): ?>
		    <?php 
		    $referenced_node = basic_epd_get_referenced_entity($item['node']);
		    if($referenced_node):
		    ?>
		    <style>
		     <?php $image_path = image_style_url('medium', basic_epd_get_field_image_uri('field_supporting_image', $referenced_node));    ?>
		    <?php print ".featuredphoto_{$referenced_node->nid}{ background-image:url($image_path);}"; ?>
		    </style>
            <div class="w-col w-col-3">
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
					$project_title = ($short_title)? $short_title:$referenced_node->title;
					print strip_tags($project_title);
                  ?></h3>
                </div>
                <div class="featuredp"><?php 
                	$render_obj = field_view_field('node', $referenced_node, 'body', array(
					    'type' => 'text_summary_or_trimmed',
						'label' => 'hidden',  
					)); 
					if($render_obj):
						print render($render_obj);  
					endif;
                  ?></div>
              </a>
            </div>
            <?php endif; ?>
            <?php endforeach; ?>
          </div>
        </div>
      </div>
    </div>
