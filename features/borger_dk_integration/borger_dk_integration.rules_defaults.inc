<?php
/**
 * @file
 * borger_dk_integration.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function borger_dk_integration_default_rules_configuration() {
  $items = array();
  $items['rules_borger_dk_lookup_by_url'] = entity_import('rules_config', '{ "rules_borger_dk_lookup_by_url" : {
      "LABEL" : "Borger.dk lookup by permalink",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_borger_permalink" } }
      ],
      "DO" : [
        { "data_create" : [] },
        { "php_eval" : { "code" : "borgerdk_permalink_true($artikel_id_fra_url);" } },
        { "wsclient_borger_dk_GetArticleIDByUrl" : [] },
        { "data_create" : [] },
        { "wsclient_borger_dk_GetArticleByID" : [] },
        { "php_eval" : { "code" : "\\/\\/ drupal_set_message(\\u0027S\\u00e5 spiller vi bolden videre til borgerdk_add_as_node($artikel_id_resultat), FALSE, $node\\u0027);\\r\\nborgerdk_add_as_node($artikel_id_resultat, FALSE, $node);" } }
      ]
    }
  }');
  $items['rules_update_borger_dk_derived_articles'] = entity_import('rules_config', '{ "rules_update_borger_dk_derived_articles" : {
      "LABEL" : "Update borger.dk derived articles",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "watchdog" ],
      "IF" : [
        { "data_is" : {
            "data" : [ "log-entry:type" ],
            "value" : "fetch_borgerdk_article_by_permalink"
          }
        }
      ],
      "DO" : [
        { "data_create" : [] },
        { "wsclient_borger_dk_GetArticleIDByUrl" : [] },
        { "data_create" : [] },
        { "wsclient_borger_dk_GetArticleByID" : [] },
        { "php_eval" : { "code" : "\\/\\/ drupal_set_message(\\u0027S\\u00e5 spiller vi bolden videre til borgerdk_add_as_node($artikel_id_resultat), TRUE\\u0027);\\r\\nborgerdk_add_as_node($artikel_id_resultat, TRUE);" } }
      ]
    }
  }');
  return $items;
}
