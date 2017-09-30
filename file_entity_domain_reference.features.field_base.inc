<?php
/**
 * @file
 * file_entity_domain_reference.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function file_entity_domain_reference_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_file_domain'.
  $field_bases['field_file_domain'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_domain',
    'indexes' => array(
      'domain' => array(
        0 => 'domain',
      ),
    ),
    'locked' => 0,
    'module' => 'domain',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'domain_reference',
  );

  return $field_bases;
}
