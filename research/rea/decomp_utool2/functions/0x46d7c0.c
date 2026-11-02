// rea decompile_all
// name: FUN_0046d7c0
// address: 0x46d7c0
// body: available
// range: 0x46d7c0-0x46da6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0046d7c0(int *param_1,int *param_2,float *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 extraout_ECX;
  char cVar4;
  void *local_70 [8];
  void *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined1 local_30 [16];
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00701758;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  piVar1 = (int *)*param_2;
  if (piVar1 == (int *)0x0) {
    local_20 = 0;
    local_1c = 0;
  }
  else {
    local_20 = piVar1[3];
    local_1c = piVar1[4];
  }
  local_18 = (undefined4 *)0x0;
  local_8 = 0;
  (**(code **)(*piVar1 + 0x10))(local_30,0,0,0,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if ((((param_3[1] == 0.0) && (param_3[3] == 0.0)) && (*param_3 == 1.0)) && (param_3[4] == 1.0)) {
    if ((param_4 == 0) || ((((int)(param_3[5] * 256.0) | (int)(param_3[2] * 256.0)) & 0xe0U) == 0))
    {
      iVar2 = (int)((int)(param_3[2] * 256.0) + 0x80U) >> 8;
      iVar3 = (int)((int)(param_3[5] * 256.0) + 0x80U) >> 8;
      if ((*param_2 == 0) || (*(int *)(*param_2 + 8) != 2)) {
        FUN_004734c0(local_30,iVar2,iVar3,iVar3);
      }
      else {
        FUN_00473440(local_30,iVar2,iVar3,iVar3);
      }
      if (*(char *)(in_ECX + 0x24) != '\0') {
        iVar2 = *(int *)(in_ECX + 0x18);
        piVar1 = *(int **)(in_ECX + 8);
        *(undefined1 *)(in_ECX + 0x24) = 0;
        while (iVar2 = iVar2 + -1, -1 < iVar2) {
          if (1 < *piVar1) {
            cVar4 = '\0';
            goto LAB_0046da35;
          }
          piVar1 = piVar1 + *(int *)(in_ECX + 0x20);
        }
        *(undefined4 *)(in_ECX + 0x18) = 0;
      }
      cVar4 = *(int *)(in_ECX + 0x18) == 0;
      goto LAB_0046da35;
    }
  }
  if (param_3[4] * *param_3 - param_3[3] * param_3[1] == 0.0) {
    *param_1 = 0;
    if (local_18 != (undefined4 *)0x0) {
      (**(code **)*local_18)(1);
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_50 = (void *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_34 = 1;
  FUN_00682020((float)local_1c);
  FUN_0067da10(in_ECX + 0xc,&local_50,param_3);
  FUN_0067c730(local_70);
  FID_conflict__free(local_70[0]);
  FID_conflict__free(local_50);
  cVar4 = FUN_0067c610();
  if (cVar4 == '\0') {
    if ((*param_2 == 0) || (*(int *)(*param_2 + 8) != 2)) {
      FUN_004735e0(local_30,param_3,param_4,extraout_ECX);
    }
    else {
      FUN_00473530(local_30,param_3,param_4,extraout_ECX);
    }
  }
  cVar4 = FUN_0067c610();
LAB_0046da35:
  if (cVar4 != '\0') {
    in_ECX = 0;
  }
  *param_1 = in_ECX;
  if (in_ECX != 0) {
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
  }
  if (local_18 != (undefined4 *)0x0) {
    (**(code **)*local_18)(1);
  }
  ExceptionList = local_10;
  return param_1;
}

