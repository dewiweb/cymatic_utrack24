// rea decompile_all
// name: FUN_00676a00
// address: 0x676a00
// body: available
// range: 0x676a00-0x676a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00676a00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_60 [24];
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  undefined1 local_18 [20];
  
  puVar3 = local_18;
  FUN_00472d90(param_3,param_4,param_5,puVar3);
  FUN_0040e4d0(puVar3);
  if (*param_1 != 0) {
    uVar4 = 0;
    puVar3 = local_18;
    puVar2 = local_38;
    FUN_00673860(local_48);
    uVar1 = FUN_0040e4d0(puVar2);
    uVar1 = FUN_00677570(local_60,uVar1,puVar3);
    FUN_00676990(param_1,uVar1,uVar4);
  }
  return;
}

