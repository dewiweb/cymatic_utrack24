// rea decompile_all
// name: FUN_00465450
// address: 0x465450
// body: available
// range: 0x465450-0x465761 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465450(undefined4 param_1,float *param_2)

{
  float *pfVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *in_ECX;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_4c [24];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pfVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700fc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*in_ECX != 0) {
    fVar5 = param_2[1];
    if ((((fVar5 == 0.0) && (param_2[3] == 0.0)) && (*param_2 == 1.0)) &&
       ((param_2[4] == 1.0 && (*(char *)((int)in_ECX + 0x25) == '\0')))) {
      FUN_0046d440(DAT_00c76070 ^ (uint)&stack0xfffffffc);
      fVar5 = pfVar1[5];
      fVar7 = pfVar1[2];
      if ((char)in_ECX[9] != '\0') {
        FUN_0046d2e0(in_ECX,in_ECX + 0x16,param_1,fVar7 + (float)in_ECX[7],(float)in_ECX[8] + fVar5)
        ;
        ExceptionList = local_10;
        return;
      }
      param_2 = (float *)in_ECX[0x16];
      local_14 = (float)in_ECX[2] * fVar5 + (float)in_ECX[1] * fVar7 + (float)in_ECX[3];
      local_18 = (float)in_ECX[4] * fVar7 + (float)in_ECX[5] * fVar5 + (float)in_ECX[6];
      if (param_2 != (float *)0x0) {
        LOCK();
        param_2[1] = (float)((int)param_2[1] + 1);
        UNLOCK();
      }
      local_8 = 0;
      FUN_00680a80();
      fVar5 = (float)in_ECX[1] / (float)in_ECX[5] - 1.0;
      FUN_00411660();
      if (0.01 < fVar5) {
        FUN_00643b30();
      }
      FUN_0046d2e0(in_ECX,&param_2,param_1,local_14,local_18);
      if (param_2 != (float *)0x0) {
        LOCK();
        piVar2 = (int *)(param_2 + 1);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*param_2)(1);
          ExceptionList = local_10;
          return;
        }
      }
    }
    else {
      local_18 = *(float *)(in_ECX[0x16] + 0x14);
      fVar7 = *param_2 * 0.0;
      fVar6 = *(float *)(in_ECX[0x16] + 0x18) * local_18;
      local_30 = fVar5 * local_18 + fVar7;
      local_34 = *param_2 * fVar6 + fVar5 * 0.0;
      local_2c = fVar7 + fVar5 * 0.0 + param_2[2];
      fVar5 = param_2[4] * 0.0;
      fVar7 = param_2[3] * 0.0;
      local_28 = param_2[3] * fVar6 + fVar5;
      local_24 = param_2[4] * local_18 + fVar7;
      local_20 = fVar7 + fVar5 + param_2[5];
      param_2 = (float *)local_30;
      FUN_00464550(local_4c,&local_34);
      piVar2 = (int *)FUN_00643d40();
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x20))(param_1,local_4c,local_18);
      local_8 = 1;
      if (puVar3 != (undefined4 *)0x0) {
        param_2 = operator_new(0x28);
        iVar4 = FUN_0046de00(puVar3);
        if (iVar4 != 0) {
          *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        }
        FUN_0046de90(iVar4,0);
        FID_conflict__free((void *)*puVar3);
        FUN_004bfe14(puVar3,0x20);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

