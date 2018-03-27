//
// Created by lh on 2018/3/11.
//

class Solution {
public:
    void replaceSpace(char *str,int length) {
        if(str == nullptr)
            return;
        int orighnlen = 0;
        int spacelen = 0;

        int i = 0;
        while (str[i] != '\0'){
            ++orighnlen;
            if(str[i] == ' '){
                spacelen++;
            }
            i++;
        }

        int newlen = spacelen*2 + orighnlen;
        if(newlen+1 > length)
            return;

        int indexoforign = orighnlen;
        int indexofnew = newlen;

        while (indexoforign>=0&& indexofnew > indexoforign){
            if(str[indexoforign] == ' '){
                str[indexofnew--] = '0';
                str[indexofnew--] = '2';
                str[indexofnew--] = '%';
            }
            else{
                str[indexofnew--] = str[indexoforign];
            }
            --indexoforign;
        }
    }
};