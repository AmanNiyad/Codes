{-# LANGUAGE FlexibleInstances, UndecidableInstances, DuplicateRecordFields #-}

module Main where

import Control.Monad
import Data.Array
import Data.Bits
import Data.List
import Data.List.Split
import Data.Set
import Debug.Trace
import System.Environment
import System.IO
import System.IO.Unsafe

hello_world = putStrLn "Hello World"

main :: IO()
main = do
    n <- readLn :: IO Int
    hello_world
    -- Print "Hello World" on a new line 'n' times.

