/*
Description:

Kevin is noticing his space run out! Write a function that
removes the spaces from the values and returns an array showing the space decreasing.

For example, running this function on the array ['i', 'have','no','space']
would produce ['i','ihave','ihaveno','ihavenospace']
*/


class OutOfSpace {

    public static String[] spacey(String[] array) {
        String[] res = new String[array.length];
        for (int i = 0; i < res.length; ++i) {
            res[i] = "";
            for (int j = 0; j <= i; j++) {
                res[i] += array[j];
            }
        }
        return res;
    }

}