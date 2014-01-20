<?php
/**
 * @file
 * stanford_person_reference.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_person_reference_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-stanford_event-field_s_all_entityref_person'
  $field_instances['node-stanford_event-field_s_all_entityref_person'] = array(
    'bundle' => 'stanford_event',
    'default_value' => NULL,
    'deleted' => 0,
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
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 14,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Associated Person');
  t('This optional field links a content object (i.e. course, publication, etc.) with particular person profile(s) on this website. For a publication, this would be the author, for a course this would be the instructor, etc. Begin typing a name, and the system will suggest options that match. Click on the appropriate name, and Save this page to build a reference between this page and a person. This field allows for complex data queries, and other interesting things.');

  return $field_instances;
}
