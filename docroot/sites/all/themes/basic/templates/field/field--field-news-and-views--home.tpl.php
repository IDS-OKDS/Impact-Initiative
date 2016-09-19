    <div class="w-section maincontent newsandviews">
      <div class="maincontentwrapper">
        <div class="featured">
		  <?php if (!$label_hidden): ?>
		    <h2 class="h2featured alternative"><?php print $label ?></h2>
		  <?php endif; ?>
		  <div class="field-items"<?php print $content_attributes; ?>>
		    <?php foreach ($items as $delta => $item): ?>
		      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
		    <?php endforeach; ?>
		  </div>
        </div>
      </div>
    </div>
