<article class="<?php print $classes; ?> blog-image-teaser" data-nid="<?php print $node->nid; ?>" >

    <div class="blog-image-teaser-hero">
      <?php if ($content['field_supporting_image']): ?>
        <?php print render($content['field_supporting_image']) ?>
      <?php endif; ?>

      <?php if (!empty($content['field_blog_date'])): ?>
        <?php print render($content['field_blog_date']) ?>
      <?php endif; ?>
    </div>

    <a href="<?php print $node_url ?>">
      <?php if ($title): ?>
        <h2><?php print $title; ?></h2>
      <?php endif; ?>
    </a>

  <div class="node-content">
		    <?php
		      // We hide the comments to render below.
		      hide($content['comments']);
		      hide($content['links']);
		      print render($content);
		     ?>
  </div> <!-- /node-content -->

  <?php if (!empty($content['links']['terms'])): ?>
    <div class="terms">
      <?php print render($content['links']['terms']); ?>
    </div> <!-- /terms -->
  <?php endif;?>
<!---->
<!--  --><?php //if (!empty($content['links'])): ?>
<!--    <div class="links">-->
<!--      --><?php //print render($content['links']); ?>
<!--    </div> <!-- /links -->
<!--  --><?php //endif; ?>

  <?php print render($content['comments']); ?>
</article> <!-- /article #node -->
