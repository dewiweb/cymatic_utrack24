// rea decompile_all
// name: FUN_006c3530
// address: 0x6c3530
// body: available
// range: 0x6c3530-0x6c3647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c3530(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  undefined4 *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  piVar1 = (int *)(in_ECX + 0x78);
  if (*(int *)(in_ECX + 0x78) != 0) {
    local_8 = *(undefined4 **)(in_ECX + 0x7c);
    if ((0.0 < (float)local_8) && (*(char *)(in_ECX + 0x83) != -1)) {
      if (*(char *)(param_1 + 2) != '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
        local_48 = (undefined4 *)0x6c3577;
        (**(code **)(*(int *)*param_1 + 0x34))();
      }
      local_48 = local_8;
      (**(code **)(*(int *)*param_1 + 0x48))();
      local_20 = 0x3f800000;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      local_10 = 0x3f800000;
      local_c = 0;
      if (*piVar1 != 0) {
        local_48 = (undefined4 *)0x6c35b0;
        cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
        if (cVar2 == '\0') {
          local_48 = &local_20;
          (**(code **)(*(int *)*param_1 + 0x60))(piVar1);
        }
      }
    }
    if (*(char *)(in_ECX + 0x83) != '\0') {
      FUN_00684d10(&local_48);
      FUN_00684c50();
      local_38 = 0x3f800000;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      local_28 = 0x3f800000;
      local_24 = 0;
      if (*piVar1 != 0) {
        local_48 = (undefined4 *)0x6c3609;
        cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
        if (cVar2 == '\0') {
          local_48 = (undefined4 *)0x6c3614;
          (**(code **)(*(int *)*param_1 + 0x34))();
          local_48 = &local_38;
          (**(code **)(*(int *)*param_1 + 0x24))(piVar1);
          (**(code **)(*(int *)*param_1 + 0x2c))(&uStack_18);
          (**(code **)(*(int *)*param_1 + 0x54))(&uStack_18,0);
          (**(code **)(*(int *)*param_1 + 0x38))();
        }
      }
    }
  }
  return;
}

