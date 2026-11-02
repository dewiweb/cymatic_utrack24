// rea decompile_all
// name: FUN_0068d650
// address: 0x68d650
// body: available
// range: 0x68d650-0x68d76d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068d650(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  float local_48 [5];
  undefined4 local_34;
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  int *local_20;
  undefined4 *local_1c;
  char local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0072154e;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  DAT_00c8a9c8 = DAT_00c8a9dc;
  local_20 = param_1;
  local_1c = (undefined4 *)0x0;
  local_18 = '\0';
  local_8 = 0;
  if (*(int *)(in_ECX[1] + 0x24) != 0) {
    uVar3 = FUN_006cf480(local_48);
    (**(code **)(*param_1 + 0xc))(uVar3);
  }
  (**(code **)(*in_ECX + 0x1c))(local_30,uVar2);
  iVar1 = in_ECX[1];
  if ((local_28 != *(int *)(iVar1 + 0x18)) || (local_24 != *(int *)(iVar1 + 0x1c))) {
    local_48[1] = 0.0;
    local_48[2] = 0.0;
    local_48[3] = 0.0;
    local_34 = 0;
    local_48[0] = (float)local_28 / (float)*(int *)(iVar1 + 0x18);
    local_48[4] = (float)local_24 / (float)*(int *)(iVar1 + 0x1c);
    if (local_18 != '\0') {
      local_18 = '\0';
      (**(code **)(*local_20 + 0x34))();
    }
    (**(code **)(*local_20 + 0xc))(local_48);
  }
  FUN_006ce360(&local_20,1);
  if (local_1c != (undefined4 *)0x0) {
    (**(code **)*local_1c)(1);
  }
  ExceptionList = local_10;
  return;
}

