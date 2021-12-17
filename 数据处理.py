score = []
total = 0
count = 0
with open("D:\zuoye\log.txt") as file:
    lines = file.readlines()
    for line in lines:
        # print(line)
        # break
        if "total_loss:" in line:
            line = line.split("total_loss:")
            line2 = line[1]
            line3 = line2[1:7]
            if float(line3) < 10:
                score.append(line3)
    for i in score:
        total += float(score[count])
        count += 1
        average = total/count
print(average)



