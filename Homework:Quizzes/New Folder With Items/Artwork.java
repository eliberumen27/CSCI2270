

/**
 * This program uses AscII text to display an Image
 *
 * @author Tristian Ruiz
 * @version 9/14/17
 */
public class Artwork
{
    public static void main(String [ ] args)
    {
        //local variables
        String row01 = "                                                                                                                                                      ";
        String row02 = "                                                                                                                                                      ";
        String row03 = "                                                                                                                                                      ";
        String row04 = "                                                                                                                                                      ";
        String row05 = "                                                                                                                                                      "; 
        String row06 = "                                                                                                                                                      ";  
        String row07 = "                                                `////////////`        ./////////                                                                      "; 
        String row08 = "                                                -MMMMMMMMMMMM-        +MMMMMMMMm                                                                      "; 
        String row09 = "                                                -MMMMMMMMMMMMmddddd/  `--oMMMMMMddd                                                                   "; 
        String row10 = "                                                 .ddddddMMMMMMMMMMMMs-----oMMMMMMMMM------`                                                           "; 
        String row11 = "                                                        MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM-                                                           "; 
        String row12 = "                               syyyyyyyy:               MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMhyy-                                                        "; 
        String row13 = "                               mMMMMMMMMo.....`         mmmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+.....`                                                  "; 
        String row14 = "                               mMMMMMMMMNNNNNNy         ```NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNNNNNo                                                  "; 
        String row15 = "                               +oomMMMMMMMMMMMmooooo+   oooNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMdoo/                                               "; 
        String row16 = "                                  dMMMMMMMMMMMMMMMMMN```MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMh```                                            "; 
        String row17 = "                                  dMMMMMMMMMMMMMMMMMMmmmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmmy                                            "; 
        String row18 = "                                  oyymMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm//:                                         "; 
        String row19 = "                                     yNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm                                         "; 
        String row20 = "                                     .::yMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm                                         "; 
        String row21 = "                                        +ddmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN---                                      "; 
        String row22 = "                                           +MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM                                      "; 
        String row23 = "                                           +MMMMMMMMMMMM//////mMMMMMMMMMMMMMMm/////////NMMMMMMMMMMMMMMMMMMMMMMMM                                      "; 
        String row24 = "                                         ``oMMMMMMNNNNNN      dMMNNNNNNNNNNNNh      ```NMMMMMMMMMMMMMMMMMMMMMMMM```                                   "; 
        String row25 = "                                        sMMMMMMMMd            dMM/                  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.                                  "; 
        String row26 = "                                        :oooooyMMd            +oo.                  ooooooooooooooooooyMMMMMMMMMMMM.                                  "; 
        String row27 = "                                              /MMd                                                    /MMMMMMMMMMMM.                                  "; 
        String row28 = "                                              /MMd                                                    /MMMMMMMMMMMMNmm-                               "; 
        String row29 = "                                              /MMd  `///////////////.                                 /MMMMMMMMMMMMhyy.                               "; 
        String row30 = "                                              /MMd  .MMMMMMMMMMMMMMM+                                 /MMMMMMMMMMMM.                                  "; 
        String row31 = "                                              /MMd   ---------------.               ddddddddd:        /MMMMMMMMMMMMddd.                               "; 
        String row32 = "                                        .--.  /MMd                               ---ddddddddd+--`     /MMMMMMMMMMMMMMM-                               "; 
        String row33 = "                                        sMMs  /MMd                              `MMM         yMM+     /MMMMMMMMMMMMMMM-                               "; 
        String row34 = "                                     +ssmMMs  /MMd                              `+++         :++.     .++oMMMMMM++++++sss-                            "; 
        String row35 = "                                  ```hMMNNNo  /MMd      `````````                   `````````          ``:MMMMMM      dMM/                            "; 
        String row36 = "                                  hNNMMMo```  /MMd      NNNNNNNNN:                  NNNNNNNNN:        :NNNMMMMMM      dMM/                            "; 
        String row37 = "                            ++++++mMMhss-     /MMd      MMMMMMyss-                  MMMMMMyss-        /MMNssssss      dMM/                            "; 
        String row38 = "                            MMMMMMMMM/        /MMd      MMMMMM-                     MMMMMM-           /MMd            dMM/                            "; 
        String row39 = "                            ......dMMNmm/     /MMd      MMMMMM-                     MMMMMM-           `..`         dmm:..`                            "; 
        String row40 = "                                  ohhNMM+     /MMd      MMMMMMo::`  .::.            MMMMMMo::`               ::::::yhh.                               "; 
        String row41 = "                                     yMM+     /MMd      MMMMMMMMM/  sMMs            MMMMMMMMM/              .MMMMMM.                                  "; 
        String row42 = "                                     yMM+     /MMd      :::::::::shho::.            :::::::::`           .hhy::::::                                   "; 
        String row43 = "                                     odd/     /MMd               yMM+                                    -MMN---                                      "; 
        String row44 = "                                     ```      /MMd               yMM+                                    -MMMNNN                                      "; 
        String row45 = "                                              /MMNsso            yMMdsssss/     `ssssssssssss-           -MMMMMMsss`                                  "; 
        String row46 = "                                              :mmNMMm            smmmmmmmms   ..-MMMmmmMMMNmm/..`     `../MMMMMMmmm`                                  "; 
        String row47 = "                                              `../MMm            `........`  -mmmMMM...NMM/..ymm/     :mmNMMMMMM...                                   "; 
        String row48 = "                                                 -MMN+++      /+++++++++++++++ssyMMM   mMM-  yMM+     /MMMMMMMMM++++++`                               "; 
        String row49 = "                                                 -NNNMMM   ```hNNNNNMMMMNNNMMd  .MMM   mMM-  yMM+   ``/MMMMMMMMMNNNNNN-                               "; 
        String row50 = "                                                 `--:MMM   hdd/-----yMMy--oMMd  .MMM   mMM-  yMM+  /ddmMMMMMMMMM------`                               "; 
        String row51 = "                                                    .MMM:::yhh/:::::yMMy::oMMm::/MMM:::NMM+::shho::ohhhhhhhhhhhh                                      "; 
        String row52 = "                                                    .MMMMMM.  dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM/  sMMs                                                  "; 
        String row53 = "                                                     ::::::yhh+:::::::::::::::::::::::::::mMMdhho::.                                                  "; 
        String row54 = "                                                           dmm:..`                  ......dMMMMM+                                                     "; 
        String row55 = "                                                              dMM/                  MMMMMMMMMMMM+                                                     "; 
        String row56 = "                                                              /++oss-        .ssssssMMMMMMMMMMMM+                                                     "; 
        String row57 = "                                                                 yMMo````````:MMMNNNNNNNNNNNNMMMo``````                                               "; 
        String row58 = "                                                                 yMMNNNNNNNNNNMMN````````````hMMNNNNNNs                                               "; 
        String row59 = "                                                        +++++++++dMMdssssssssssso            +sssssssso++++++++++++`                                  "; 
        String row60 = "                                                        +++++++++dMMdssssssssssso            +sssssssso++++++++++++`                                  "; 
        String row61 = "                                                        MMMMMMMMMMMM+                                 /MMMMMMMMMMMM.                                  "; 
        String row62 = "                                                 .dddddd------------`                                 `-----:MMMMMMdddddd:                            "; 
        String row63 = "                                                 -MMMMMM::::::::::::::::::::::::::::::::::::::::::::::::::::/MMMMMMMMMMMMo::.                         "; 
        String row64 = "                                                 -MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM+                         "; 
        String row65 = "                                                 `//////////////////////////////////////////////////////////////////////////.                         ";         
        
        
        //print ASCII art
        System.out.print(row01 + "\n");
        System.out.print(row02 + "\n");
        System.out.print(row03 + "\n");
        System.out.print(row04 + "\n");
        System.out.print(row05 + "\n");
        System.out.print(row06 + "\n");
        System.out.print(row07 + "\n");
        System.out.print(row08 + "\n");
        System.out.print(row09 + "\n");
        System.out.print(row10 + "\n");
        System.out.print(row11 + "\n");
        System.out.print(row12 + "\n");
        System.out.print(row13 + "\n");
        System.out.print(row14 + "\n");
        System.out.print(row15 + "\n");
        System.out.print(row16 + "\n");
        System.out.print(row17 + "\n");
        System.out.print(row18 + "\n");
        System.out.print(row19 + "\n");
        System.out.print(row20 + "\n");
        System.out.print(row21 + "\n");
        System.out.print(row22 + "\n");
        System.out.print(row23 + "\n");
        System.out.print(row24 + "\n");
        System.out.print(row25 + "\n");
        System.out.print(row26 + "\n");
        System.out.print(row27 + "\n");
        System.out.print(row28 + "\n");
        System.out.print(row29 + "\n");
        System.out.print(row30 + "\n");
        System.out.print(row31 + "\n");
        System.out.print(row32 + "\n");
        System.out.print(row33 + "\n");
        System.out.print(row34 + "\n");
        System.out.print(row35 + "\n");
        System.out.print(row36 + "\n");
        System.out.print(row37 + "\n");
        System.out.print(row38 + "\n");
        System.out.print(row39 + "\n");
        System.out.print(row40 + "\n");
        System.out.print(row41 + "\n");
        System.out.print(row42 + "\n");
        System.out.print(row43 + "\n");
        System.out.print(row44 + "\n");
        System.out.print(row45 + "\n");
        System.out.print(row46 + "\n");
        System.out.print(row47 + "\n");
        System.out.print(row48 + "\n");
        System.out.print(row49 + "\n");
        System.out.print(row50 + "\n");
        System.out.print(row51 + "\n");
        System.out.print(row52 + "\n");
        System.out.print(row53 + "\n");
        System.out.print(row54 + "\n");
        System.out.print(row55 + "\n");
        System.out.print(row56 + "\n");
        System.out.print(row57 + "\n");
        System.out.print(row58 + "\n");
        System.out.print(row59 + "\n");
        System.out.print(row60 + "\n");
        System.out.print(row61 + "\n");
        System.out.print(row62 + "\n");
        System.out.print(row63 + "\n");
        System.out.print(row64 + "\n");
        System.out.print(row65 + "\n");
        }
} 
