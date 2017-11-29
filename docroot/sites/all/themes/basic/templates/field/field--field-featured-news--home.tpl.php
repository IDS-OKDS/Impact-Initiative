    <div class="w-section maincontent newsandviews">
      <div class="maincontentwrapper alternative">
        <div class="featured">
		  

          <?php 
          $fields_content = array();
          foreach ($items as $delta => $item): ?>
		    <?php 
		    $fields_content[$delta] = array();
		    $referenced_node = basic_epd_get_referenced_entity($item['node']);
		    if($referenced_node):
		    	$fields_content[$delta]['url'] = url('node/'.$referenced_node->nid);
		    	$fields_content[$delta]['title'] = $referenced_node->title;
				if (isset($referenced_node->field_short_title[LANGUAGE_NONE])) {
					if ($referenced_node->field_short_title[LANGUAGE_NONE][0]['value'] !== '') {
						$fields_content[$delta]['title'] = $referenced_node->field_short_title[LANGUAGE_NONE][0]['value'];
					}
				}
		    	$fields_content[$delta]['nid'] = $referenced_node->nid;
		    	$render_arr = field_view_field('node', $referenced_node, 'body', array(
													  'type' => 'text_summary_or_trimmed', 
		    											'label' => 'hidden', 
													));
		    	$fields_content[$delta]['body'] = render($render_arr);
		    	//$image_path = basic_epd_get_field_image_path('field_supporting_image', $referenced_node);
				$image_path = image_style_url('large', basic_epd_get_field_image_uri('field_supporting_image', $referenced_node));  
		    	$fields_content[$delta]['style'] = "<style>.featuredphoto_{$referenced_node->nid}{ background-image:url($image_path) !important;}</style>";   
		    ?>
            <?php endif; ?>
        <?php endforeach; ?>
		  
        <div class="w-row">
		
			<div class="w-col w-col-12">
		 
				
				<div class="w-col w-col-6">
				
				<?php if (!$label_hidden): ?>
					<h2 class="h2featured alternative"><span class="icon-font news "></span><?php print l($label, 'blog'); ?></h2>
				<?php endif; ?>
				<?php if(isset($fields_content[0])): ?>
					<?php print($fields_content[0]['style']); ?>
					<a class="w-clearfix w-inline-block featuredlinkblock" href="<?php print($fields_content[0]['url']); ?>">
					<div class="w-clearfix featuredphoto featuredphoto_<?php print($fields_content[0]['nid']); ?> big">
						<h3 class="featuredh3"><?php print($fields_content[0]['title']); ?></h3>
					</div>
					<div class="featuredp"><?php print($fields_content[0]['body']); ?></div>
					</a>
				<?php endif; ?>
   
				<div class="w-row">
					<div class="w-col w-col-6">
						<?php if(isset($fields_content[1])): ?>
						<?php print($fields_content[1]['style']); ?>
						<a class="w-clearfix w-inline-block featuredlinkblock small" href="<?php print($fields_content[1]['url']); ?>">
						<div class="w-clearfix featuredphoto featuredphoto_<?php print($fields_content[1]['nid']); ?>">
							<h3 class="featuredh3"><?php print($fields_content[1]['title']); ?></h3>
						</div>
						</a>
						<?php endif; ?>
					</div>
					<div class="w-col w-col-6">
						<?php if(isset($fields_content[2])): ?>
						<?php print($fields_content[2]['style']); ?>
						<a class="w-clearfix w-inline-block featuredlinkblock small" href="<?php print($fields_content[2]['url']); ?>">
						<div class="w-clearfix featuredphoto featuredphoto_<?php print($fields_content[2]['nid']); ?>">
							<h3 class="featuredh3"><?php print($fields_content[2]['title']); ?></h3>
						</div>
						</a>
						<?php endif; ?>
					</div>
				</div>
				<div class="w-row">
					<div class="w-col w-col-6">
						<?php if(isset($fields_content[3])): ?>
						<?php print($fields_content[3]['style']); ?>
						<a class="w-clearfix w-inline-block featuredlinkblock small" href="<?php print($fields_content[3]['url']); ?>">
							<div class="w-clearfix featuredphoto featuredphoto_<?php print($fields_content[3]['nid']); ?>">
							<h3 class="featuredh3"><?php print($fields_content[3]['title']); ?></h3>
						</div>
						</a>
						<?php endif; ?>
					</div>
					<div class="w-col w-col-6">
						<?php if(isset($fields_content[4])): ?>
						<?php print($fields_content[4]['style']); ?>
						<a class="w-clearfix w-inline-block featuredlinkblock small" href="<?php print($fields_content[4]['url']); ?>">
						<div class="w-clearfix featuredphoto featuredphoto_<?php print($fields_content[4]['nid']); ?>">
							<h3 class="featuredh3"><?php print($fields_content[4]['title']); ?></h3>
						</div>
						</a>
						<?php endif; ?>
					</div>
				</div>
				<div class="w-row">
					<div class="w-col w-col-6">
						<?php if(isset($fields_content[5])): ?>
						<?php print($fields_content[5]['style']); ?>
						<a class="w-clearfix w-inline-block featuredlinkblock small" href="<?php print($fields_content[5]['url']); ?>">
							<div class="w-clearfix featuredphoto featuredphoto_<?php print($fields_content[5]['nid']); ?>">
							<h3 class="featuredh3"><?php print($fields_content[5]['title']); ?></h3>
						</div>
						</a>
						<?php endif; ?>
					</div>
					<div class="w-col w-col-6">
						<?php if(isset($fields_content[6])): ?>
						<?php print($fields_content[6]['style']); ?>
						<a class="w-clearfix w-inline-block featuredlinkblock small" href="<?php print($fields_content[6]['url']); ?>">
						<div class="w-clearfix featuredphoto featuredphoto_<?php print($fields_content[6]['nid']); ?>">
							<h3 class="featuredh3"><?php print($fields_content[6]['title']); ?></h3>
						</div>
						</a>
						<?php endif; ?>
					</div>
				</div>
				<p class="seemore"><a href="/blog">See more News and Views</a></p>
				</div>
				
				<div class="w-col w-col-6 impact-lab">
					<h2 class="h2featured alternative"><span class="icon-font impact "></span><?php print l('The Impact Lab', 'node/1166'); ?></h2>
					<?php $block = module_invoke('epd_copyright_licensing', 'block_view','epd_about_impact_lab');
						  print render($block['content']);?>
					<!--p class="contentp">Find out <a href="">what makes impact work</a></p-->
					
					<div class="alert">
						<h3>Calling ESRC DFID Grant Holders</h3>
						<div class="alert-inner clearfix">
							<div class="download-pdf-button top"><?php print l('Access support now', 'node/1255'); ?></div>
							<p>Discover how to maximise the impact of your project</p>
						</div>
					</div>

					<h3>Edited collection of articles</h3>
					<?php print views_embed_view('impact_lab_landing_page', 'edited_collection_list_block');?>
					<h3>Learning guides</h3>
					<?php print views_embed_view('learning_guides', 'block');?>
				<p class="seemore"><a href="/impact-lab">See more at the Impact Lab</a></p>
					
				</div>
				
			</div>	
          
		</div>
		
        </div>
      </div>
    </div>
