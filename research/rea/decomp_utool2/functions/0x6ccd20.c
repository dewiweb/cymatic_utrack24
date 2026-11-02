// rea decompile_all
// name: FUN_006ccd20
// address: 0x6ccd20
// body: available
// range: 0x6ccd20-0x6cce46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ccd20(int param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 in_XMM2_Da;
  undefined1 local_98 [64];
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  float local_24;
  float local_20;
  undefined2 local_1c;
  double local_18;
  undefined4 local_c;
  
  local_c = in_XMM2_Da;
  piVar3 = (int *)FUN_006cecc0();
  piVar1 = in_ECX;
  if (piVar3 != (int *)0x0) {
    for (; piVar3 != piVar1; piVar1 = (int *)piVar1[3]) {
      if (piVar1 == (int *)0x0) {
        cVar2 = (**(code **)(*piVar3 + 0x9c))();
        if (cVar2 == '\0') {
          return;
        }
        break;
      }
    }
  }
  local_48 = *(uint *)(param_1 + 0x20) | DAT_00c8a9c8 & 0xffffff8f;
  local_44 = 0;
  local_58 = param_2;
  local_54 = param_3;
  local_38 = param_4;
  local_18._0_4_ = SUB84((double)param_2 + 6755399441055744.0,0);
  local_50 = local_18._0_4_;
  local_30 = param_4;
  local_28 = param_1;
  local_1c = 0;
  local_24 = param_2;
  local_18 = (double)param_3 + 6755399441055744.0;
  local_20 = param_3;
  local_4c = local_18._0_4_;
  local_34 = param_5;
  local_2c = param_5;
  if (*(code **)(*in_ECX + 0x68) == FUN_006e91e0) {
    if (in_ECX[3] != 0) {
      uVar4 = FUN_006cff90(local_98,in_ECX[3]);
      (**(code **)(*(int *)in_ECX[3] + 0x68))(uVar4,local_c);
      return;
    }
  }
  else {
    (**(code **)(*in_ECX + 0x68))(&local_58,local_c);
  }
  return;
}

