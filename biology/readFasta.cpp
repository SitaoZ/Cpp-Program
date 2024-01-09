/*
* Created bu Sitao Zhu on 09/01/2024
* parse fasta and filter by length
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct FastaSequence {
    std::string header;  // Fasta序列的标题
    std::string sequence;  // Fasta序列的序列内容
};

// 解析Fasta文件并返回序列向量
std::vector<FastaSequence> parseFastaFile(const std::string& filename) {
    std::ifstream file(filename);  // 打开文件
    std::string line;  // 存储读取的每行内容
    std::vector<FastaSequence> sequences;  // 存储解析后的Fasta序列
    FastaSequence currentSequence;  // 存储当前正在处理的序列

    if (file.is_open()) {  // 如果文件成功打开
        while (std::getline(file, line)) {  // 读取文件中的每一行
            if (line.empty()) {  // 如果是空行，则跳过
                continue;
            }

            if (line[0] == '>') {  // 如果行以">"开头，表示是标题行
                if (!currentSequence.header.empty()) {  // 如果当前序列的标题不为空
                    sequences.push_back(currentSequence);  // 将当前序列添加到序列向量中
                    currentSequence = FastaSequence();  // 重置当前序列
                }
                currentSequence.header = line.substr(1);  // 提取标题内容
            } else {
                currentSequence.sequence += line;  // 将行内容添加到序列内容中
            }
        }
        if (!currentSequence.header.empty()) {  // 处理最后一个序列
            sequences.push_back(currentSequence);
        }
        file.close();  // 关闭文件
    } else {
        std::cerr << "无法打开文件" << std::endl;  // 输出错误信息
    }

    return sequences;  // 返回解析后的Fasta序列
}

// 将Fasta序列写入文件
void writeFastaToFile(const std::string& outputFilename, const std::vector<FastaSequence>& sequences) {
    std::ofstream outFile(outputFilename);  // 打开输出文件
    if (outFile.is_open()) {  // 如果文件成功打开
        for (const auto& sequence : sequences) {  // 遍历序列向量
            outFile << ">" << sequence.header << "\n" << sequence.sequence << "\n"; // 将序列和标题写入文件
        }
        outFile.close();  // 关闭文件
    } else {
        std::cerr << "无法写入文件" << std::endl;  // 输出错误信息
    }
}

int main(int argc, char** argv) {
    if (argc != 3) {  // 检查参数数量
        std::cerr << "用法：" << argv[0] << " <input_file.fasta> <output_file.fasta>" << std::endl;  // 输出用法信息
        return 1;
    }

    std::string inputFilename = argv[1];  // 输入文件名
    std::vector<FastaSequence> fastaSequences = parseFastaFile(inputFilename);  // 解析输入文件

    std::string outputFilename = argv[2];  // 输出文件名
    writeFastaToFile(outputFilename, fastaSequences);  // 写入Fasta序列到输出文件

    std::cout << "成功将处理后的FASTA序列写入 " << outputFilename << std::endl;  // 输出成功信息

    return 0;
}

