// rea decompile_all
// name: FUN_006da700
// address: 0x6da700
// body: available
// range: 0x6da700-0x6da812 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006da700(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (param_4[3] + param_4[2] + param_4[1] + *param_4 != 0) {
    puStack_34 = &local_14;
    puStack_38 = &local_24;
    local_14 = 0;
    uStack_10 = 0;
    uStack_c = param_2;
    uStack_8 = param_3;
    uStack_3c = 0x6da744;
    FUN_004107c0();
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      puStack_34 = (undefined4 *)0x6da758;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    *(undefined1 *)(param_1 + 2) = 0;
    local_14 = local_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    uStack_8 = uStack_18;
    puStack_34 = (undefined4 *)0x6da76b;
    (**(code **)(*(int *)*param_1 + 0x34))();
    puStack_34 = &local_14;
    puStack_38 = (undefined4 *)0x6da776;
    (**(code **)(*(int *)*param_1 + 0x1c))();
    puStack_38 = (undefined4 *)0x50000000;
    uStack_3c = 0x6da786;
    FUN_00684c50();
    local_14 = 0;
    uStack_10 = 0;
    uStack_c = param_2;
    uStack_8 = param_3;
    FUN_0040e4d0(&uStack_44);
    FUN_00677150();
    puStack_38 = (undefined4 *)0x19000000;
    uStack_3c = 0x6da7c5;
    FUN_00684c50();
    puStack_38 = (undefined4 *)0x1;
    uStack_3c = 1;
    puStack_40 = &local_14;
    uStack_44 = 0x6da7d5;
    FUN_0040e510();
    FUN_0040e4d0(&uStack_44);
    FUN_00677150();
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      return;
    }
    puStack_38 = (undefined4 *)0x6da80a;
    (**(code **)(*(int *)*param_1 + 0x38))();
  }
  return;
}

