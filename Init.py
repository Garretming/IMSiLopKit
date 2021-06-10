'''
Author: your name
Date: 2019-03-08 15:17:28
LastEditTime: 2021-06-10 15:49:40
LastEditors: Please set LastEditors
Description: In User Settings Edit
FilePath: /IMSiLopKit/pod_auto_script/gitInit.py
'''
#!/usr/bin/evn python3
#coding=utf-8
import os
import sys

def parseArgument():
  # 1、提交仓库组名 2、项目名 3、提交消息备注
    argus = []
    for i in range(0,len(sys.argv)):
        #  print(sys.argv[i])
         argus.append(sys.argv[i])

    return argus

if __name__ == '__main__':
    argus = parseArgument()
    path =os.getcwd()
    count = 0
    for k, v in enumerate(argus):
        # print k, v
        count = count + 1
    if count >2 and count >=4 :
        #消息备注
        mes = argus[1]
          # 仓库组名
        store = argus[2]
        # 项目名
        name = argus[3] 
        
    else:
         #消息备注
        mes = "没有备注"
        # 仓库组名
        store = "Garretming"
        # 项目名
        name = os.path.basename(path)
       
      
    

    # os.system('git remote add origin git@gitlab.com:' + store +'/' + name +'.git')
    os.system('rm -rf .git')
    os.system('git init')

    os.system('curl -u Garretming -d \'{"name":"IMSiLopKit","description":"IMSiLopKit is a ui for slg games"}\' https://api.github.com/user/repos')

    os.system('git remote add origin git@github.com:Garretming/IMSiLopKit.git')
    # os.system('git submodule add git@github.com:Garretming/csb2csd.git csb2csd')
    # os.system('git submodule add git@gitlab.com:Clark8/apktool.git apktool')
    # os.system('git submodule add https://github.com/cloudwu/skynet.git skynet')
    # os.system('git submodule add https://github.com/simongog/sdsl-lite.git 3rd/sdsl-lite')
    # os.system('git submodule add https://github.com/driedfruit/jenkins-minimal-perfect-hash.git 3rd/perfect-hash')
    # os.system('git submodule add https://github.com/mpx/lua-cjson.git 3rd/cjson')
    # os.system('git submodule add https://github.com/cloudwu/pbc.git 3rd/pbc')
    
    
    os.system('git add .gitignore')
    # os.system('git pull --rebase')
    os.system('git commit -m ' + '\"' + mes + '\"')
    # os.system('git stash')
    os.system('git push -u origin master')







