"""
    Description:
    Write function bmi that calculates body mass index (bmi = weight / height2).

    if bmi <= 18.5 return "Underweight"

    if bmi <= 25.0 return "Normal"

    if bmi <= 30.0 return "Overweight"

    if bmi > 30 return "Obese"
"""


def bmi(weight, height):
    bmi_res = weight / (height ** 2)
    if bmi_res <= 18.5:
        return "Underweight"
    if bmi_res <= 25.0:
        return "Normal"
    if bmi_res <= 30.0:
        return "Overweight"
    if bmi_res > 30:
        return "Obese"
