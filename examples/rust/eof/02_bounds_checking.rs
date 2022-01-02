/* Generated by re2c */
// re2rust $INPUT -o $OUTPUT

const YYMAXFILL: usize = 1;


fn lex(s: &[u8]) -> isize {
    let mut count = 0;
    let mut cursor = 0;
    let limit = s.len() + YYMAXFILL;

    // Copy string to a buffer and add YYMAXFILL zero padding.
    let mut buf = Vec::with_capacity(limit);
    buf.extend(s.iter());
    buf.extend(vec![0; YYMAXFILL]);

    'lex: loop {
{
	#[allow(unused_assignments)]
	let mut yych : u8 = 0;
	let mut yystate : usize = 0;
	loop {
		match yystate {
			0 => {
				if cursor + 1 > limit {
					return -1;
				}
				yych = unsafe {*buf.get_unchecked(cursor)};
				cursor += 1;
				match yych {
					0x00 => {
						yystate = 1;
						continue;
					}
					0x20 => {
						yystate = 3;
						continue;
					}
					0x27 => {
						yystate = 5;
						continue;
					}
					_ => {
						yystate = 2;
						continue;
					}
				}
			}
			1 => {
            // Check that it is the sentinel, not some unexpected null.
            return if cursor == s.len() + 1 { count } else { -1 }
        }
			2 => { return -1; }
			3 => {
				if cursor + 1 > limit {
					return -1;
				}
				yych = unsafe {*buf.get_unchecked(cursor)};
				match yych {
					0x20 => {
						cursor += 1;
						yystate = 3;
						continue;
					}
					_ => {
						yystate = 4;
						continue;
					}
				}
			}
			4 => { continue 'lex; }
			5 => {
				if cursor + 1 > limit {
					return -1;
				}
				yych = unsafe {*buf.get_unchecked(cursor)};
				cursor += 1;
				match yych {
					0x27 => {
						yystate = 6;
						continue;
					}
					0x5C => {
						yystate = 7;
						continue;
					}
					_ => {
						yystate = 5;
						continue;
					}
				}
			}
			6 => { count += 1; continue 'lex; }
			7 => {
				if cursor + 1 > limit {
					return -1;
				}
				yych = unsafe {*buf.get_unchecked(cursor)};
				cursor += 1;
				yystate = 5;
				continue;
			}
			_ => {
				panic!("internal lexer error")
			}
		}
	}
}
}
}

fn main() {
    assert_eq!(lex(b""), 0);
    assert_eq!(lex(b"'qu\0tes' 'are' 'fine: \\'' "), 3);
    assert_eq!(lex(b"'unterminated\\'"), -1);
    assert_eq!(lex(b"'unexpected \0 null"), -1);
}
