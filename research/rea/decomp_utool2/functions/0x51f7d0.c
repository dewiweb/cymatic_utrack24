// rea decompile_all
// name: FUN_0051f7d0
// address: 0x51f7d0
// body: available
// range: 0x51f7d0-0x51fa17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0051f7d0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  double dVar9;
  double dVar10;
  undefined8 local_1c;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070a5e0;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  param_1 = (undefined4 *)((int)param_1 + -1);
  if (param_1 != (undefined4 *)0x0) {
    return false;
  }
  if (param_2 == 0) {
    return false;
  }
  if (*(int *)(param_2 + 8) != 2) {
    return false;
  }
  iVar8 = *(int *)(*(int *)(in_ECX + 0x78) + 0xc);
  ExceptionList = &local_10;
  param_2 = iVar8;
  FUN_0040ebb0(&param_1);
  puVar2 = param_1;
  local_8 = 0;
  if (iVar8 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return false;
    }
    LOCK();
    piVar1 = param_1 + 1;
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 != 1) {
      ExceptionList = local_10;
      return false;
    }
    (**(code **)*param_1)(1,uVar5);
    ExceptionList = local_10;
    return false;
  }
  if (param_1 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return false;
  }
  puVar6 = (undefined4 *)FUN_0055eba0(local_14);
  cVar3 = *(char *)*puVar6;
  FUN_00637c10();
  if (cVar3 == '\0') {
    iVar7 = FUN_00410ec0();
    if ((*(int *)(iVar8 + 0x28) == iVar7) &&
       (iVar7 = FUN_0040eb60(), *(int *)(iVar8 + 0x2c) == iVar7)) {
      dVar9 = *(double *)(iVar8 + 0x68);
      if ((dVar9 <= 0.0) ||
         (dVar9 < *(double *)(iVar8 + 0x38) || dVar9 == *(double *)(iVar8 + 0x38))) {
        dVar9 = *(double *)(iVar8 + 0x38);
      }
      local_1c = dVar9;
      FUN_006f56f0();
      dVar10 = *(double *)(puVar2 + 0x22);
      if ((dVar10 <= 0.0) || (dVar10 <= dVar9 / (double)(int)puVar2[0xe])) {
        dVar10 = dVar9 / (double)(int)puVar2[0xe];
      }
      dVar10 = local_1c - dVar10;
      FUN_00413660();
      if ((dVar10 <= 2.0) &&
         (cVar3 = *(char *)puVar2[0x20], cVar4 = FUN_00410f00(), iVar7 = param_3,
         (bool)cVar4 == (cVar3 != '\0'))) {
        if (*(int *)(iVar8 + 0x24) == 1) {
          iVar8 = FUN_0053fba0(param_3);
          if (iVar8 == 0) {
            iVar8 = 1;
          }
          iVar7 = puVar2[0x19];
          FUN_004030d0();
          ExceptionList = local_10;
          return iVar8 != iVar7;
        }
        iVar8 = FUN_0053fba0(param_3);
        if (puVar2[0xb] == iVar7) {
          iVar7 = puVar2[0x19];
          FUN_004030d0();
          ExceptionList = local_10;
          return iVar8 != iVar7;
        }
        goto LAB_0051f8cf;
      }
    }
  }
  else {
    FUN_0055eba0((int)&local_1c + 4);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0053fdb0(local_14);
    cVar3 = FUN_00637870();
    FUN_00637c10();
    FUN_00637c10();
    if (cVar3 == '\0') {
      if (((*(int *)(param_2 + 0x24) < 2) || (param_3 < 1)) || (puVar2[0xb] == param_3)) {
        FUN_004030d0();
        ExceptionList = local_10;
        return false;
      }
LAB_0051f8cf:
      FUN_004030d0();
      ExceptionList = local_10;
      return (bool)2;
    }
  }
  FUN_004030d0();
  ExceptionList = local_10;
  return true;
}

