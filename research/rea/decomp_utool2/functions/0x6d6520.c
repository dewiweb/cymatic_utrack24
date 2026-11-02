// rea decompile_all
// name: FUN_006d6520
// address: 0x6d6520
// body: available
// range: 0x6d6520-0x6d6606 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d6520(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int extraout_EDX;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(byte *)(param_4 + 0x69) & 0x10) == 0) {
    iVar1 = *(int *)(param_4 + 0xc);
    iVar2 = DAT_00c8a678;
    if (iVar1 != 0) {
      uStack_1c = 0x6d653e;
      cVar3 = FUN_006e6320();
      iVar2 = DAT_00c8a678;
      param_4 = extraout_EDX;
      if (cVar3 == '\0') {
        return;
      }
    }
    for (; iVar2 != param_4; iVar2 = *(int *)(iVar2 + 0xc)) {
      if (iVar2 == 0) goto LAB_006d655b;
    }
    if (*(char *)(param_4 + 0x94) == '\0') {
      if (iVar1 == 0) {
LAB_006d65bd:
        puStack_28 = (undefined1 *)&uStack_1c;
        uStack_20 = 0;
        uStack_24 = 0x1000206;
        FUN_006e8e70();
        uStack_20 = 0x6d65d7;
        FUN_00684c50();
        uStack_1c = param_3;
        uStack_20 = param_2;
        uStack_24 = 0;
        puStack_28 = (undefined1 *)0x6d65e9;
        FUN_00472d90();
        FUN_0040e4d0(&puStack_28);
        FUN_00677150();
        return;
      }
      uStack_1c = 0x6d65b9;
      cVar3 = FUN_006e6320();
      if (cVar3 != '\0') goto LAB_006d65bd;
    }
LAB_006d655b:
    puStack_28 = (undefined1 *)&uStack_1c;
    uStack_20 = 0;
    uStack_24 = 0x1000205;
    FUN_006e8e70();
    uStack_20 = 0x6d6575;
    FUN_00684c50();
    uStack_1c = param_3;
    uStack_20 = param_2;
    uStack_24 = 0;
    puStack_28 = (undefined1 *)0x6d6587;
    FUN_00472d90();
    FUN_0040e4d0(&puStack_28);
    FUN_00677150();
  }
  return;
}

