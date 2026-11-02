// rea decompile_all
// name: FUN_0066c550
// address: 0x66c550
// body: available
// range: 0x66c130-0x66c4bb inclusive
// range: 0x66c550-0x66c6b9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066c550(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int iVar4;
  
  piVar2 = in_ECX;
  if (in_ECX[5] != 100) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x14;
    *(int *)(*in_ECX + 0x18) = in_ECX[5];
    (**(code **)*in_ECX)();
    piVar2 = extraout_ECX;
  }
  if (in_ECX[0x11] == 0) {
    iVar3 = (**(code **)in_ECX[1])();
    in_ECX[0x11] = iVar3;
    piVar2 = extraout_ECX_00;
  }
  in_ECX[0xe] = 8;
  FUN_0066c8b0(&DAT_00c18630,0x32,piVar2);
  iVar4 = 1;
  FUN_0066c8b0(&DAT_00c182c0,0x32);
  FUN_0066c6e0();
  iVar3 = 0x10;
  piVar2 = in_ECX + 0x22;
  do {
    *(undefined1 *)(piVar2 + -4) = 0;
    *(undefined1 *)piVar2 = 1;
    *(undefined1 *)(piVar2 + 4) = 5;
    iVar3 = iVar3 + -1;
    piVar2 = (int *)((int)piVar2 + 1);
  } while (iVar3 != 0);
  in_ECX[0x2b] = 0;
  in_ECX[0x2a] = 0;
  *(undefined2 *)(in_ECX + 0x2c) = 0;
  *(undefined1 *)((int)in_ECX + 0xb2) = 0;
  if (8 < in_ECX[0xe]) {
    *(undefined1 *)((int)in_ECX + 0xb2) = 1;
  }
  *(undefined1 *)((int)in_ECX + 0xb3) = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  *(undefined2 *)((int)in_ECX + 0xc5) = 0x101;
  *(undefined1 *)((int)in_ECX + 199) = 0;
  in_ECX[0x32] = 0x10001;
  switch(in_ECX[10]) {
  case 0:
    iVar4 = 0;
    break;
  case 1:
    break;
  case 2:
  case 3:
    iVar4 = 3;
    break;
  case 4:
    iVar4 = 4;
    break;
  case 5:
    iVar4 = 5;
    break;
  default:
    *(undefined4 *)(*in_ECX + 0x14) = 9;
    (**(code **)*in_ECX)();
    return;
  }
  if (in_ECX[5] != 100) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x14;
    *(int *)(*in_ECX + 0x18) = in_ECX[5];
    (**(code **)*in_ECX)();
  }
  in_ECX[0x10] = iVar4;
  *(undefined1 *)(in_ECX + 0x31) = 0;
  *(undefined1 *)(in_ECX + 0x33) = 0;
  switch(iVar4) {
  case 0:
    iVar3 = in_ECX[9];
    in_ECX[0xf] = iVar3;
    if ((iVar3 < 1) || (10 < iVar3)) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x1a;
      *(int *)(*in_ECX + 0x18) = in_ECX[0xf];
      *(undefined4 *)(*in_ECX + 0x1c) = 10;
      (**(code **)*in_ECX)();
    }
    iVar3 = 0;
    if (in_ECX[0xf] < 1) {
      return;
    }
    iVar4 = 0;
    do {
      piVar2 = (int *)(in_ECX[0x11] + iVar4);
      iVar4 = iVar4 + 0x54;
      *piVar2 = iVar3;
      iVar3 = iVar3 + 1;
      piVar2[2] = 1;
      piVar2[3] = 1;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 0;
    } while (iVar3 < in_ECX[0xf]);
    return;
  case 1:
    puVar1 = (undefined4 *)in_ECX[0x11];
    *(undefined1 *)(in_ECX + 0x31) = 1;
    in_ECX[0xf] = 1;
    *puVar1 = 1;
    break;
  case 2:
    puVar1 = (undefined4 *)in_ECX[0x11];
    *(undefined1 *)(in_ECX + 0x33) = 1;
    in_ECX[0xf] = 3;
    *puVar1 = 0x52;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = in_ECX[0x11];
    *(undefined4 *)(iVar3 + 0x54) = 0x47;
    *(undefined4 *)(iVar3 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x60) = 1;
    *(undefined4 *)(iVar3 + 100) = 0;
    *(undefined4 *)(iVar3 + 0x68) = 0;
    *(undefined4 *)(iVar3 + 0x6c) = 0;
    puVar1 = (undefined4 *)(in_ECX[0x11] + 0xa8);
    *puVar1 = 0x42;
    break;
  case 3:
    puVar1 = (undefined4 *)in_ECX[0x11];
    *(undefined1 *)(in_ECX + 0x31) = 1;
    in_ECX[0xf] = 3;
    *puVar1 = 1;
    puVar1[2] = 2;
    puVar1[3] = 2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = in_ECX[0x11];
    *(undefined4 *)(iVar3 + 0x54) = 2;
    *(undefined4 *)(iVar3 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x60) = 1;
    *(undefined4 *)(iVar3 + 100) = 1;
    *(undefined4 *)(iVar3 + 0x68) = 1;
    *(undefined4 *)(iVar3 + 0x6c) = 1;
    iVar3 = in_ECX[0x11];
    *(undefined4 *)(iVar3 + 0xa8) = 3;
    *(undefined4 *)(iVar3 + 0xb0) = 1;
    *(undefined4 *)(iVar3 + 0xb4) = 1;
    *(undefined4 *)(iVar3 + 0xb8) = 1;
    *(undefined4 *)(iVar3 + 0xbc) = 1;
    *(undefined4 *)(iVar3 + 0xc0) = 1;
    return;
  case 4:
    puVar1 = (undefined4 *)in_ECX[0x11];
    *(undefined1 *)(in_ECX + 0x33) = 1;
    in_ECX[0xf] = 4;
    *puVar1 = 0x43;
    puVar1[2] = 1;
    puVar1[3] = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = in_ECX[0x11];
    *(undefined4 *)(iVar3 + 0x54) = 0x4d;
    *(undefined4 *)(iVar3 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x60) = 1;
    *(undefined4 *)(iVar3 + 100) = 0;
    *(undefined4 *)(iVar3 + 0x68) = 0;
    *(undefined4 *)(iVar3 + 0x6c) = 0;
    iVar3 = in_ECX[0x11];
    *(undefined4 *)(iVar3 + 0xa8) = 0x59;
    *(undefined4 *)(iVar3 + 0xb0) = 1;
    *(undefined4 *)(iVar3 + 0xb4) = 1;
    *(undefined4 *)(iVar3 + 0xb8) = 0;
    *(undefined4 *)(iVar3 + 0xbc) = 0;
    *(undefined4 *)(iVar3 + 0xc0) = 0;
    puVar1 = (undefined4 *)(in_ECX[0x11] + 0xfc);
    *puVar1 = 0x4b;
    break;
  case 5:
    puVar1 = (undefined4 *)in_ECX[0x11];
    *(undefined1 *)(in_ECX + 0x33) = 1;
    in_ECX[0xf] = 4;
    *puVar1 = 1;
    puVar1[2] = 2;
    puVar1[3] = 2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar3 = in_ECX[0x11];
    *(undefined4 *)(iVar3 + 0x54) = 2;
    *(undefined4 *)(iVar3 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x60) = 1;
    *(undefined4 *)(iVar3 + 100) = 1;
    *(undefined4 *)(iVar3 + 0x68) = 1;
    *(undefined4 *)(iVar3 + 0x6c) = 1;
    iVar3 = in_ECX[0x11];
    *(undefined4 *)(iVar3 + 0xa8) = 3;
    *(undefined4 *)(iVar3 + 0xb0) = 1;
    *(undefined4 *)(iVar3 + 0xb4) = 1;
    *(undefined4 *)(iVar3 + 0xb8) = 1;
    *(undefined4 *)(iVar3 + 0xbc) = 1;
    *(undefined4 *)(iVar3 + 0xc0) = 1;
    iVar3 = in_ECX[0x11];
    puVar1 = (undefined4 *)(iVar3 + 0xfc);
    *puVar1 = 4;
    *(undefined4 *)(iVar3 + 0x104) = 2;
    *(undefined4 *)(iVar3 + 0x108) = 2;
    goto LAB_0066c19f;
  default:
    *(undefined4 *)(*in_ECX + 0x14) = 10;
    (**(code **)*in_ECX)();
    return;
  }
  puVar1[2] = 1;
  puVar1[3] = 1;
LAB_0066c19f:
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}

