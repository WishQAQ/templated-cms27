function setHomePage(){
    var url = 'http://vip.gbicom.cn'; 
    if (document.all){ 
        document.body.style.behavior='url(#default#homepage)';
        document.body.setHomePage(url); 
    }else if (window.sidebar){ 
        if(window.netscape){
            try{ 
                netscape.security.PrivilegeManager.enablePrivilege("UniversalXPConnect"); 
            }catch (e){
            } 
        } 
        var prefs = Components.classes['@mozilla.org/preferences-service;1'].getService(Components. interfaces.nsIPrefBranch); 
        prefs.setCharPref('browser.startup.homepage',url); 
    }else{

    } 
}
//var callFn2=function(){
//	location.href="/searchBrand/name/"+eval(getCookie('brandName'));
//}
var callFn1=function(){
	$.get("/formShowSuccess",'',function(r2){
		easyDialog.open({
			container : {content : r2,yesFn : true,noFn : true}
		});
	});
};
function openwin() {
	$.get("/formShow",'',function(r){
		easyDialog.open({
		  container : {
		    content : r,
		    yesFn : true,
		    noFn : true
		  }
		});
		var names= ($('#indexSearchInput').val() && $('#indexSearchInput').val()!='请输入商标名称；中文/英文/数字均可') ? $('#indexSearchInput').val() : $('.search_key #inputName').val();
		$('#brandName').val(names);$('#hiddenCate').val() && $('#brandCate').val($('#hiddenCate').val());
	},'html');
 }
function openKefu(){
	 var iTop = (window.screen.availHeight - 30 - 600) / 2;var iLeft = (window.screen.availWidth - 10 - 800) / 2;
	 window.open("http://webchart.gbicom.cn/LR/Chatpre.aspx?id=KJI83683011&lng=cn&e=vip.gbicom.cn" ,'newwindow', 'height=600, width=800,toolbar=no, menubar=no, scrollbars=no, resizable=no,location=n o, status=no,top=' + iTop + ',left=' + iLeft);
}
function getCookie(c_name){
	if (document.cookie.length>0){
		c_start=document.cookie.indexOf(c_name + "=")
		if (c_start!=-1){
		    c_start=c_start + c_name.length+1 
		    c_end=document.cookie.indexOf(";",c_start)
		    if (c_end==-1) c_end=document.cookie.length
		    return unescape(document.cookie.substring(c_start,c_end))
		}
	}
	return "";
}
function setCookie(c_name,value,expiredays){
	var exdate=new Date()
	exdate.setDate(exdate.getDate()+expiredays)
	document.cookie=c_name+ "=" +escape(value)+((expiredays==null) ? "" : ";expires="+exdate.toGMTString())
}
function checkFrom(){
	var brandName = eval(getCookie('brandName'));
	if(brandName && brandName != undefined){
		return brandName;
	}else{
		return false;
	}
}
$(function(){
	var speed = 200;
	$("#nav>li").bind("mouseover",function(){
		$("#nav>li").not('li.noremove').removeClass("current")
		$(this).addClass("current");
	});
	$('.topNav').bind('mouseout',function(){
		$("#nav>li").not('.noremove').removeClass("current")
	});
	
	$('.li_3').bind('mouseover',function () {
		$('.li_3_content').show();
	});
	$('.li_3').bind('mouseout',function () {
		$('.li_3_content').hide();
		$("#nav>li").not('li.noremove').removeClass("current")
	});
		
	$('.showerweima').mouseover(function(){
	    $('.weixin01').fadeIn(200);
	}).mouseout(function(){
	    $('.weixin01').fadeOut();
	});

	$('#buttonSub').bind('click',function(){
		 var isMobile=/^(1[3|4|5|7|8])\d{9}$/;
		 if(!isMobile.test($('#mobile').val())){
			 alert('请输入正确的手机号码！');return false;
		 }
		 if(!$('#userName').val()){
			 alert('请输入您的姓名！');return false;
		 }
		 $.post("{:U('/saveData')}",$('#userSubForm').serialize(),function(r){
			 if(r.st){
				 var tourl = $('#toUrl').val();
				 if(tourl && tourl!= undefined){
					 location.href="/index/"+tourl+"/name/"+$('#brandName').val();
				 }
			 }
		 },'json');
	});
	
})
function toSubData(){
	var isMobile=/^(1[3|4|5|7|8])\d{9}$/;
	 if(!isMobile.test($('#mobile').val())){
		 alert('请输入正确的手机号码！');return false;
	 }
	 if(!$('#userName').val()){
		 alert('请输入您的姓名！');return false;
	 }
	 $('#subF').attr('disabled','disabled');
	 $.post('/saveData',$('#userSubForm').serialize(),function(r){
		 if(r.st){
			 easyDialog.close();
			 callFn1();
		 }else{
			 alert('提交失败，请重新提交');
			 $('#subF').removeAttr('disabled');
			 return false;
		 }
	 },'json');
}

var toSearchPage=function(){
	var urlto = '/searchBrand/name/'+eval(getCookie('brandName'));
	window.open(urlto);
};

