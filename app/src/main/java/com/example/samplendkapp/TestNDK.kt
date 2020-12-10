package com.example.samplendkapp

/**
 * Created by Ganesh Padhayay on 10/12/20.
 */
object TestNDK {

    init {
        System.loadLibrary("api-keys");
    }

    external fun getAPIKey(): Array<String>
}