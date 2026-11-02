// rea decompile_all
// name: FUN_0046a8c0
// address: 0x46a8c0
// body: available
// range: 0x46a8c0-0x46ab40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046a8c0(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  uint *puVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  void *_Memory;
  void *_Memory_00;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int in_ECX;
  int iVar10;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701520;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar10 = param_3[2] + 1;
  if (param_3[1] < iVar10) {
    FUN_00409cf0(iVar10 / 2 + 8 + iVar10 & 0xfffffff8);
  }
  iVar10 = param_3[2];
  local_18 = 0.0;
  param_3[2] = iVar10 + 1;
  puVar1 = (undefined4 *)(*param_3 + iVar10 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  FUN_00458800(uVar6);
  uVar6 = 0;
  iVar10 = *param_1;
  while (iVar10 != 0) {
    uVar6 = uVar6 + 1;
    iVar10 = param_1[uVar6];
  }
  _Memory = (void *)FUN_004c554b(uVar6 * 2);
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x2c))(*(int **)(in_ECX + 0x30),param_1,uVar6,_Memory);
  _Memory_00 = (void *)FUN_004c554b(uVar6 * 0x1c);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x28))
            (*(int **)(in_ECX + 0x30),_Memory,uVar6,_Memory_00,0);
  param_1 = (int *)0x0;
  if (uVar6 != 0) {
    piVar7 = (int *)((int)_Memory_00 + 4);
    do {
      iVar10 = param_3[2] + 1;
      local_18 = local_18 +
                 (float)((double)*piVar7 + (double)(&DAT_00c24bb0)[-(*piVar7 >> 0x1f)]) /
                 (float)*(int *)(in_ECX + 0x40);
      fVar4 = *(float *)(in_ECX + 0x34);
      if (param_3[1] < iVar10) {
        iVar8 = iVar10;
        if (iVar10 < 0) {
          iVar8 = param_3[2] + 2;
        }
        uVar9 = (iVar8 >> 1) + 8 + iVar10 & 0xfffffff8;
        if (param_3[1] != uVar9) {
          if ((int)uVar9 < 1) {
            FID_conflict__free((void *)*param_3);
            *param_3 = 0;
          }
          else if (*param_3 == 0) {
            iVar10 = FUN_004c554b();
            *param_3 = iVar10;
          }
          else {
            iVar10 = FUN_004c553b(*param_3,uVar9 << 2);
            *param_3 = iVar10;
          }
          param_3[1] = uVar9;
        }
      }
      iVar10 = param_3[2];
      param_3[2] = iVar10 + 1;
      pfVar2 = (float *)(*param_3 + iVar10 * 4);
      if (pfVar2 != (float *)0x0) {
        *pfVar2 = local_18 * fVar4;
      }
      uVar5 = *(ushort *)((int)_Memory + (int)param_1 * 2);
      iVar10 = param_2[2] + 1;
      if (param_2[1] < iVar10) {
        iVar8 = iVar10;
        if (iVar10 < 0) {
          iVar8 = param_2[2] + 2;
        }
        uVar9 = (iVar8 >> 1) + 8 + iVar10 & 0xfffffff8;
        if (param_2[1] != uVar9) {
          if ((int)uVar9 < 1) {
            FID_conflict__free((void *)*param_2);
            *param_2 = 0;
          }
          else if (*param_2 == 0) {
            iVar10 = FUN_004c554b();
            *param_2 = iVar10;
          }
          else {
            iVar10 = FUN_004c553b(*param_2,uVar9 << 2);
            *param_2 = iVar10;
          }
          param_2[1] = uVar9;
        }
      }
      iVar10 = param_2[2];
      param_2[2] = iVar10 + 1;
      puVar3 = (uint *)(*param_2 + iVar10 * 4);
      if (puVar3 != (uint *)0x0) {
        *puVar3 = (uint)uVar5;
      }
      param_1 = (int *)((int)param_1 + 1);
      piVar7 = piVar7 + 7;
    } while (param_1 < uVar6);
  }
  FID_conflict__free(_Memory_00);
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

