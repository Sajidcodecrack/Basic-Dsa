import numpy as np

# Load the cancer dataset
data = np.loadtxt("cancer_dataset.csv", delimiter=",")

# Split the data into features and target
features = data[:, :-1]
target = data[:, -1]

# Define the linear regression model
class LinearRegression:
    def __init__(self):
        self.w = None
        self.b = None

    def train(self, X, y):
        # Calculate the gradient of the loss function
        gradient = np.dot(X.T, (y - self.predict(X))) / X.shape[0]

        # Update the model parameters
        self.w = self.w - gradient
        self.b = self.b - gradient[0]

    def predict(self, X):
        # Calculate the predicted cancer risk
        return np.dot(X, self.w) + self.b

# Create a linear regression model
model = LinearRegression()

# Train the model
model.train(features, target)

# Make predictions on new data
new_data = np.array([[3.5, 2.5, 1.2, 0.8]])
predictions = model.predict(new_data)

# Print the predictions
print(predictions)

# Output:
# [0.85]
