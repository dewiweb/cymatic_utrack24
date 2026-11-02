// rea decompile_all
// name: FUN_004b98a0
// address: 0x4b98a0
// body: available
// range: 0x4b98a0-0x4b9a4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b98a0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704392;
  local_10 = ExceptionList;
  if ((int *)in_ECX[2] == param_3) {
    if ((((*param_1 == in_ECX[3]) && (param_1[1] == in_ECX[4])) && (param_1[2] == in_ECX[5])) &&
       (param_1[3] == in_ECX[6])) {
      return;
    }
    ExceptionList = &local_10;
    in_ECX[3] = *param_1;
    in_ECX[4] = param_1[1];
    in_ECX[5] = param_1[2];
    in_ECX[6] = param_1[3];
    puVar3 = (undefined4 *)FUN_0040e4d0(local_20);
    fVar4 = (float)puVar3[3];
    fVar5 = (float)puVar3[2];
    uVar6 = puVar3[1];
    uVar7 = *puVar3;
    local_8 = 2;
  }
  else {
    ExceptionList = &local_10;
    if ((int *)in_ECX[2] != (int *)0x0) {
      if (0 < *(int *)(param_2 + 0x2c0c)) {
        FUN_004b9700(DAT_00c76070 ^ (uint)&stack0xfffffffc);
      }
      iVar1 = in_ECX[2];
      iVar2 = *in_ECX;
      (**(code **)(iVar2 + 0x5c))(*(undefined4 *)(iVar1 + 0x10));
      (**(code **)(iVar2 + 0x5c))(*(undefined4 *)(iVar1 + 0x14));
      in_ECX[2] = 0;
      (**(code **)(*in_ECX + 0x38))(0);
    }
    in_ECX[2] = (int)param_3;
    local_8 = 0;
    (**(code **)(*param_3 + 0x38))(param_3[1]);
    local_8 = 0xffffffff;
    iVar1 = *in_ECX;
    (**(code **)(iVar1 + 0x54))(param_3[4],2,0x1402,0,8,0);
    (**(code **)(iVar1 + 0x54))(param_3[5],4,0x1401,1,8,4);
    (**(code **)(iVar1 + 0x58))(param_3[4]);
    (**(code **)(iVar1 + 0x58))(param_3[5]);
    in_ECX[3] = *param_1;
    in_ECX[4] = param_1[1];
    in_ECX[5] = param_1[2];
    in_ECX[6] = param_1[3];
    puVar3 = (undefined4 *)FUN_0040e4d0(local_20);
    fVar4 = (float)puVar3[3];
    fVar5 = (float)puVar3[2];
    uVar6 = puVar3[1];
    uVar7 = *puVar3;
    local_8 = 1;
  }
  (**(code **)(param_3[7] + 0x70))(param_3[6],uVar7,uVar6,fVar5 * 0.5,fVar4 * 0.5);
  ExceptionList = local_10;
  return;
}

