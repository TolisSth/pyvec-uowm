# Author: Apostolos Chalis 2026 <cs05414@uowm.gr>
import pyvec

def main():
    point_A = [3.0, 1.0]
    point_B = [6.0, 3.0]

    vec_ab = pyvec.Vector.from_points(point_A, point_B)

    print(f"Starting point Α: {point_A}")
    print(f"Ending point Β: {point_B}")

    print(f"x = {vec_ab.get(0)}") # Should be 3.0 
    print(f"y = {vec_ab.get(1)}") # Should be 2.0

if __name__ == "__main__":
    main()
