package com.bsuir.ppvis;

import org.junit.Test;
import com.bsuir.ppvis.task.BinaryTree;

import java.io.File;
import java.io.FileNotFoundException;


import static org.junit.Assert.*;

/**
 * @details Helper class that contains UnitTests
 */
public class BinaryTreeTest {
    private final String SEPARATOR = File.separator;
    private final String PATH = "C:" + SEPARATOR + "Users" + SEPARATOR + "nikit" + SEPARATOR + "OneDrive" + SEPARATOR + "Desktop" + SEPARATOR + "test.txt";

    /**
     * Checks the adding to the right subtree
     */
    @Test
    public void addRightTest() {
        BinaryTree addTest = new BinaryTree("cat", "кот");
        addTest.add("odin", "один");
        assertEquals("odin", addTest.getRoot().getRight().getKey());
    }

    /**
     * Checks the adding to the left subtree
     */
    @Test
    public void addLeftTest() {
        BinaryTree addTest = new BinaryTree("odin", "один");
        addTest.add("cat", "кот");
        assertEquals("cat", addTest.getRoot().getLeft().getKey());
    }

    /**
     * Checks the getting an info from the null node
     */
    @Test(expected = NullPointerException.class)
    public void addTestNegative() {
        BinaryTree addTest = new BinaryTree("cat", "кот");
        addTest.add("odin", "один");
        addTest.getRoot().getLeft().getInfo();
    }


    @Test
    public void searchTestPositive() {
        BinaryTree searchTest = new BinaryTree();
        searchTest.add("cat", "кот");
        searchTest.add("dog", "собака");
        searchTest.add("pig", "свинья");
        assertEquals("кот", searchTest.search("cat"));
    }

    @Test
    public void searchTestNegative() {
        BinaryTree searchTest = new BinaryTree();
        searchTest.add("cat", "кот");
        searchTest.add("dog", "собака");
        searchTest.add("pig", "свинья");
        assertNull(searchTest.search("noga"));
    }

    /**
     * Checks the getting of the words written by caps
     */
    @Test
    public void searchTestCaps() {
        BinaryTree searchTest = new BinaryTree();
        searchTest.add("cat", "кот");
        searchTest.add("DOG", "СОБАКА");
        searchTest.add("pig", "свинья");
        assertEquals("собака", searchTest.search("dog"));
    }

    /**
     * Checks rewriting of the dictionary
     */
    @Test
    public void rewriteTestPositive() {
        BinaryTree rewriteTest = new BinaryTree();
        rewriteTest.add("pig", "свинья");
        rewriteTest.add("cat", "кот");
        rewriteTest.add("dog", "собака");
        rewriteTest.rewrite("pig", "машина");
        assertTrue(rewriteTest.search("pig") == "машина");
    }

    /**
     * Checks the rewriting function with the key written by caps
     */
    @Test
    public void rewriteTestCaps() {
        BinaryTree rewriteTest = new BinaryTree();
        rewriteTest.add("pig", "свинья");
        rewriteTest.add("cat", "кот");
        rewriteTest.add("dog", "собака");
        rewriteTest.rewrite("DOG", "мопс");
        assertEquals("мопс", rewriteTest.search("dog"));
    }

    /**
     * Checks the deleting method
     */
    @Test
    public void delTest() {
        BinaryTree delTest = new BinaryTree();
        delTest.add("cat", "кот");
        delTest.add("dog", "собака");
        delTest.add("pig", "свинья");
        delTest.delete("pig");
        assertNull(delTest.search("pig"));
    }

    /**
     * Checks the deleting method with null key
     */
    @Test//(expected = NullPointerException.class)
    public void delTestNegative() throws NullPointerException {
        BinaryTree delTest = new BinaryTree();
        delTest.add("dog", "собака");
        delTest.add("pig", "свинья");
        try {
            delTest.delete(null);
        } catch (NullPointerException e) {
            throw e;
        }

    }

    /**
     * Checks the correctness of the size of the dictionary
     */
    @Test
    public void sizeTestPositive() {
        BinaryTree sizeTest = new BinaryTree();
        sizeTest.add("cat", "кот");
        sizeTest.add("dog", "собака");
        sizeTest.add("pig", "свинья");
        sizeTest.add("elephant", "слон");
        sizeTest.add("whale", "кит");
        assertEquals(5, sizeTest.size());
    }

    /**
     * Checks the correctness of the size of the dictionary
     */
    @Test
    public void sizeTestNull() {
        BinaryTree sizeTest = new BinaryTree();
        assertEquals(0, sizeTest.size());
    }

    /**
     * Check the correctness of the dictionary from the file
     */
    @Test
    public void readTestPositive() throws FileNotFoundException {
        BinaryTree readTest = new BinaryTree();
        readTest.read(PATH);
        assertEquals("слон", readTest.search("elephant"));
    }

    /**
     * Expects the exception if the file path is not corrects
     */
    @Test(expected = FileNotFoundException.class)
    public void readTestNegative() throws FileNotFoundException {
        BinaryTree readTest = new BinaryTree();
        String filePath = "test.txt";
        readTest.read(filePath);
    }

    /**
     * Checks the rewriting function
     */
    @Test
    public void readTestChanged() throws FileNotFoundException {
        BinaryTree readTest = new BinaryTree();
        readTest.read(PATH);
        readTest.rewrite("bear", "мишка");
        readTest.read(PATH);
        assertEquals("мишка", readTest.search("bear"));
    }
}