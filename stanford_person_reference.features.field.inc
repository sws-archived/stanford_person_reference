<?php
/**
 * @file
 * stanford_person_reference.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function stanford_person_reference_field_default_fields() {
  $fields = array();

  // Exported field: 'node-stanford_event-field_s_all_entityref_person'.
  $fields['node-stanford_event-field_s_all_entityref_person'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_all_entityref_person',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'field' => 'body:value',
            'property' => 'nid',
            'type' => 'none',
          ),
          'target_bundles' => array(
            'stanford_person' => 'stanford_person',
          ),
        ),
        'handler_submit' => 'Change handler',
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'stanford_event',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This optional field links a content object (i.e. course, publication, etc.) with particular person profile(s) on this website. For a publication, this would be the author, for a course this would be the instructor, etc. Begin typing a name, and the system will suggest options that match. Click on the appropriate name, and Save this page to build a reference between this page and a person. This field allows for complex data queries, and other interesting things.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 12,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_s_all_entityref_person',
      'label' => 'Associated Person',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => '14',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Associated Person');
  t('This optional field links a content object (i.e. course, publication, etc.) with particular person profile(s) on this website. For a publication, this would be the author, for a course this would be the instructor, etc. Begin typing a name, and the system will suggest options that match. Click on the appropriate name, and Save this page to build a reference between this page and a person. This field allows for complex data queries, and other interesting things.');

  return $fields;
}
