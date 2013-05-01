<html>
<link href="style.css" rel="stylesheet" type="text/css" />
<p>

<div class="content">
<?
// Mirror.
echo "*default host=", htmlspecialchars($_REQUEST['mirror']), "<br />";
// Base
echo "*default base=/var/db <br />";
// Prefix
echo "*default prefix=/usr <br />";
// Tag
echo "*default release=cvs tag=", htmlspecialchars($_REQUEST['tag']), "<br />";
// Compression
echo htmlspecialchars($_REQUEST['compress']), "<br />";
// Collection(s)
foreach ($flags as $key => $value) {
        echo $key, "<br />";
}

?>
</div>
