import java.util.*;

/*
题目描述
有一棵无穷大的满二叉树，其结点按根结点一层一层地从左往右依次编号，根结点编号为1。现在有两个结点a，b。请设计一个算法，求出a和b点的最近公共祖先的编号。

给定两个int a,b。为给定结点的编号。请返回a和b的最近公共祖先的编号。注意这里结点本身也可认为是其祖先。

测试样例：
2，3
返回：1
*/

public class LCA {

    public int getLCA(int a, int b) {
        // write code here
        List<Integer> parenta = findParent(a);
        List<Integer> parentb = findParent(b);

        return findMaxCommon(parenta, parentb);
    }

    private int findMaxCommon(List<Integer> parenta, List<Integer> parentb) {
        int scope = parenta.size() > parentb.size() ?  parentb.size() : parenta.size();
        int maxIndex = 0;
        for (int i = 0; i < scope; i++) {
            if (parenta.get(i).compareTo(parentb.get(i)) == 0)
                maxIndex = i;
        }
//        System.out.println("maxIndex " + maxIndex);
        return parenta.get(maxIndex);
    }

    private List<Integer> findParent(int n) {
        List<Integer> result = new ArrayList<>();
        result.add(n);
        while (n > 1) {
            n /= 2;
            result.add(n);
        }
        Collections.sort(result);
//        System.out.println("result = " + result);
        return result;
    }
}