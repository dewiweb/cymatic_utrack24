// rea decompile_all
// name: FUN_00460430
// address: 0x460430
// body: available
// range: 0x460430-0x460b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460430(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int in_ECX;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar20 = *(uint *)(in_ECX + 0x44);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar5 = param_1[4];
  iVar6 = param_1[5];
  iVar7 = param_1[6];
  iVar8 = param_1[7];
  iVar9 = param_1[8];
  iVar10 = param_1[9];
  iVar11 = param_1[10];
  iVar12 = param_1[0xb];
  iVar13 = param_1[0xc];
  iVar14 = param_1[0xd];
  iVar15 = param_1[0xe];
  iVar16 = param_1[0xf];
  uVar17 = *(int *)(in_ECX + 0x40) + -0x28955b88 +
           (~uVar20 & *(uint *)(in_ECX + 0x4c) | *(uint *)(in_ECX + 0x48) & uVar20) + iVar1;
  uVar17 = (uVar17 * 0x80 | uVar17 >> 0x19) + uVar20;
  uVar18 = *(uint *)(in_ECX + 0x4c) + 0xe8c7b756 +
           (~uVar17 & *(uint *)(in_ECX + 0x48) | uVar20 & uVar17) + iVar2;
  uVar19 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar17;
  uVar20 = *(int *)(in_ECX + 0x48) + 0x242070db + (~uVar19 & uVar20 | uVar19 & uVar17) + iVar3;
  uVar21 = (uVar20 >> 0xf | uVar20 * 0x20000) + uVar19;
  uVar20 = *(int *)(in_ECX + 0x44) + -0x3e423112 + (~uVar21 & uVar17 | uVar19 & uVar21) + iVar4;
  uVar18 = (uVar20 >> 10 | uVar20 * 0x400000) + uVar21;
  uVar17 = uVar17 + (~uVar18 & uVar19 | uVar21 & uVar18) + iVar5 + -0xa83f051;
  uVar20 = (uVar17 * 0x80 | uVar17 >> 0x19) + uVar18;
  uVar19 = uVar19 + (~uVar20 & uVar21 | uVar18 & uVar20) + iVar6 + 0x4787c62a;
  uVar19 = (uVar19 * 0x1000 | uVar19 >> 0x14) + uVar20;
  uVar21 = uVar21 + (~uVar19 & uVar18 | uVar19 & uVar20) + iVar7 + -0x57cfb9ed;
  uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) + uVar19;
  uVar18 = uVar18 + (~uVar21 & uVar20 | uVar19 & uVar21) + iVar8 + -0x2b96aff;
  uVar17 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar21;
  uVar20 = uVar20 + (~uVar17 & uVar19 | uVar21 & uVar17) + iVar9 + 0x698098d8;
  uVar20 = (uVar20 * 0x80 | uVar20 >> 0x19) + uVar17;
  uVar19 = uVar19 + (~uVar20 & uVar21 | uVar17 & uVar20) + iVar10 + -0x74bb0851;
  uVar18 = (uVar19 * 0x1000 | uVar19 >> 0x14) + uVar20;
  uVar21 = uVar21 + (~uVar18 & uVar17 | uVar18 & uVar20) + iVar11 + -0xa44f;
  uVar19 = (uVar21 >> 0xf | uVar21 * 0x20000) + uVar18;
  uVar17 = uVar17 + (~uVar19 & uVar20 | uVar18 & uVar19) + iVar12 + -0x76a32842;
  uVar17 = (uVar17 >> 10 | uVar17 * 0x400000) + uVar19;
  uVar20 = uVar20 + (~uVar17 & uVar18 | uVar19 & uVar17) + iVar13 + 0x6b901122;
  uVar20 = (uVar20 * 0x80 | uVar20 >> 0x19) + uVar17;
  uVar18 = uVar18 + 0xfd987193 + (~uVar20 & uVar19 | uVar17 & uVar20) + iVar14;
  uVar21 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar20;
  uVar18 = uVar19 + 0xa679438e + (~uVar21 & uVar17 | uVar21 & uVar20) + iVar15;
  uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar21;
  uVar17 = uVar17 + 0x49b40821 + (~uVar18 & uVar20 | uVar21 & uVar18) + iVar16;
  uVar22 = (uVar17 >> 10 | uVar17 * 0x400000) + uVar18;
  uVar20 = (~uVar21 & uVar18 | uVar21 & uVar22) + iVar2 + uVar20 + 0xf61e2562;
  uVar19 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar22;
  uVar20 = (~uVar18 & uVar22 | uVar18 & uVar19) + iVar7 + uVar21 + 0xc040b340;
  uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar19;
  uVar18 = uVar18 + (~uVar22 & uVar19 | uVar20 & uVar22) + 0x265e5a51 + iVar12;
  uVar17 = (uVar18 * 0x4000 | uVar18 >> 0x12) + uVar20;
  uVar22 = uVar22 + (~uVar19 & uVar20 | uVar17 & uVar19) + 0xe9b6c7aa + iVar1;
  uVar21 = (uVar22 >> 0xc | uVar22 * 0x100000) + uVar17;
  uVar19 = uVar19 + (~uVar20 & uVar17 | uVar20 & uVar21) + 0xd62f105d + iVar6;
  uVar18 = (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar21;
  uVar20 = uVar20 + (~uVar17 & uVar21 | uVar17 & uVar18) + 0x2441453 + iVar11;
  uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar18;
  uVar17 = uVar17 + (~uVar21 & uVar18 | uVar20 & uVar21) + 0xd8a1e681 + iVar16;
  uVar17 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar20;
  uVar21 = uVar21 + (~uVar18 & uVar20 | uVar17 & uVar18) + 0xe7d3fbc8 + iVar5;
  uVar21 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar17;
  uVar18 = uVar18 + (~uVar20 & uVar17 | uVar20 & uVar21) + 0x21e1cde6 + iVar10;
  uVar19 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar21;
  uVar20 = uVar20 + (~uVar17 & uVar21 | uVar17 & uVar19) + 0xc33707d6 + iVar15;
  uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar19;
  uVar17 = uVar17 + (~uVar21 & uVar19 | uVar20 & uVar21) + 0xf4d50d87 + iVar4;
  uVar18 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar20;
  uVar21 = uVar21 + (~uVar19 & uVar20 | uVar18 & uVar19) + 0x455a14ed + iVar9;
  uVar21 = (uVar21 >> 0xc | uVar21 * 0x100000) + uVar18;
  uVar17 = uVar19 + 0xa9e3e905 + (~uVar20 & uVar18 | uVar20 & uVar21) + iVar14;
  uVar17 = (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar21;
  uVar20 = uVar20 + 0xfcefa3f8 + (~uVar18 & uVar21 | uVar18 & uVar17) + iVar3;
  uVar19 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar17;
  uVar18 = (uVar21 & uVar19 | ~uVar21 & uVar17) + 0x676f02d9 + iVar8 + uVar18;
  uVar22 = (uVar18 * 0x4000 | uVar18 >> 0x12) + uVar19;
  uVar20 = (~uVar17 & uVar19 | uVar22 & uVar17) + iVar13 + uVar21 + 0x8d2a4c8a;
  uVar20 = (uVar20 >> 0xc | uVar20 * 0x100000) + uVar22;
  uVar17 = uVar17 + ((uVar19 ^ uVar22 ^ uVar20) - 0x5c6be) + iVar6;
  uVar17 = (uVar17 * 0x10 | uVar17 >> 0x1c) + uVar20;
  uVar19 = uVar19 + (uVar22 ^ uVar20 ^ uVar17) + 0x8771f681 + iVar9;
  uVar18 = (uVar19 * 0x800 | uVar19 >> 0x15) + uVar17;
  uVar22 = uVar22 + (uVar18 ^ uVar20 ^ uVar17) + 0x6d9d6122 + iVar12;
  uVar19 = (uVar22 * 0x10000 | uVar22 >> 0x10) + uVar18;
  uVar20 = uVar20 + (uVar18 ^ uVar19 ^ uVar17) + 0xfde5380c + iVar15;
  uVar20 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar19;
  uVar17 = uVar17 + (uVar18 ^ uVar19 ^ uVar20) + 0xa4beea44 + iVar2;
  uVar17 = (uVar17 * 0x10 | uVar17 >> 0x1c) + uVar20;
  uVar18 = uVar18 + (uVar19 ^ uVar20 ^ uVar17) + 0x4bdecfa9 + iVar5;
  uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar17;
  uVar19 = uVar19 + (uVar18 ^ uVar20 ^ uVar17) + 0xf6bb4b60 + iVar8;
  uVar19 = (uVar19 * 0x10000 | uVar19 >> 0x10) + uVar18;
  uVar20 = uVar20 + (uVar18 ^ uVar19 ^ uVar17) + 0xbebfbc70 + iVar11;
  uVar20 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar19;
  uVar17 = uVar17 + (uVar18 ^ uVar19 ^ uVar20) + 0x289b7ec6 + iVar14;
  uVar17 = (uVar17 * 0x10 | uVar17 >> 0x1c) + uVar20;
  uVar18 = uVar18 + (uVar19 ^ uVar20 ^ uVar17) + 0xeaa127fa + iVar1;
  uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar17;
  uVar19 = uVar19 + (uVar18 ^ uVar20 ^ uVar17) + 0xd4ef3085 + iVar4;
  uVar19 = (uVar19 * 0x10000 | uVar19 >> 0x10) + uVar18;
  uVar20 = uVar20 + (uVar18 ^ uVar19 ^ uVar17) + 0x4881d05 + iVar7;
  uVar20 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar19;
  uVar17 = uVar17 + (uVar18 ^ uVar19 ^ uVar20) + 0xd9d4d039 + iVar10;
  uVar17 = (uVar17 * 0x10 | uVar17 >> 0x1c) + uVar20;
  uVar18 = uVar18 + (uVar19 ^ uVar20 ^ uVar17) + 0xe6db99e5 + iVar13;
  uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar17;
  uVar19 = uVar19 + (uVar18 ^ uVar20 ^ uVar17) + 0x1fa27cf8 + iVar16;
  uVar19 = (uVar19 * 0x10000 | uVar19 >> 0x10) + uVar18;
  uVar20 = uVar20 + (uVar18 ^ uVar19 ^ uVar17) + 0xc4ac5665 + iVar3;
  uVar20 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar19;
  uVar17 = uVar17 + ((~uVar18 | uVar20) ^ uVar19) + 0xf4292244 + iVar1;
  uVar17 = (uVar17 * 0x40 | uVar17 >> 0x1a) + uVar20;
  uVar18 = uVar18 + ((~uVar19 | uVar17) ^ uVar20) + 0x432aff97 + iVar8;
  uVar18 = (uVar18 * 0x400 | uVar18 >> 0x16) + uVar17;
  uVar19 = uVar19 + ((~uVar20 | uVar18) ^ uVar17) + 0xab9423a7 + iVar15;
  uVar19 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar18;
  uVar20 = uVar20 + ((~uVar17 | uVar19) ^ uVar18) + 0xfc93a039 + iVar6;
  uVar20 = (uVar20 >> 0xb | uVar20 * 0x200000) + uVar19;
  uVar17 = uVar17 + ((~uVar18 | uVar20) ^ uVar19) + 0x655b59c3 + iVar13;
  uVar17 = (uVar17 * 0x40 | uVar17 >> 0x1a) + uVar20;
  uVar18 = uVar18 + ((~uVar19 | uVar17) ^ uVar20) + 0x8f0ccc92 + iVar4;
  uVar18 = (uVar18 * 0x400 | uVar18 >> 0x16) + uVar17;
  uVar19 = uVar19 + (((~uVar20 | uVar18) ^ uVar17) - 0x100b83) + iVar11;
  uVar19 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar18;
  uVar20 = uVar20 + ((~uVar17 | uVar19) ^ uVar18) + 0x85845dd1 + iVar2;
  uVar20 = (uVar20 >> 0xb | uVar20 * 0x200000) + uVar19;
  uVar17 = uVar17 + ((~uVar18 | uVar20) ^ uVar19) + 0x6fa87e4f + iVar9;
  uVar17 = (uVar17 * 0x40 | uVar17 >> 0x1a) + uVar20;
  uVar18 = uVar18 + 0xfe2ce6e0 + ((~uVar19 | uVar17) ^ uVar20) + iVar16;
  uVar18 = (uVar18 * 0x400 | uVar18 >> 0x16) + uVar17;
  uVar19 = uVar19 + ((~uVar20 | uVar18) ^ uVar17) + 0xa3014314 + iVar7;
  uVar21 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar18;
  uVar20 = uVar20 + ((~uVar17 | uVar21) ^ uVar18) + 0x4e0811a1 + iVar14;
  uVar20 = (uVar20 >> 0xb | uVar20 * 0x200000) + uVar21;
  uVar17 = uVar17 + 0xf7537e82 + ((~uVar18 | uVar20) ^ uVar21) + iVar5;
  uVar19 = (uVar17 * 0x40 | uVar17 >> 0x1a) + uVar20;
  *(int *)(in_ECX + 0x40) = *(int *)(in_ECX + 0x40) + uVar19;
  uVar17 = uVar18 + 0xbd3af235 + ((~uVar21 | uVar19) ^ uVar20) + iVar12;
  uVar18 = (uVar17 * 0x400 | uVar17 >> 0x16) + uVar19;
  uVar17 = uVar21 + 0x2ad7d2bb + ((~uVar20 | uVar18) ^ uVar19) + iVar3;
  uVar17 = (uVar17 * 0x8000 | uVar17 >> 0x11) + uVar18;
  *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + uVar17;
  uVar20 = uVar20 + 0xeb86d391 + ((~uVar19 | uVar17) ^ uVar18) + iVar10;
  *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + uVar18;
  *(uint *)(in_ECX + 0x44) = (uVar20 >> 0xb | uVar20 * 0x200000) + *(int *)(in_ECX + 0x44) + uVar17;
  return;
}

