import xlrd as xd
data =xd.open_workbook ('...../data1.xlsx') #打开excel表所在路径
sheet = data.sheet_by_name('Sheet1')  #读取数据，以excel表名来打开
d = []
for r in range(sheet.nrows): #将表中数据按行逐步添加到列表中，最后转换为list结构
    data1 = []
    for c in range(sheet.ncols):
        data1.append(sheet.cell_value(r,c))
    d.append(list(data1))

print(d)

