<?
/*
	Procedures live here.
*/

function errout() {
   die("Eek!");
}

// Take an array of key/value pairs, and turn it into "options" drop down list.
function createDropDownList($arr) {
   foreach ($arr as $key => $value) {
       echo "<option value=\"$key\">$value</option>\n";
   }
}

// Take an array of key/value pairs, and turn it into checkbox.
function createCheckBoxes($arr) {
   foreach ($arr as $key => $value) {
       echo "<input type=\"checkbox\" name=\"$key\" value=\"1\">$value<br />\n";
   }
}

// Error page.
function errorPage($reason) {
   global $hostname;
   echo('<link href="style.css" rel="stylesheet" type="text/css" />');
   echo("<div class=\"content\"><p>$reason<br />");
   echo("<a href=\"http://$hostname\">Return</a>");
   die();
}

?>
