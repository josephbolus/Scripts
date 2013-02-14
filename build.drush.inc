<?php
/**
 * Implementation of hook_drush_init().
 */
function build_drush_init() {
}

function build_drush_command() {
  $items = array();

  $items['build-test'] = array(
    'description' => "Test.",
    'options' => array(
      '--flag' => 'test',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH, // No bootstrap at all.
  );
return $items;
}

function drush_build_test(){
  $args = func_get_args();
  var_export($args);
  echo 'Supper cewl';
}