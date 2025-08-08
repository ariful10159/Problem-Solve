import pandas as pd

# Create a simple DataFrame
data = {
    'Name': ['Alice', 'Bob', 'Charlie'],
    'Age': [25, 30, 35],
    'City': ['New York', 'Los Angeles', 'Chicago']
}

df = pd.DataFrame(data)

# Display the DataFrame
print("Original DataFrame:")
print(df)

# Add a new column
df['Salary'] = [50000, 60000, 70000]

print("\nDataFrame after adding a new column:")
print(df)

# Filter rows where Age > 28
filtered_df = df[df['Age'] > 28]

print("\nFiltered DataFrame (Age > 28):")
print(filtered_df)
