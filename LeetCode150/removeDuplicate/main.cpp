class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        // Ultimo valor unico
        int lastElement = -999;
        for(int i = 0; i < nums.size(); i++){
          // Se eu acho, um valor que eh diferente do ultimo valor unico
          // a repeticao acabou
          // So que se i eh 5 e k = 1 entao quer dizer que temos 4 repeticoes no meio do caminho
          // Entao como o que eh valido, eh apenas os k primeiros valores do array, entao jogamos o novo valor unico na posicao k
          if (nums[i] != lastElement){
            
            lastElement = nums[i];
            nums[k] = nums[i];
            k++;
          }
            
        }
    }
};


int main(){
  return 0;
}
