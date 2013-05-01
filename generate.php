<?
/*
        Generate configuration based on passed parameters.
*/

include_once("config.inc");
include_once("functions.inc");

// Make sure we've got some info passed.
if ( $_REQUEST['compress'] && $_REQUEST['tag'] && $_REQUEST['mirror'] ) {

   // Build up the "flags".
   foreach ($_REQUEST as $key => $value)
      if($value == 1) {
         $flags[$key] = $value;
   }

   if ( count($flags) < 1 ) {
   errorPage("You probably wanted at least 1 source collection.");
   }

   include_once("html/result.html.inc");

} else {

   errorPage("Missing information.");

}

?>
