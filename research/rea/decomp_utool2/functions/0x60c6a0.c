// rea decompile_all
// name: FUN_0060c6a0
// address: 0x60c6a0
// body: available
// range: 0x60c6a0-0x60c86f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060c6a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,char param_7,char param_8,int *param_9)

{
  int *piVar1;
  int iVar2;
  int iStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  int local_30;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  local_8 = *param_9;
  if (param_7 != '\0') {
    puStack_3c = (undefined1 *)&local_30;
    puStack_34 = (undefined1 *)0x0;
    iStack_38 = 0x1005004;
    iStack_40 = 0x60c6ca;
    FUN_006e8e70();
    puStack_34 = local_10;
    iStack_38 = 0x60c6d6;
    piVar1 = (int *)FUN_00680d30();
    local_8 = *piVar1;
  }
  if (param_8 != '\0') {
    puStack_3c = (undefined1 *)&local_30;
    puStack_34 = (undefined1 *)0x0;
    iStack_38 = 0x1005003;
    iStack_40 = 0x60c6f4;
    FUN_006e8e70();
    puStack_34 = &param_8;
    iStack_38 = 0x60c700;
    piVar1 = (int *)FUN_00680d30();
    local_8 = *piVar1;
  }
  puStack_34 = (undefined1 *)0x60c714;
  local_30 = local_8;
  FUN_00684c50();
  local_30 = 0;
  puStack_34 = (undefined1 *)param_6;
  iVar2 = *(int *)*param_2;
  iStack_38 = param_5;
  puStack_3c = (undefined1 *)param_4;
  iStack_40 = 0x60c72f;
  puStack_34 = (undefined1 *)FUN_00472d90();
  iStack_38 = 0x60c738;
  (**(code **)(iVar2 + 0x54))();
  puStack_3c = (undefined1 *)&iStack_38;
  if (param_7 == '\0') {
    iStack_40 = 0x60c791;
    FUN_00684210();
    puStack_3c = (undefined1 *)0x60c798;
    FUN_00684c50();
    iVar2 = param_5;
    if (param_6 < param_5) {
      iVar2 = param_6;
    }
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    iStack_44 = 1;
    if (1 < iVar2) {
      iStack_44 = iVar2;
    }
    iVar2 = *(int *)(local_c + 0xb4);
    if (iVar2 == 0) {
      iVar2 = *(int *)*param_2;
      puStack_3c = (undefined1 *)((int)(param_6 * 7 + (param_6 * 7 >> 0x1f & 7U)) >> 3);
      iStack_40 = param_5 + iStack_44 * -2;
      iStack_44 = param_4;
    }
    else if (iVar2 == 1) {
      iVar2 = *(int *)*param_2;
      iStack_40 = param_5 - ((int)((param_5 >> 0x1f & 7U) + param_5) >> 3);
      puStack_3c = (undefined1 *)(param_6 + iStack_44 * -2);
      iStack_44 = param_4 + iStack_44;
    }
    else {
      if (iVar2 != 2) {
        return;
      }
      iVar2 = *(int *)*param_2;
      puStack_3c = (undefined1 *)(param_6 + iStack_44 * -2);
      iStack_40 = (int)(param_5 * 7 + (param_5 * 7 >> 0x1f & 7U)) >> 3;
      iStack_44 = param_4 + iStack_44;
    }
    iStack_38 = 0;
    puStack_3c = (undefined1 *)FUN_00472d90();
    iStack_40 = 0x60c867;
    (**(code **)(iVar2 + 0x54))();
    return;
  }
  iStack_38 = *param_9;
  puStack_3c = (undefined1 *)0x60c74f;
  FUN_00684c50();
  iStack_38 = param_6;
  puStack_3c = (undefined1 *)param_5;
  iStack_40 = param_4;
  iStack_44 = 0x60c761;
  FUN_00472d90();
  FUN_0040e4d0(&iStack_44);
  FUN_00677150();
  return;
}

