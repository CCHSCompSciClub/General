<?PHP
session_start();require('functions.php');
if(empty($_SESSION['authority'])){echo '<div onload="window.location.href=`index.php`" ></div>';}
?>
<html>
  <head>
  
  
  
  </head>
  <body>
    <header>
      <h1>
        Main Page
      </h1>
    </header>
    <p>
    This is the main page!
    
    </p>
  
  
  
  
  
  
  </body>

</html>
