<?php
/**
 * @file
 * md_product.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function md_product_taxonomy_default_vocabularies() {
  return array(
    'foot_size' => array(
      'name' => 'Foot Size',
      'machine_name' => 'foot_size',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 10,
      'language' => 'und',
      'i18n_mode' => 0,
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
    'outerwear_size_adult' => array(
      'name' => 'Outerwear - Size - Adult',
      'machine_name' => 'outerwear_size_adult',
      'description' => 'Outerwear - Size - Adult',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
      'language' => 'und',
      'i18n_mode' => 0,
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
    'outerwear_size_baby' => array(
      'name' => 'Outwear - Size - Baby',
      'machine_name' => 'outerwear_size_baby',
      'description' => 'Outerwear - Size - Baby',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
      'language' => 'und',
      'i18n_mode' => 0,
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
    'outerwear_size_children' => array(
      'name' => 'Outerwear - Size - Children',
      'machine_name' => 'outerwear_size_children',
      'description' => 'Outerwear - Size - Children',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
      'language' => 'und',
      'i18n_mode' => 1,
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
    'player_jerseys' => array(
      'name' => 'Player Jerseys',
      'machine_name' => 'player_jerseys',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
      'language' => 'und',
      'i18n_mode' => 1,
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
    'sale' => array(
      'name' => 'Sale',
      'machine_name' => 'sale',
      'description' => 'Sale',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
      'language' => 'und',
      'i18n_mode' => 0,
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
