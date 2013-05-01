<html>
<link href="style.css" rel="stylesheet" type="text/css" />
<div class="content">
<form action="generate.php" method="get">
<p>Branch : 
<select name="tag"><?createDropDownList($releases);?></select><br />

<p>Mirror :
<select name="mirror"><?createDropDownList($mirrors);?></select><br />

<p>Collection(s) :<br /> 
<?createCheckBoxes($collections);?>

<p>Compression : <br />
<select name="compress"><?createDropDownList($compression);?></select><br />
<input type="submit" value="Generate">
</form>
</div>
</html>
