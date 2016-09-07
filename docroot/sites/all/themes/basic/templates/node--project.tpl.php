<?php if ($page): 
?>
<article class="<?php print $classes; ?>" data-nid="<?php print $node->nid; ?>" >

      <div class="w-section maincontent">
         <div class="maincontentwrapper">
            <div class="w-row">
               <div class="w-col w-col-8">
                  <div class="w-tabs" data-duration-in="300" data-duration-out="100">
                     <div class="w-tab-menu w-clearfix tabsmenu">
                        <a class="w-tab-link w--current w-inline-block tab" data-w-tab="overview">
                           <div>Overview</div>
                        </a>
                        <?php if(isset($content['field_organisations'])): ?>
                        <a class="w-tab-link w-inline-block tab" data-w-tab="organisations">
                           <div>Organisations</div>
                        </a>
                        <?php endif; ?>
                        <?php if(isset($content['field_people'])): ?>
                        <a class="w-tab-link w-inline-block tab" data-w-tab="people">
                           <div>People</div>
                        </a>
                        <?php endif; ?>
                        <?php if(isset($content['field_publications'])): ?>
                        <a class="w-tab-link w-inline-block tab" data-w-tab="publications">
                           <div>Publications</div>
                        </a>
                        <?php endif; ?>
                        <?php if(isset($content['field_potential_impact'])): ?>
                        <a class="w-tab-link w-inline-block tab" data-w-tab="outcomes">
                           <div>Impacts</div>
                        </a>
                        <?php endif; ?>
                        <?php if(isset($content['field_assets'])): ?>
                        <a class="w-tab-link w-inline-block tab" data-w-tab="assets">
                           <div>Assets</div>
                        </a>
                        <?php endif; ?>
                        <!--  <a class="backtoresults" href="#">« Back to results</a> -->
                     </div>
                     <div class="w-tab-content">
                        <div class="w-tab-pane  w--tab-active tabpane" data-w-tab="overview">
                           <div class="w-clearfix">
                           <?php print render($content['body']); ?>
                           </div>
                           <?php if(isset($content['field_ii_keywords'])): ?>
                           <h2 class="contenth2">Keywords</h2>
                           <span class="keyword-links"><?php print render($content['field_ii_keywords']); ?></span>
                           <?php endif; ?>
                        </div>
                        <?php if(isset($content['field_organisations'])): ?>
                        <div class="w-tab-pane w-clearfix tabpane" data-w-tab="organisations">
                           <!--  
                           <div class="w-clearfix inlineblock hidden">
                              <div class="organisationlogowrapper"><img class="organisationlogoimg" src="http://uploads.webflow.com/55e5bc07c26b4d57457c3da7/55e707eccf9b89126fe2a9c0_330075_152308104854062_7779827_o.jpg"></div>
                              <div class="organisationtext"><a class="organisationlink" href="#">Western University</a></div>
                           </div>
                           <div class="w-clearfix inlineblock hidden">
                              <div class="organisationlogowrapper"><img class="organisationlogoimg" src="http://uploads.webflow.com/55e5bc07c26b4d57457c3da7/55e707eccf9b89126fe2a9c1_sido_logo.gif"></div>
                              <div class="organisationtext"><a class="organisationlink" href="#">SIDO Cambodia</a></div>
                           </div>
                           <div class="w-row">
                              <div class="w-col w-col-6">
                                 <div class="w-row">
                                    <div class="w-col w-col-4 w-col-small-6 w-col-tiny-6"><img class="columnorganisation" src="http://uploads.webflow.com/55e5bc07c26b4d57457c3da7/55e707eccf9b89126fe2a9c0_330075_152308104854062_7779827_o.jpg"></div>
                                    <div class="w-col w-col-8 w-col-small-6 w-col-tiny-6">
                                       <h4 class="organisationname">Western University</h4>
                                       <a class="organisationlink column" href="#">Website</a><a class="organisationlink column" href="#">Email</a>
                                    </div>
                                 </div>
                              </div>
                              <div class="w-col w-col-6">
                                 <div class="w-row">
                                    <div class="w-col w-col-4 w-col-small-6 w-col-tiny-6"><img class="columnorganisation" src="http://uploads.webflow.com/55e5bc07c26b4d57457c3da7/55e707eccf9b89126fe2a9c1_sido_logo.gif"></div>
                                    <div class="w-col w-col-8 w-col-small-6 w-col-tiny-6">
                                       <h4 class="organisationname">SIDO Cambodia</h4>
                                       <a class="organisationlink column" href="#">Website</a><a class="organisationlink column" href="#">Email</a>
                                    </div>
                                 </div>
                              </div>
                           </div>
                           -->
                           <?php print render($content['field_organisations']); ?>
                        </div>
                        <?php endif; ?>
                        <?php if(isset($content['field_people'])): ?>
                        <div class="w-tab-pane tabpane" data-w-tab="people">
                        <!--  
                           <div class="inlineblock">
                              <div class="organisationlogowrapper"><img class="organisationlogoimg _50" src="http://uploads.webflow.com/55e5bc07c26b4d57457c3da7/55e70af2dd5145120d31f7c0_noun_22383_cc.svg"></div>
                              <div class="organisationtext"><a class="organisationlink" href="#"><span class="scholarbutton">F</span>Margaret McMillan <br>(Principal Investigator)</a></div>
                           </div>
                           <div class="w-clearfix inlineblock">
                              <div class="organisationlogowrapper"><img class="organisationlogoimg _50" src="http://uploads.webflow.com/55e5bc07c26b4d57457c3da7/55e70af2dd5145120d31f7c0_noun_22383_cc.svg"></div>
                              <div class="organisationtext"><a class="organisationlink" href="#"><span class="scholarbutton">F</span>Margaret McMillan <br>(Principal Investigator)</a></div>
                           </div>
                           <div class="w-clearfix inlineblock">
                              <div class="organisationlogowrapper"><img class="organisationlogoimg _50" src="http://uploads.webflow.com/55e5bc07c26b4d57457c3da7/55e70af2dd5145120d31f7c0_noun_22383_cc.svg"></div>
                              <div class="organisationtext"><a class="organisationlink" href="#"><span class="scholarbutton">F</span>Margaret McMillan <br>(Principal Investigator)</a></div>
                           </div>
                           <div class="w-clearfix inlineblock">
                              <div class="organisationlogowrapper"><img class="organisationlogoimg _50" src="http://uploads.webflow.com/55e5bc07c26b4d57457c3da7/55e70af2dd5145120d31f7c0_noun_22383_cc.svg"></div>
                              <div class="organisationtext"><a class="organisationlink" href="#"><span class="scholarbutton">F</span>Margaret McMillan <br>(Principal Investigator)</a></div>
                           </div>
                           -->
                           <?php print render($content['field_people']); ?>
                        </div>
                        <?php endif; ?>
                        <?php if(isset($content['field_publications'])): ?>
                        <div class="w-tab-pane" data-w-tab="publications">
                        	<?php print render($content['field_publications']); ?>
                        </div>
                        <?php endif; ?>
                        <?php if(isset($content['field_potential_impact'])): ?>
                        <div class="w-tab-pane" data-w-tab="outcomes">
                        	<?php print render($content['field_potential_impact']); ?>
                        </div>
                        <?php endif; ?>
                        <?php if(isset($content['field_assets'])): ?>
                        <div class="w-tab-pane" data-w-tab="assets">
                        	<?php print render($content['field_assets']); ?>
                        </div>
                        <?php endif; ?>
                     </div>
                  </div>
               </div>
               <div class="w-col w-col-4">
                  <div class="w-clearfix sidebarbuttonwrapper">

                     <div class="metawrapper">
                      
						<?php print render($content); ?>                     
                     
                     </div>
                  </div>
               </div>
            </div>
         </div>
      </div>
</article> <!-- /article #node -->
<?php endif; ?>
<?php if (!$page): ?>
<article class="<?php print $classes; ?>" data-nid="<?php print $node->nid; ?>" >

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
        <div class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </div>
      <?php endif; ?>

      <?php if ($unpublished): ?>
        <p class="unpublished"><?php print t('Unpublished'); ?></p>
      <?php endif; ?>
    </header>
  <?php endif; ?>

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

  <?php if (!empty($content['links'])): ?>
    <div class="links">
      <?php print render($content['links']); ?>
    </div> <!-- /links -->
  <?php endif; ?>

  <?php print render($content['comments']); ?>
</article> <!-- /article #node -->
<?php endif; ?>