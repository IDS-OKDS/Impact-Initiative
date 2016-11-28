<div id="page" class="<?php print $classes; ?>"
<?php print $attributes; ?>>
	<div class="w-nav nav" data-collapse="medium" data-animation="default"
		data-duration="400" data-contain="1" data-doc-height="1">
		<div class="w-container navwrapper">
			<a class="w-nav-brand logo" href="<?php print(base_path()); ?>"><img
				height="38"
				src="<?php print(base_path() . path_to_theme()); ?>/images/TII-logo.png">
			</a><a href="<?php print(url('')); ?>"><img
				class="navlink home"
				src="<?php print(base_path() . path_to_theme()); ?>/images/home.png">
			</a><a href="<?php print(url('search')); ?>"><img
				class="navlink search"
				src="<?php print(base_path() . path_to_theme()); ?>/images/magnifying_glass.png">
			</a>
			<nav class="w-nav-menu navmanu" role="navigation">
			<?php if ($page['navigation']): ?>
				<div id="navigation-region">
				<?php print render($page['navigation']); ?>
				</div>
				<?php endif; ?>
			</nav>
			<div class="w-nav-button menubutton">
				<div class="w-icon-nav-menu menuicon"></div>
			</div>
		</div>
		<div class="w-nav-overlay" data-wf-ignore=""></div>
	</div>
	<?php
	/*
	 * Page headers
	 */
	if(drupal_is_front_page()):
	$image_path = basic_epd_get_field_image_path('field_supporting_image', $node);
	$home_bg_style = "url('$image_path')";
	?>
	<div class="w-section contenthero home">
		<div class="w-section-wrapper contenthero-wrapper">
				<div class="homeherocontent">
					<div class="homeherotext">
					<div class="herologodiv"><?php if ($title): ?>
							<h1 class="title">
							<?php print $title; ?>
							</h1>
							<?php endif; ?></div>
						<!--
						<img class="herologo"
							src="<?php print(base_path() . path_to_theme()); ?>/IDS-ITEE_files/55f6dbb2a2e0bc3b340d7aee_logo CHOSEN LONG PATHS WHITE.svg">  -->
						<span class="openingp alternative"> <?php print($node->body[LANGUAGE_NONE][0]['safe_value']); ?>
						</span>
					</div>
          <small class="image-attribution">
            <?php print basic_epd_get_field_image_attribution('field_supporting_image', $node); ?>
          </small>
				</div>
		</div>
	</div>
	<style>
		.contenthero {background-image:linear-gradient(to right, rgba(0, 0, 0, 0.74), rgba(0, 0, 0, 0.70) 45%, rgba(0, 0, 0, 0) 62%), <?php print $home_bg_style; ?>;}
		.lteie8 .contenthero, .ie9 .contenthero {background-image:<?php print $home_bg_style; ?>;
		}
	</style>
	<?php
	endif;
	if($hero_theme_term):
	$image_path = basic_epd_get_field_image_path('field_theme_image', $hero_theme_term);
	$hero_theme_bg_style = "background-image:url($image_path);";
	$project_theme_color = 'aaaaaa';
	$project_theme_color = epdmod_get_theme_color($hero_theme_term->tid);
	?>
	<div class="w-section contenthero">
	   <div class="landinghero" style="border-bottom: 5px solid #<?php print $project_theme_color; ?>; <?php print $hero_theme_bg_style; ?>">
	      <div class="herotextwrapper landingscreens">
	         <div class="landingherotextwrapper">
	            <h1 class="landingheroh1"><?php print $hero_theme_term->name; ?></h1>
	            <div class="herodescription"><?php print $hero_theme_term->description; ?></div>
	         </div>
           <small class="image-attribution">
              <?php print basic_epd_get_field_image_attribution('field_theme_image', $hero_theme_term); ?>
            </small>
	      </div>
	   </div>
	</div>
	<?php
	endif;
	if(isset($node)):
		if($node->type == 'project'):
		$image_path = basic_epd_get_field_image_path('field_supporting_image', $node);
		$hero_project_bg_style = "background-image:url($image_path);";
		$project_theme_color = 'aaaaaa';
		if(isset($node->field_primary_theme[LANGUAGE_NONE][0]['tid'])){
			$project_theme_color = epdmod_get_theme_color($node->field_primary_theme[LANGUAGE_NONE][0]['tid']);
		}
		?>

	      <div class="w-section w-clearfix contenthero" style="background-color:#<?php print $project_theme_color; ?>; border-bottom: 5px solid #<?php print $project_theme_color; ?>;">
	         <div class="herocolumn main" style="<?php print $hero_project_bg_style; ?>">
	            <div class="w-clearfix herotextwrapper">
	               <h1 class="heroh1"><?php print $title; ?></h1>
                 <div class="reasearch-partners-wrapper">
  	               <h2 class="heroh2">Research Partners:</h2>
  	               <?php
  	                $instances = _field_invoke_get_instances('node', $node->type, array('default' => TRUE, 'deleted' => FALSE));
  	               	$display = field_get_display($instances['field_organisations'], 'full', $node);
  	                $render_obj= field_view_field('node', $node, 'field_organisations', $display);
  	               	if($render_obj):
  						print render($render_obj);
  					endif;
  	               ?>
                 </div>
                 <small class="image-attribution">
                   <?php print basic_epd_get_field_image_attribution('field_supporting_image', $node); ?>
                 </small>
	            </div>
	            <a class="w-button showmap" href="#" data-ix="showmap">Show map</a>
	         </div>
	         <div class="herocolumn map">
	            <!--
	            <div class="w-widget w-widget-map googlemap" data-widget-latlng="12.565679,104.990963" data-widget-style="hybrid" data-widget-zoom="5" data-disable-scroll="1"></div>
	             -->
	             <?php
	             print views_embed_view('search','block_1', $node->nid);
	             ?>
	         </div>
	      </div>
		<?php
		$title = '';
		endif;
		if($node->type == 'event' || $node->type == 'news' || $node->type == 'blog' || $node->type == 'resource'):
		$image_path = basic_epd_get_field_image_path('field_supporting_image', $node);
		$hero_project_bg_style = "background-image:url($image_path);";
		$project_theme_color = 'aaaaaa';
    basic_epd_get_field_image_attribution('field_supporting_image', $node);
		if(isset($node->field_primary_theme[LANGUAGE_NONE][0]['tid'])){
			$project_theme_color = epdmod_get_theme_color($node->field_primary_theme[LANGUAGE_NONE][0]['tid']);
		}
		?>

	      <div class="w-section w-clearfix contenthero" style="border-bottom: 5px solid #<?php print $project_theme_color; ?>;">
	         <div class="herocolumn main" style="<?php print $hero_project_bg_style; ?>">
	            <div class="w-clearfix herotextwrapper">
	               <h1 class="heroh1"><?php print $title; ?></h1>
                 <small class="image-attribution">
                   <?php print basic_epd_get_field_image_attribution('field_supporting_image', $node); ?>
                 </small>
	            </div>
	         </div>
	      </div>
		<?php
		$title = '';
		endif;
	endif;
	/*
	 * Page headers END
	 */
	?>
			<!-- ______________________ MAIN _______________________ -->
	<?php
	if($wrap_content):
	?>
	<div class="w-section maincontent">
		<div class="maincontentwrapper">
	<?php
	endif;
	?>
			<div id="main">
				<div class="container">
					<section id="content">

					<?php if ($breadcrumb || $title|| $messages || $tabs || $action_links): ?>
						<!-- <div id="content-header"> -->

						<?php print $breadcrumb; ?>

						<?php if ($page['highlighted']): ?>
							<div id="highlighted">
							<?php print render($page['highlighted']) ?>
							</div>
						<?php endif; ?>

						<?php if(!drupal_is_front_page()): ?>
							<?php print render($title_prefix); ?>

							<?php if ($title && isset($node->type) && $node->type != "case_study"): ?>
								<h1 class="title">
									<?php print $title; ?>
								</h1>
							<?php endif; ?>

							<?php print render($title_suffix); ?>
						<?php endif; ?>

						<?php print $messages; ?>
						<?php print render($page['help']); ?>

						<?php if (render($tabs)): ?>
						<div class="tabs">
						<?php print render($tabs); ?>
						</div>
						<?php endif; ?>

						<?php if ($action_links): ?>
						<ul class="action-links">
						<?php print render($action_links); ?>
						</ul>
						<?php endif; ?>

					<!-- </div> /#content-header -->
					<?php endif; ?>

					<div id="content-area">
					<?php print render($page['content']) ?>
					</div>

					<?php print $feed_icons; ?>

					</section>
					<!-- /content-inner /content -->

					<?php if ($page['sidebar_first']): ?>
					<aside id="sidebar-first">
					<?php print render($page['sidebar_first']); ?>
					</aside>
					<?php endif; ?>
					<!-- /sidebar-first -->

					<?php if ($page['sidebar_second']): ?>
					<aside id="sidebar-second">
					<?php print render($page['sidebar_second']); ?>
					</aside>
					<?php endif; ?>
					<!-- /sidebar-second -->
				</div>
			</div>
			<!-- /main -->
	<?php
	if($wrap_content):
	?>
		</div>
	</div>
	<?php
	endif;
	?>
    <footer class="w-section footer">
      <div class="maincontentwrapper">
        <div class="w-row">
          <div class="w-col w-col-3 w-clearfix">
		  <div class="soc-med"><a class="w-inline-block footerlink" href="https://twitter.com/The_Impact_Init"><img src="<?php print(base_path() . path_to_theme()); ?>/IDS-ITEE_files/twitter.png"></a></div>
		  <div class="soc-med"><a class="w-inline-block footerlink" title="View our photos on Flickr" href="https://www.flickr.com/photos/139208357@N08/"><img src="<?php print(base_path() . path_to_theme()); ?>/IDS-ITEE_files/flickr.png"></a></div>
<div class="soc-med"><a class="w-inline-block footerlink" href="https://www.facebook.com/idsuk/"><img src="<?php print(base_path() . path_to_theme()); ?>/IDS-ITEE_files/facebook.png"></a></div>
</div>
		<div class="w-col w-col-6 w-clearfix">
          <?php if ($page['footer_left']): ?>
				<div id="navigation-region">
				<?php print render($page['footer_left']); ?>
				</div>
				<?php endif; ?>
			</div>
		
          <div class="w-col w-col-3 w-clearfix"><img alt="ESRC and DFID logos" class="footerlogo esrc" src="<?php print(base_path() . path_to_theme()); ?>/images/ESRC-DFID-logo.png"></div>
        </div>
      </div>
    </footer>

	<script type="text/javascript"
		src="<?php print(base_path() . path_to_theme()); ?>/IDS-ITEE_files/jquery.min.js"></script>
	<script type="text/javascript"
		src="<?php print(base_path() . path_to_theme()); ?>/IDS-ITEE_files/webflow.78ecc1a10.js"></script>
	<!--[if lte IE 9]><script src="//cdnjs.cloudflare.com/ajax/libs/placeholders/3.0.2/placeholders.min.js"></script><![endif]-->
</div>
<!-- /page -->
