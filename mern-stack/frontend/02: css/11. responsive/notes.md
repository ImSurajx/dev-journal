# CSS Units & clamp() — Detailed Notes

## 1. Why CSS Units Matter
CSS units control how elements scale across different screen sizes, resolutions, and user preferences. Choosing the correct unit is the foundation of responsive and accessible web design.

---

## 2. Absolute Units (Fixed Values)
Absolute units have fixed measurements and do not scale naturally with screen size.

### Common Absolute Units
- px (pixel)
  - Most commonly used unit
  - Fixed size, appears different on high-DPI screens
  - Not responsive

- pt (point)
  - Mostly used in print media
  - 1pt = 1/72 inch

- cm, mm, in
  - Physical measurement units
  - Rarely used for screen design
  - Best for print layouts

### When to Use Absolute Units
- Borders
- Shadows
- Icons with fixed size
Avoid using them for layouts and fonts.

---

## 3. Relative Units (Context-Based)
Relative units depend on another reference such as the parent element, root element, or viewport.

---

## 3.1 Font-Based Units

### em
- Relative to parent’s font-size
- Values multiply with nesting (can compound)

Example:
.parent { font-size: 20px; }
.child  { font-size: 1.5em; }  /* 30px */

Use carefully in deeply nested structures.

---

### rem
- Relative to root (html) font-size
- Default: 1rem = 16px
- Most reliable unit for typography

Example:
html { font-size: 16px; }
p { font-size: 1.25rem; }  /* 20px */

---

## 3.2 Percentage (%)
- Relative to the parent element
- Commonly used for width and height

Example:
.child {
  width: 50%;
}

Note: Percentage height works only if parent height is defined.

---

## 3.3 Viewport Units

### vw (viewport width)
- 1vw = 1% of screen width

### vh (viewport height)
- 1vh = 1% of screen height

Used for:
- Full screen layouts
- Hero sections

Example:
section {
  height: 100vh;
}

---

### vmin
- Uses the smaller value of vw or vh
- Useful for responsive squares and circles

### vmax
- Uses the larger value of vw or vh
- Useful when scaling with the larger screen dimension

---

## 3.4 Typographic & Modern Units

### ch
- Based on width of the "0" character
- Controls number of characters per line
- Improves readability

Example:
p {
  max-width: 60ch;
}

---

### lh
- Relative to line-height
- Useful for vertical rhythm and spacing

---

## 4. clamp() — Modern Responsive Sizing

### Syntax
clamp(min, preferred, max)

- min → lower limit
- preferred → ideal value
- max → upper limit

Example:
font-size: clamp(1rem, 2.5vw, 3rem);

Explanation:
- Font never goes below 1rem
- Scales with viewport using 2.5vw
- Never exceeds 3rem

---

## 5. Where clamp() Is Useful
- Responsive font sizes
- Padding and margins
- Container widths
- Avoids media queries for simple scaling

Example:
padding: clamp(1rem, 4vw, 3rem);

---

## 6. Default Font Size Context
By default, the following elements inherit:
html, body, section, main, footer, aside → font-size: 16px

Changing html font-size affects rem-based sizing globally.

Example:
html { font-size: 62.5%; }  /* 1rem = 10px */

---

## 7. Best Practices Summary
- Use rem for fonts and spacing
- Use % for parent-based layouts
- Use vw/vh sparingly
- Use ch for text width control
- Prefer clamp() for responsive sizing
- Avoid px for layouts

---

## 8. Absolute vs Relative (Quick Comparison)
Absolute units → fixed, non-responsive  
Relative units → flexible, responsive, scalable

---

End of Notes