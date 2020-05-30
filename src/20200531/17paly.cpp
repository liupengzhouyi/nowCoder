//
// Created by 刘鹏 on 5/31/2020.
//

//
// Created by 刘鹏 on 5/31/2020.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <list>
using namespace std;

class item {
    int inedx;
    std::string dir;
    std::string name;
    std::string number;

public:
    item() {}

    int getInedx() const {
        return inedx;
    }

    void setInedx(int inedx) {
        item::inedx = inedx;
    }

    const std::string &getDir() const {
        return dir;
    }

    void setDir(const std::string &dir) {
        item::dir = dir;
    }

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        item::name = name;
    }

    const std::string &getNumber() const {
        return number;
    }

    void setNumber(const std::string &number) {
        item::number = number;
    }
};

int paly17()
{
    std::string a, b;
    std::list <item> myList;
    int index = 0;
    while(std::cin >> a) {
        std::cin >> b;
        /*if (b == "0001") {
            break;
        }*/
        if (index > 8) {
            myList.pop_back();
            index = index -1;
        }
        std::string name = "";
        for (int i = a.length(); i > 0; i--) {
            if (a[i] == '\\') {
                break;
            } else {
                name = a[i] + name;
            }
        }
        std::string newName = "";
        if (name.length() > 16) {
            for (int i = name.length() - 16 - 1; i < name.length(); i++) {
                newName = newName + name[i];
            }
        } else {
            newName = name;
        }
        item temp = item();
        temp.setDir(a);
        temp.setNumber(b);
        temp.setName(newName);
        temp.setInedx(1);
        // std::cout << temp.getName() << " " << temp.getNumber() << " " << temp.getInedx() << std::endl;
        std::list<item>::iterator iter1;
        bool key = false;
        for(iter1 = myList.begin(); iter1 != myList.end() ;iter1++)
        {
            if (iter1->getName() == temp.getName()) {
                if (iter1->getNumber() == temp.getNumber()) {
                    iter1->setInedx(iter1->getInedx() + 1);
                    key = true;
                }
            }
        }
        if (key == false) {
            myList.push_front(temp);
            index = index + 1;
        }
        // std::list<item>::iterator iter1;
        /*for(iter1 = myList.begin(); iter1 != myList.end() ;iter1++)
        {
            std::cout << iter1->getName() << " " << iter1->getNumber() << " " << iter1->getInedx() << std::endl;
        }*/
    }
    myList.pop_back();
    std::list<item>::reverse_iterator iter1;
    for(iter1 = myList.rbegin(); iter1 != myList.rend() ;iter1++)
    {
        string aaa = iter1->getName() + " " + iter1->getNumber() + " " + to_string(iter1->getInedx());
        cout << aaa << endl;
    }
    return 0;
}





/*

C:\gtu\vcy\jk\zwthkipl 636
G:\rsle\lsax\yalcxu\vwhysms 637
F:\fzqz 640
E:\lswb\styce\thjnbxdvg 645
F:\up\qflvvayylipvj 635
C:\pivw\rkd 644
E:\tlkbjb\pcvnvm\qh\fzqz 633
E:\ezke\xvrdkuesnjerakzhs 641
E:\qflvvayylipvj 639
F:\ybpxk 644
G:\rfdr\faxpyhyznsssbo 630
E:\xktax\osekgaqy 646
C:\te 633
G:\albed\ffc\jclzfq\h 631
F:\zsshil\pkue\mazocurlwufmkkrw 635
E:\dmj\uefo\syabgm\qflvvayylipvj 643
F:\pgdiwvceluyzft 634
D:\xiqck\dta\lnh 639
E:\nu\nz\wwjpch\fzqz 650
E:\gfsahypjzwfglvou 644
G:\qh\thjnbxdvg 641
C:\cp\voause\mf\hebgpyzpyyybiywpv 632
E:\de\vet\vdooytekbghohqz 631
E:\cox\pvg\tlrlr 640
G:\hkc\fllkwmwlgiqahxbfs 638
E:\apjnogffvkwnv 637
F:\wgotle\ar\wgh\hebgpyzpyyybiywpv 639
F:\wgotle\ar\wgh\hebgpyzpyyybiywpv 639
G:\nrekjavm 634
C:\mvngfg\lfjnvz\xvrdkuesnjerakzhs 634
F:\exne\vh\kqh\fzqz 641
F:\lepvz 642
G:\qg\hcbh\uknyte\pgdiwvceluyzft 636
F:\ho\cn\uyobrilaabapini 637
E:\xbc\fzqz 642
G:\ju\nmdd\fzqz 643
G:\lzpmdx\rxp\ybpxk 629
D:\fc\lnh 629
D:\dsgvo\zwthkipl 631
G:\pujc\cgorfjzkqmnjathbiip 640
G:\vfhyp\cs\rrt 638
F:\oteh\ti\urajfw\tlrlr 636
C:\crdp\qwptjlorrmnv 642
D:\kcl\fqzs\zlm\pgdiwvceluyzft 640
G:\faxpyhyznsssbo 639
D:\swnhezhgdcwwbmkyqt 637
D:\azo\sry\faxpyhyznsssbo 633
C:\beqt\eh\dm\dlhehjccfdgrrzyj 642
F:\lepvz 635
 */