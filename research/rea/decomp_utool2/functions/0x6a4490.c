// rea decompile_all
// name: FUN_006a4490
// address: 0x6a4490
// body: available
// range: 0x6a4490-0x6a44f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a4490(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 auStack_18 [5];
  
  if ((*(byte *)(param_4 + 0x69) & 0x10) == 0) {
    auStack_18[0] = 0;
    if (*(int *)(param_4 + 0xc) != 0) {
      auStack_18[0] = 0x6a44ab;
      cVar1 = FUN_006e6320();
      auStack_18[0] = extraout_ECX;
      if (cVar1 == '\0') {
        return;
      }
    }
    puStack_24 = (undefined1 *)auStack_18;
    uStack_1c = 0;
    uStack_20 = 0x1000205;
    FUN_006e8e70();
    uStack_1c = 0x6a44c9;
    FUN_00684c50();
    auStack_18[0] = param_3;
    uStack_1c = param_2;
    uStack_20 = 0;
    puStack_24 = (undefined1 *)0x6a44db;
    FUN_00472d90();
    FUN_0040e4d0(&puStack_24);
    FUN_00677150();
  }
  return;
}

