// rea decompile_all
// name: FUN_00667ee0
// address: 0x667ee0
// body: available
// range: 0x667ee0-0x66804e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00667ee0(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)in_ECX[1])();
  in_ECX[0x69] = (int)puVar1;
  *puVar1 = &DAT_00668070;
  switch(in_ECX[10]) {
  case 1:
    if (in_ECX[9] != 1) {
LAB_00667f2f:
      *(undefined4 *)(*in_ECX + 0x14) = 10;
      (**(code **)*in_ECX)();
    }
    break;
  case 2:
  case 3:
    if (in_ECX[9] != 3) goto LAB_00667f2f;
    break;
  case 4:
  case 5:
    if (in_ECX[9] != 4) goto LAB_00667f2f;
    break;
  default:
    if (in_ECX[9] < 1) goto LAB_00667f2f;
  }
  iVar2 = in_ECX[0xb];
  if (iVar2 == 1) {
    in_ECX[0x19] = 1;
    if ((in_ECX[10] == 1) || (in_ECX[10] == 3)) {
      iVar2 = 1;
      puVar1[1] = FUN_00668250;
      if (1 < in_ECX[9]) {
        iVar3 = 0x54;
        do {
          iVar3 = iVar3 + 0x54;
          iVar2 = iVar2 + 1;
          *(undefined1 *)(in_ECX[0x31] + -0x24 + iVar3) = 0;
        } while (iVar2 < in_ECX[9]);
      }
      goto LAB_00668036;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = in_ECX[10];
    in_ECX[0x19] = 3;
    if (iVar2 == 3) {
      puVar1[1] = FUN_00668330;
      FUN_00668460();
      goto LAB_00668036;
    }
    if (iVar2 == 1) {
      puVar1[1] = FUN_006681e0;
      goto LAB_00668036;
    }
    if (iVar2 == 2) {
      puVar1[1] = FUN_006682a0;
      goto LAB_00668036;
    }
  }
  else if (iVar2 == 4) {
    in_ECX[0x19] = 4;
    if (in_ECX[10] == 5) {
      puVar1[1] = FUN_00668080;
      FUN_00668460();
      goto LAB_00668036;
    }
    if (in_ECX[10] == 4) {
      puVar1[1] = FUN_006682a0;
      goto LAB_00668036;
    }
  }
  else if (iVar2 == in_ECX[10]) {
    in_ECX[0x19] = in_ECX[9];
    puVar1[1] = FUN_006682a0;
    goto LAB_00668036;
  }
  *(undefined4 *)(*in_ECX + 0x14) = 0x1b;
  (**(code **)*in_ECX)();
LAB_00668036:
  if (*(char *)((int)in_ECX + 0x4a) == '\0') {
    in_ECX[0x1a] = in_ECX[0x19];
    return;
  }
  in_ECX[0x1a] = 1;
  return;
}

