<li class="nav__menu-item"><a href='{dede:field name="typeurl"/}'><span>{dede:field name="typename"/}</span></a>
                  

            <div class="nav__menu-items" id="nav__menu-items" data-id="{dede:field name='id'/}"  >

               {dede:sql sql="SELECT typename,typedir,defaultname FROM dede_arctype where reID =~id~  ORDER BY sortrank ASC " }  
               <a href="[field:typedir function='str_replace("{cmspath}","",@me)'/]/[field:defaultname/]">[field:typename/]</a>
                {/dede:sql} 
        
              </div>
 
        </li>