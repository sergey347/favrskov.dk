<?php
/**
 * @file
 * config_domain_variables.domains.inc
 */

/**
 * Implements hook_domain_conf_default_variables().
 */
function config_domain_variables_domain_conf_default_variables() {
  $domain_variables = array();
  $domain_variables['wipe-domain-tables'] = 'wipe-domain-tables';
  $domain_variables['cykelkommune_favrskov_dk'] = array(
    'site_name' => 'Favrskov Kommune',
    'site_mail' => 'info@favrskov.dk',
    'site_slogan' => '',
    'site_frontpage' => 'node/12220',
    'anonymous' => 'Anonymous',
    'admin_theme' => 'seven',
    'date_default_timezone' => 'Europe/Copenhagen',
    'cache' => 1,
    'cache_lifetime' => 3600,
    'maintenance_mode' => 0,
    'maintenance_mode_message' => 'Vi er ved at opdatere Favrskov Kommune. Vi er snart tilbage. Tak for din tålmodighed.',
    'language_default' => 'domain-conf-ignore',
    'menu_main_links_source' => 'e06751ae02a79d750126985886141c7b',
    'menu_secondary_links_source' => 0,
    'menu_options_article' => array(
      'e06751ae02a79d750126985886141c7b' => 'e06751ae02a79d750126985886141c7b',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_article' => 'main-menu:0',
    'menu_options_bannerlink' => array(
      'e06751ae02a79d750126985886141c7b' => 'e06751ae02a79d750126985886141c7b',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_bannerlink' => 'main-menu:0',
    'menu_options_banner_element' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_banner_element' => 'main-menu:0',
    'menu_options_factbox' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_factbox' => 'main-menu:0',
    'menu_options_faq' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_faq' => 'main-menu:0',
    'menu_options_frontpage' => array(
      'e06751ae02a79d750126985886141c7b' => 'e06751ae02a79d750126985886141c7b',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_frontpage' => 'main-menu:0',
    'menu_options_job' => array(
      'e06751ae02a79d750126985886141c7b' => 'e06751ae02a79d750126985886141c7b',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_job' => 'main-menu:0',
    'menu_options_news' => array(
      'e06751ae02a79d750126985886141c7b' => 'e06751ae02a79d750126985886141c7b',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_news' => 'main-menu:0',
    'menu_options_phone_book' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_phone_book' => 'main-menu:0',
    'menu_options_self_service' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_self_service' => 'main-menu:0',
    'menu_options_slider_element' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_slider_element' => 'main-menu:0',
    'menu_options_subjectpage' => array(
      'e06751ae02a79d750126985886141c7b' => 'e06751ae02a79d750126985886141c7b',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_subjectpage' => 'main-menu:0',
    'menu_options_webform' => array(
      'e06751ae02a79d750126985886141c7b' => 'e06751ae02a79d750126985886141c7b',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_webform' => 'main-menu:0',
    'menu_options_shared' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_shared' => 'main-menu:0',
    'menu_options_borger_dk_article' => array(
      'e06751ae02a79d750126985886141c7b' => 'e06751ae02a79d750126985886141c7b',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_borger_dk_article' => 'main-menu:0',
    'menu_options_volunteer_jobs' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_volunteer_jobs' => 'main-menu:0',
  );
  $domain_variables['designguiden_favrskov_dk'] = array(
    'site_name' => 'Favrskov Kommune',
    'site_mail' => 'info@favrskov.dk',
    'site_slogan' => '',
    'site_frontpage' => 'node/5396',
    'anonymous' => 'Anonymous',
    'admin_theme' => 'seven',
    'date_default_timezone' => 'Europe/Copenhagen',
    'cache' => 1,
    'cache_lifetime' => 3600,
    'maintenance_mode' => 0,
    'maintenance_mode_message' => 'Vi er ved at opdatere Favrskov Kommune. Vi er snart tilbage. Tak for din tålmodighed.',
    'language_default' => 'domain-conf-ignore',
    'menu_main_links_source' => '840a5c39fa8fab01a2631a5de85c2079',
    'menu_secondary_links_source' => 0,
    'menu_options_article' => array(
      '840a5c39fa8fab01a2631a5de85c2079' => '840a5c39fa8fab01a2631a5de85c2079',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_article' => 'main-menu:0',
    'menu_options_bannerlink' => array(
      '840a5c39fa8fab01a2631a5de85c2079' => '840a5c39fa8fab01a2631a5de85c2079',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_bannerlink' => 'main-menu:0',
    'menu_options_banner_element' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_banner_element' => 'main-menu:0',
    'menu_options_factbox' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_factbox' => 'main-menu:0',
    'menu_options_faq' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_faq' => 'main-menu:0',
    'menu_options_frontpage' => array(
      '840a5c39fa8fab01a2631a5de85c2079' => '840a5c39fa8fab01a2631a5de85c2079',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_frontpage' => 'main-menu:0',
    'menu_options_job' => array(
      '840a5c39fa8fab01a2631a5de85c2079' => '840a5c39fa8fab01a2631a5de85c2079',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_job' => 'main-menu:0',
    'menu_options_news' => array(
      '840a5c39fa8fab01a2631a5de85c2079' => '840a5c39fa8fab01a2631a5de85c2079',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_news' => 'main-menu:0',
    'menu_options_phone_book' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_phone_book' => 'main-menu:0',
    'menu_options_self_service' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_self_service' => 'main-menu:0',
    'menu_options_slider_element' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_slider_element' => 'main-menu:0',
    'menu_options_subjectpage' => array(
      '840a5c39fa8fab01a2631a5de85c2079' => '840a5c39fa8fab01a2631a5de85c2079',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_subjectpage' => 'main-menu:0',
    'menu_options_webform' => array(
      '840a5c39fa8fab01a2631a5de85c2079' => '840a5c39fa8fab01a2631a5de85c2079',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_webform' => 'main-menu:0',
    'menu_options_shared' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_shared' => 'main-menu:0',
    'menu_options_borger_dk_article' => array(
      '840a5c39fa8fab01a2631a5de85c2079' => '840a5c39fa8fab01a2631a5de85c2079',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_borger_dk_article' => 'main-menu:0',
    'menu_options_volunteer_jobs' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_volunteer_jobs' => 'main-menu:0',
  );
  $domain_variables['favrskov_dk'] = array(
    'site_name' => 'Favrskov Kommune',
    'site_mail' => 'info@favrskov.dk',
    'site_slogan' => '',
    'site_frontpage' => 'node/2990',
    'anonymous' => 'Anonymous',
    'admin_theme' => 'seven',
    'date_default_timezone' => 'Europe/Copenhagen',
    'cache' => 1,
    'cache_lifetime' => 3600,
    'maintenance_mode' => 0,
    'maintenance_mode_message' => 'Vi er ved at opdatere Favrskov Kommune. Vi er snart tilbage. Tak for din tålmodighed.',
    'language_default' => 'domain-conf-ignore',
    'menu_main_links_source' => 'main-menu',
    'menu_secondary_links_source' => 0,
    'menu_options_article' => array(
      'main-menu' => 'main-menu',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_article' => 'main-menu:0',
    'menu_options_bannerlink' => array(
      'main-menu' => 'main-menu',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_bannerlink' => 'main-menu:0',
    'menu_options_banner_element' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_banner_element' => 'main-menu:0',
    'menu_options_factbox' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_factbox' => 'main-menu:0',
    'menu_options_faq' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_faq' => 'main-menu:0',
    'menu_options_frontpage' => array(
      'main-menu' => 'main-menu',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_frontpage' => 'main-menu:0',
    'menu_options_job' => array(
      'main-menu' => 'main-menu',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_job' => 'main-menu:0',
    'menu_options_news' => array(
      'main-menu' => 'main-menu',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_news' => 'main-menu:0',
    'menu_options_phone_book' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_phone_book' => 'main-menu:0',
    'menu_options_self_service' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_self_service' => 'main-menu:0',
    'menu_options_slider_element' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_slider_element' => 'main-menu:0',
    'menu_options_subjectpage' => array(
      'main-menu' => 'main-menu',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_subjectpage' => 'main-menu:0',
    'menu_options_webform' => array(
      'main-menu' => 'main-menu',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_webform' => 'main-menu:0',
    'menu_options_shared' => array(
      'main-menu' => 'main-menu',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_shared' => 'main-menu:0',
    'menu_options_borger_dk_article' => array(
      'main-menu' => 'main-menu',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_borger_dk_article' => 'main-menu:0',
  );
  $domain_variables['oplev_favrskov_dk'] = array(
    'site_name' => 'Favrskov Kommune',
    'site_mail' => 'info@favrskov.dk',
    'site_slogan' => '',
    'site_frontpage' => 'node/5418',
    'anonymous' => 'Anonymous',
    'admin_theme' => 'seven',
    'date_default_timezone' => 'Europe/Copenhagen',
    'cache' => 1,
    'cache_lifetime' => 3600,
    'maintenance_mode' => 0,
    'maintenance_mode_message' => 'Vi er ved at opdatere Favrskov Kommune. Vi er snart tilbage. Tak for din tålmodighed.',
    'language_default' => 'domain-conf-ignore',
    'menu_main_links_source' => 'e8ad7c3466506a0a1ebe3d063d5837b6',
    'menu_secondary_links_source' => 0,
    'menu_options_article' => array(
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 'e8ad7c3466506a0a1ebe3d063d5837b6',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_article' => 'main-menu:0',
    'menu_options_bannerlink' => array(
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 'e8ad7c3466506a0a1ebe3d063d5837b6',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_bannerlink' => 'main-menu:0',
    'menu_options_banner_element' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_banner_element' => 'main-menu:0',
    'menu_options_factbox' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_factbox' => 'main-menu:0',
    'menu_options_faq' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_faq' => 'main-menu:0',
    'menu_options_frontpage' => array(
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 'e8ad7c3466506a0a1ebe3d063d5837b6',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_frontpage' => 'main-menu:0',
    'menu_options_job' => array(
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 'e8ad7c3466506a0a1ebe3d063d5837b6',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_job' => 'main-menu:0',
    'menu_options_news' => array(
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 'e8ad7c3466506a0a1ebe3d063d5837b6',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_news' => 'main-menu:0',
    'menu_options_phone_book' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_phone_book' => 'main-menu:0',
    'menu_options_self_service' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_self_service' => 'main-menu:0',
    'menu_options_slider_element' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_slider_element' => 'main-menu:0',
    'menu_options_subjectpage' => array(
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 'e8ad7c3466506a0a1ebe3d063d5837b6',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_subjectpage' => 'main-menu:0',
    'menu_options_webform' => array(
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 'e8ad7c3466506a0a1ebe3d063d5837b6',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_webform' => 'main-menu:0',
    'menu_options_shared' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_shared' => 'main-menu:0',
    'menu_options_borger_dk_article' => array(
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 'e8ad7c3466506a0a1ebe3d063d5837b6',
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_borger_dk_article' => 'main-menu:0',
    'menu_options_volunteer_jobs' => array(
      'menu-footer-visit-also' => 0,
      'menu-footer-links' => 0,
      'menu-header-menu' => 0,
      'e06751ae02a79d750126985886141c7b' => 0,
      '840a5c39fa8fab01a2631a5de85c2079' => 0,
      'main-menu' => 0,
      'e8ad7c3466506a0a1ebe3d063d5837b6' => 0,
      'management' => 0,
      'navigation' => 0,
      'user-menu' => 0,
    ),
    'menu_parent_volunteer_jobs' => 'main-menu:0',
  );

  return $domain_variables;
}
