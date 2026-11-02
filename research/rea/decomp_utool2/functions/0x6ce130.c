// rea decompile_all
// name: FUN_006ce130
// address: 0x6ce130
// body: available
// range: 0x6ce130-0x6ce347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006ce130(undefined4 *param_1,int *param_2,int *param_3,float param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  float local_60 [5];
  undefined4 local_4c;
  int *local_48;
  int *local_44;
  undefined1 local_40;
  int local_3c;
  int local_38;
  double local_34;
  undefined1 local_2c [8];
  double local_24;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007268e1;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_14 = param_2[2];
  iVar4 = *param_2;
  iVar5 = param_2[1];
  local_18 = param_2[3];
  local_34 = *(double *)(param_2 + 2);
  local_3c = iVar4;
  local_38 = iVar5;
  if ((char)param_3 != '\0') {
    uVar2 = FUN_006e6400(local_2c);
    piVar3 = (int *)FUN_0044db90(local_60 + 2,uVar2);
    local_14 = piVar3[2];
    iVar4 = *piVar3;
    iVar5 = piVar3[1];
    local_18 = piVar3[3];
  }
  if ((0 < local_14) && (0 < local_18)) {
    local_34 = (double)((float)local_14 * param_4) + 6755399441055744.0;
    local_24 = (double)((float)local_18 * param_4) + 6755399441055744.0;
    local_8 = 0;
    FUN_00673a00(&param_3,2 - (uint)((*(byte *)(in_ECX + 0x68) & 4) != 0),local_34._0_4_,
                 local_24._0_4_,1);
    local_8 = 1;
    local_48 = (int *)0x0;
    if (param_3 != (int *)0x0) {
      local_48 = (int *)(**(code **)(*param_3 + 4))(uVar1);
    }
    local_40 = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_44 = local_48;
    if ((local_34._0_4_ != *(int *)(in_ECX + 0x18)) || (local_24._0_4_ != *(int *)(in_ECX + 0x1c)))
    {
      local_60[1] = 0.0;
      local_60[2] = 0.0;
      local_60[3] = 0.0;
      local_4c = 0;
      local_60[0] = (float)local_34._0_4_ / (float)local_14;
      local_60[4] = (float)local_24._0_4_ / (float)local_18;
      (**(code **)(*local_48 + 0xc))(local_60);
    }
    FUN_00677430(-iVar4,-iVar5);
    FUN_006ce360(&local_48,1);
    piVar3 = param_3;
    param_3 = (undefined4 *)0x0;
    *param_1 = piVar3;
    if (local_44 != (int *)0x0) {
      (**(code **)*local_44)(1);
    }
    if (param_3 != (undefined4 *)0x0) {
      LOCK();
      piVar3 = param_3 + 1;
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*param_3)(1);
      }
    }
    ExceptionList = local_10;
    return param_1;
  }
  *param_1 = 0;
  ExceptionList = local_10;
  return param_1;
}

