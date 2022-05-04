<?PHP
session_start();
require('php/functions.php');
?>

<html>
	<head>
		<link rel="stylesheet" href="css/index.css" media="screen" type="test/css" />
		<title>Page Title</title>
	</head>
	<body>
		
		<form method="post" action="" >
			<label>Username</label>
			<input type="text" id="username" name="username" required />
			<label>Password</label>
			<input type="password" id="password" name="password" required />
			<input type="submit" id="submit" value="Login" />
		</form>
		
		<h1>This is a Heading</h1>
		<p>This is a paragraph.</p>
		<script src="js/index.js" ></script>

	</body>
</html>

<?PHP 
if(isset($_POST['username'])&&isset($_POST['password']))
?>
