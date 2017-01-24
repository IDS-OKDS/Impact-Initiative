<?php
/**
 * @file
 * epd_edited_collection.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function epd_edited_collection_taxonomy_default_vocabularies() {
  return array(
    'person' => array(
      'name' => 'Person',
      'machine_name' => 'person',
      'description' => 'Tags sourced from OpenCalais about Person.',
      'hierarchy' => 0,
      'module' => 'opencalais',
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
