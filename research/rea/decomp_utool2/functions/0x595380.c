// rea decompile_all
// name: FUN_00595380
// address: 0x595380
// body: available
// range: 0x595380-0x59548a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00595380(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uVar4;
  
  if (param_1 == in_ECX + 0x1c2c) {
    FUN_00593f50();
    return;
  }
  if (param_1 == in_ECX + 0x1d0c) {
    cVar2 = FUN_00595180();
    if (cVar2 != '\0') {
      if ((*(byte *)(in_ECX + 0x1d75) & 0x10) == 0) {
        *(byte *)(in_ECX + 0x1d75) = *(byte *)(in_ECX + 0x1d75) | 0x10;
        iVar1 = *(int *)(in_ECX + 0x1d18);
        if (iVar1 != 0) {
          if ((*(byte *)(iVar1 + 0x69) & 0x10) != 0) goto LAB_005953f8;
          if (*(int *)(iVar1 + 0xc) != 0) {
            cVar2 = FUN_006e6320();
            if (cVar2 == '\0') goto LAB_005953f8;
          }
        }
        FUN_006cc240();
      }
LAB_005953f8:
      uVar3 = FUN_006e85c0();
      uVar4 = 0;
      if ((*(byte *)(in_ECX + 0x2004) & 2) != 0) {
        uVar4 = uVar3;
      }
      FUN_00594190(-(uint)(in_ECX != 0x7c) & in_ECX + 8U,in_ECX + 0x1954,in_ECX + 0x26dc,
                   in_ECX + 0x26ec,uVar4,*(byte *)(in_ECX + 0xcf4) >> 1 & 1);
      return;
    }
  }
  else if (param_1 == in_ECX + 0x1dec) {
    cVar2 = FUN_00595180();
    if (cVar2 != '\0') {
      FUN_00599b80(*(undefined4 *)(in_ECX + 0x26e4),*(undefined4 *)(in_ECX + 0x26e8));
    }
  }
  return;
}

