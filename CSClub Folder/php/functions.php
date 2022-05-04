<?php
function encode($input)
{
    $encode1 = base64_encode($input);
    $encode2 = base64_encode($encode1);
    $encode3 = base64_encode($encode2);
return $encode3;
}
function decode($input)
{
    $decode1 = base64_decode($input);
    $decode2 = base64_decode($decode1);
    $decode3 = base64_decode($decode2);
return $decode3;
}
function e($output)
{
    echo $output;
}
function iseven($number)
{
    if($number%2==0){
        $return = True;
    }
    else{
        $return = False;
    }
    return $return;
}
function getIP()
{
    if(!empty($_SERVER['HTTP_CLIENT_IP']))
    {
        $ip = $_SERVER['HTTP_CLIENT_IP'];
    }
    elseif(!empty($_SERVER['HTTP_X_FORWARDED_FOR']))
    {
        $ip = $_SERVER['HTTP_X_FORWARDED_FOR'];
    }
    else
    {
        $ip = $_SERVER['REMOTE_ADDR'];
    }
    return $ip;
}
?>
