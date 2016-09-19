<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
        <div class="w-row">
          <div class="w-col w-col-6">
			<?php print($rows[0]); ?>
          </div>
          <div class="w-col w-col-6">
            <div class="w-row">
              <div class="w-col w-col-6">
				<?php if(isset($rows[1])): print($rows[1]); endif; ?>
              </div>
              <div class="w-col w-col-6">
				<?php if(isset($rows[2])): print($rows[2]); endif; ?>
              </div>
            </div>
            <div class="w-row">
              <div class="w-col w-col-6">
				<?php if(isset($rows[3])): print($rows[3]); endif; ?>
              </div>
              <div class="w-col w-col-6">
				<?php if(isset($rows[4])): print($rows[4]); endif; ?>
              </div>
            </div>
          </div>
        </div>
