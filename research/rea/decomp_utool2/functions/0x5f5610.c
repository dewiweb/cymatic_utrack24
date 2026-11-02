// rea decompile_all
// name: FUN_005f5610
// address: 0x5f5610
// body: available
// range: 0x5f5610-0x5f57cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f5610(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  
  iVar2 = FUN_005feec0(0x20);
  if (iVar2 == 0) {
    return 0;
  }
  *in_EDX = in_ECX;
  iVar2 = FUN_005feec0(0x20);
  if (iVar2 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)((int)in_ECX + 1);
  if (puVar1 < in_ECX) {
    iVar2 = 0;
  }
  else {
    puVar3 = (undefined4 *)0x1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
    }
    iVar2 = FUN_004c554b(puVar3);
  }
  in_EDX[1] = iVar2;
  if (iVar2 != 0) {
    if ((in_ECX != (undefined4 *)0x0) && (iVar2 = FUN_005fec40(in_ECX), iVar2 == 0)) {
      return 0;
    }
    *(undefined1 *)((int)in_ECX + in_EDX[1]) = 0;
    iVar2 = FUN_005feec0(0x20);
    if (iVar2 == 0) {
      return 0;
    }
    puVar1 = (undefined4 *)((int)in_ECX + 1);
    if (puVar1 < in_ECX) {
      iVar2 = 0;
    }
    else {
      puVar3 = (undefined4 *)0x1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = puVar1;
      }
      iVar2 = FUN_004c554b(puVar3);
    }
    in_EDX[2] = iVar2;
    if (iVar2 != 0) {
      if ((in_ECX != (undefined4 *)0x0) && (iVar2 = FUN_005fec40(in_ECX), iVar2 == 0)) {
        return 0;
      }
      *(undefined1 *)((int)in_ECX + in_EDX[2]) = 0;
      iVar2 = FUN_005feec0(0x20);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_005feec0(0x20);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_005feec0(0x20);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_005feec0(0x20);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_005feec0(0x20);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_005fe5c0();
      in_EDX[8] = iVar2;
      if (iVar2 != 0) {
        if ((in_EDX[7] != 0) && (iVar2 = FUN_005fec40(in_EDX[7]), iVar2 == 0)) {
          return 0;
        }
        return 1;
      }
    }
  }
  *(undefined4 *)*in_ECX = 8;
  return 0;
}

