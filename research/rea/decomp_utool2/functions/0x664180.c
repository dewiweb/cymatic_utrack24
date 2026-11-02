// rea decompile_all
// name: FUN_00664180
// address: 0x664180
// body: available
// range: 0x664180-0x6643f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00664180(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int *piVar4;
  int local_8;
  
  if (in_ECX[5] != 0xca) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x14;
    *(int *)(*in_ECX + 0x18) = in_ECX[5];
    (**(code **)*in_ECX)();
  }
  iVar2 = in_ECX[0xc];
  uVar1 = in_ECX[0xd];
  if ((uint)(iVar2 * 8) < uVar1 || iVar2 * 8 - uVar1 == 0) {
    in_ECX[0x46] = 1;
    in_ECX[0x17] = (int)(in_ECX[7] + 7 + (in_ECX[7] + 7 >> 0x1f & 7U)) >> 3;
    iVar2 = (int)(in_ECX[8] + 7 + (in_ECX[8] + 7 >> 0x1f & 7U)) >> 3;
  }
  else if ((uint)(iVar2 * 4) < uVar1 || iVar2 * 4 - uVar1 == 0) {
    in_ECX[0x46] = 2;
    in_ECX[0x17] = (int)(in_ECX[7] + 3 + (in_ECX[7] + 3 >> 0x1f & 3U)) >> 2;
    iVar2 = (int)(in_ECX[8] + 3 + (in_ECX[8] + 3 >> 0x1f & 3U)) >> 2;
  }
  else if (uVar1 < (uint)(iVar2 * 2)) {
    in_ECX[0x17] = in_ECX[7];
    iVar2 = in_ECX[8];
    in_ECX[0x46] = 8;
  }
  else {
    in_ECX[0x46] = 4;
    in_ECX[0x17] = (in_ECX[7] + 1) / 2;
    iVar2 = (in_ECX[8] + 1) / 2;
  }
  in_ECX[0x18] = iVar2;
  local_8 = 0;
  if (0 < in_ECX[9]) {
    piVar4 = (int *)(in_ECX[0x31] + 0xc);
    do {
      iVar2 = in_ECX[0x46];
      iVar3 = iVar2;
      if (iVar2 < 8) {
        do {
          if ((in_ECX[0x44] * iVar2 < piVar4[-1] * iVar3 * 2) ||
             (in_ECX[0x45] * iVar2 < *piVar4 * iVar3 * 2)) break;
          iVar3 = iVar3 * 2;
        } while (iVar3 < 8);
      }
      piVar4[6] = iVar3;
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 0x15;
    } while (local_8 < in_ECX[9]);
  }
  local_8 = 0;
  if (0 < in_ECX[9]) {
    piVar4 = (int *)(in_ECX[0x31] + 0x24);
    do {
      piVar4[1] = (piVar4[-7] * *piVar4 * in_ECX[7] + -1 + in_ECX[0x44] * 8) / (in_ECX[0x44] * 8);
      piVar4[2] = (piVar4[-6] * in_ECX[8] * *piVar4 + -1 + in_ECX[0x45] * 8) / (in_ECX[0x45] * 8);
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 0x15;
    } while (local_8 < in_ECX[9]);
  }
  switch(in_ECX[0xb]) {
  case 1:
    in_ECX[0x19] = 1;
    break;
  case 2:
  case 3:
    in_ECX[0x19] = 3;
    break;
  case 4:
  case 5:
    in_ECX[0x19] = 4;
    break;
  default:
    in_ECX[0x19] = in_ECX[9];
  }
  iVar2 = 1;
  if (*(char *)((int)in_ECX + 0x4a) == '\0') {
    iVar2 = in_ECX[0x19];
  }
  in_ECX[0x1a] = iVar2;
  if ((((((char)in_ECX[0x12] == '\0') && (*(char *)((int)in_ECX + 0x10a) == '\0')) &&
       (in_ECX[10] == 3)) &&
      (((in_ECX[9] == 3 && (in_ECX[0xb] == 2)) &&
       ((in_ECX[0x19] == 3 &&
        ((iVar2 = in_ECX[0x31], *(int *)(iVar2 + 8) == 2 && (*(int *)(iVar2 + 0x5c) == 1)))))))) &&
     ((*(int *)(iVar2 + 0xb0) == 1 &&
      (((((*(int *)(iVar2 + 0xc) < 3 && (*(int *)(iVar2 + 0x60) == 1)) &&
         (*(int *)(iVar2 + 0xb4) == 1)) &&
        ((iVar3 = in_ECX[0x46], *(int *)(iVar2 + 0x24) == iVar3 && (*(int *)(iVar2 + 0x78) == iVar3)
         ))) && (*(int *)(iVar2 + 0xcc) == iVar3)))))) {
    in_ECX[0x1b] = in_ECX[0x45];
    return;
  }
  in_ECX[0x1b] = 1;
  return;
}

