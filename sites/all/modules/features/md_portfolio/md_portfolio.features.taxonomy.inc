<?php
/**
 * @file
 * md_portfolio.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function md_portfolio_taxonomy_default_vocabularies() {
  return array(
    'portfolio_categories' => array(
      'name' => 'Portfolio Categories',
      'machine_name' => 'portfolio_categories',
      'description' => 'Categories for Portfolio',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}