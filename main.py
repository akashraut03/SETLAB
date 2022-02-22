#hello world 


import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import os
cars_data = pd.read_csv("Toyota.csv",index_col=0,na_values=["??","????"])
cars_data.dropna(axis = 0, inplace=True)

counts = [979,120,12]
fuelType = ("Petrol","Diesel","CNG")
index = np.arange(len(fuelType))


plt.bar(index, counts, color=['red', 'blue', 'cyan'])



plt.title("Bar plot of fuel types")
plt.xlabel("Fuel Types")
plt.ylabel("Frequency")

plt.xticks(index,fuelType,rotation = 90)


plt.show()
