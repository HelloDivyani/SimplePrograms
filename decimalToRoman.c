/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*you are required to complete 
this function*/
void convertToRoman(int num) 
{
    // 1to 3999
    string o[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string t[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string h[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string th[]={"","M","MM","MMM"};
    string tho=th[num/1000];
  // printf("%d %s",num/1000,th[2]);
   string hun=h[(num%1000)/100];
   string tens=t[(num%100)/10];
   string ones=o[(num%10)];
   //printf("%s %s %s %s",tho,hun,tens,ones);
   
   string ans=tho+hun+tens+ones;
  // printf("%s",ans);
 //   string ans="hello";
 cout << ans;
//Your code here
}
