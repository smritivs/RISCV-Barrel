with open("./scripts/mt_cpu.v","w") as file:
    with open("./scripts/file_list.txt","r") as file1:
        lines = file1.readlines()

        for i in lines:
            with open(i.strip(),"r") as file2:
                cont = file2.read()
                file.write(cont)
                file.write("\n")
