// rea decompile_all
// name: FUN_004b79b0
// address: 0x4b79b0
// body: available
// range: 0x4b79b0-0x4b7b94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004b79b0(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  
  iVar3 = FUN_006f2ff0();
  if (iVar3 == 0x2d) {
    FUN_006f30b0();
  }
  iVar3 = 0;
  do {
    if (in_ECX[1] == 0) {
      if (((uint)((int *)*in_ECX)[2] <= (uint)in_ECX[2]) ||
         (piVar1 = *(int **)(*(int *)*in_ECX + in_ECX[2] * 4), piVar1 == (int *)0x0))
      goto LAB_004b7a2d;
      in_ECX[1] = *piVar1;
    }
    iVar4 = FUN_00426f70();
    if (iVar4 == 0) {
      if (((uint)((int *)*in_ECX)[2] <= in_ECX[2] + 1U) ||
         (*(int *)(*(int *)*in_ECX + (in_ECX[2] + 1U) * 4) == 0)) goto LAB_004b7a2d;
      iVar4 = FUN_00426f70();
    }
    if (9 < iVar4 - 0x30U) goto LAB_004b7a2d;
    FUN_006f30b0();
    iVar3 = iVar3 + 1;
  } while( true );
LAB_004b7b5b:
  if (iVar3 == 0) {
    return 0;
  }
  goto LAB_004b7b62;
LAB_004b7a2d:
  iVar4 = FUN_006f2ff0();
  if (iVar4 == 0x2e) {
    FUN_006f30b0();
    do {
      if (in_ECX[1] == 0) {
        if (((uint)((int *)*in_ECX)[2] <= (uint)in_ECX[2]) ||
           (piVar1 = *(int **)(*(int *)*in_ECX + in_ECX[2] * 4), piVar1 == (int *)0x0)) break;
        in_ECX[1] = *piVar1;
      }
      iVar5 = FUN_00426f70();
      if (iVar5 == 0) {
        if (((uint)((int *)*in_ECX)[2] <= in_ECX[2] + 1U) ||
           (*(int *)(*(int *)*in_ECX + (in_ECX[2] + 1U) * 4) == 0)) break;
        FUN_0044ebd0(0);
        iVar5 = FUN_00426f70();
      }
      if (9 < iVar5 - 0x30U) break;
      FUN_006f30b0();
      iVar3 = iVar3 + 1;
    } while( true );
  }
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_006f2ff0();
  if ((iVar3 == 0x65) || (iVar3 == 0x45)) {
    bVar2 = true;
    FUN_006f30b0();
    iVar3 = FUN_006f2ff0();
    if ((iVar3 == 0x2b) || (iVar3 == 0x2d)) {
      FUN_006f30b0();
    }
    iVar3 = 0;
    do {
      if (in_ECX[1] == 0) {
        if (((uint)((int *)*in_ECX)[2] <= (uint)in_ECX[2]) ||
           (piVar1 = *(int **)(*(int *)*in_ECX + in_ECX[2] * 4), piVar1 == (int *)0x0))
        goto LAB_004b7b5b;
        in_ECX[1] = *piVar1;
      }
      iVar5 = FUN_00426f70();
      if (iVar5 == 0) {
        if (((uint)((int *)*in_ECX)[2] <= in_ECX[2] + 1U) ||
           (*(int *)(*(int *)*in_ECX + (in_ECX[2] + 1U) * 4) == 0)) goto LAB_004b7b5b;
        FUN_0044ebd0(0);
        iVar5 = FUN_00426f70();
      }
      if (9 < iVar5 - 0x30U) goto LAB_004b7b5b;
      FUN_006f30b0();
      iVar3 = iVar3 + 1;
    } while( true );
  }
  bVar2 = false;
LAB_004b7b62:
  iVar3 = FUN_006f2ff0();
  if ((iVar3 == 0x66) || (iVar3 == 0x46)) {
    FUN_006f30b0();
  }
  else if ((!bVar2) && (iVar4 != 0x2e)) {
    return 0;
  }
  return 1;
}

