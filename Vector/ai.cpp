#include <iostream>
#include <vector>
#include <cmath>

class SelfLearningAI
{
private:
    int inputSize;
    int outputSize;
    std::vector<std::vector<double>> weights;

public:
    SelfLearningAI(int inputSize, int outputSize)
    {
        this->inputSize = inputSize;
        this->outputSize = outputSize;
        this->weights.resize(inputSize, std::vector<double>(outputSize, 0.0));
    }

    std::vector<double> predict(const std::vector<double> &inputs)
    {
        std::vector<double> predictions(outputSize, 0.0);
        for (int i = 0; i < inputSize; i++)
        {
            for (int j = 0; j < outputSize; j++)
            {
                predictions[j] += inputs[i] * weights[i][j];
            }
        }
        return predictions;
    }

    void train(const std::vector<std::vector<double>> &inputs, const std::vector<std::vector<double>> &outputs, int epochs)
    {
        for (int epoch = 0; epoch < epochs; epoch++)
        {
            for (int k = 0; k < inputs.size(); k++)
            {
                std::vector<double> predictions = predict(inputs[k]);
                std::vector<double> error(outputSize, 0.0);
                for (int j = 0; j < outputSize; j++)
                {
                    error[j] = outputs[k][j] - predictions[j];
                }

                for (int i = 0; i < inputSize; i++)
                {
                    for (int j = 0; j < outputSize; j++)
                    {
                        double adjustment = inputs[k][i] * error[j];
                        weights[i][j] += adjustment;
                    }
                }
            }
        }
    }
};

int main()
{
    int inputSize = 2;
    int outputSize = 1;

    // Training data
    std::vector<std::vector<double>> inputs = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
    std::vector<std::vector<double>> outputs = {{0}, {1}, {1}, {0}};

    // Create and train the AI
    SelfLearningAI ai(inputSize, outputSize);
    ai.train(inputs, outputs, 1000);

    // Test the AI
    std::vector<std::vector<double>> testInputs = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
    for (const auto &input : testInputs)
    {
        std::vector<double> predictions = ai.predict(input);
        for (double prediction : predictions)
        {
            std::cout << prediction << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
