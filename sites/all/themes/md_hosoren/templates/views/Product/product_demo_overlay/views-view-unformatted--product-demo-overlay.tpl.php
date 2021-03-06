<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <div class="cate-section-gutter cate-overlay">
				<div class="awe-media block">
						<div class="awe-media-image">
								<?php print render($view->result[$id]->field_field_image[0]['rendered']); ?>
						</div>
				</div>

				<div class="category-text">
						<h3><?php print render($view->result[$id]->taxonomy_term_data_name); ?></h3>
						<p><?php print render($view->result[$id]->taxonomy_term_data_description); ?></p>
						<?php print l('View All', 'taxonomy/term/' . $view->result[$id]->tid, array('html' => 'true', 'attributes' => array('class' =>  array('btn', 'btn-dark','btn-outline')))); ?>
				</div>
		</div>
  </div>
<?php endforeach; ?>