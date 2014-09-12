import System.Environment (getArgs)
import Data.List.Split (splitOneOf)

main = do
     [inpFile] <- getArgs
     input <- readFile inpFile
     -- print your output to stdout
     putStrLn $ doChallenge input

doChallenge input = let
            lns = [ splitOneOf " " ln | ln <- lines input ]
            tokens = [ (read $ last ln :: Int, map read $ init ln :: [Int]) | ln <- lns ]
