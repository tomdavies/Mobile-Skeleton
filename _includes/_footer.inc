<!--Start footer include-->
<footer role="contentinfo">
</footer>

<!-- Scripts - cat together on server -->
<script src="js/libs/jquery-1.6.2.min.js"></script>
<script src="js/plugins.js"></script>
<script src="js/script.js"></script>
<script src="js/mylibs/helper.js"></script>

<script>
// iOS scale bug fix
MBP.scaleFix();
// Respond.js
yepnope({
	test : Modernizr.mq('(only all)'),
	nope : ['/js/libs/respond.min.js']
});
</script>
<!-- google analytics - remove if not required -->
<script>
var _gaq=[['_setAccount','UA-XXXXX-X'],['_trackPageview']]; // Change UA-XXXXX-X to be your site's ID
(function(d,t){var g=d.createElement(t),s=d.getElementsByTagName(t)[0];g.src=('https:'==location.protocol?'//ssl':'//www')+'.google-analytics.com/ga.js';s.parentNode.insertBefore(g,s)}(document,'script'));
</script>
</body>
</html>