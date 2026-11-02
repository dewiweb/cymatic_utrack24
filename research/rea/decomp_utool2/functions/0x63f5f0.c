// rea decompile_all
// name: FUN_0063f5f0
// address: 0x63f5f0
// body: available
// range: 0x63f5f0-0x63f829 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0063f5f0(ushort *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *_Memory;
  short *_Memory_00;
  uint uVar8;
  undefined4 *puVar9;
  int *in_ECX;
  int iVar10;
  int in_EDX;
  undefined4 *puVar11;
  undefined4 uVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f9e2;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = (int)&DAT_00bfe12c;
  uVar2 = *(undefined4 *)(in_EDX + 0xc);
  uVar6 = (uint)(ushort)(param_1[5] << 8 | param_1[5] >> 8);
  uVar7 = uVar6 + param_2;
  FUN_00622c00(uVar7 + param_4,
               param_3 + (uint)CARRY4(uVar6,param_2) + param_5 + (uint)CARRY4(uVar7,param_4));
  uVar3 = param_1[4] << 8 | param_1[4] >> 8;
  uVar6 = (uint)uVar3;
  uVar4 = *param_1 << 8 | *param_1 >> 8;
  if ((uVar4 == 0) || (uVar4 == 3)) {
    uVar7 = (uint)(uVar3 >> 1);
    uVar12 = 0;
    local_8 = 1;
    FID_conflict__free((void *)0x0);
    _Memory_00 = (short *)FUN_004c5556(uVar7 + 2,2,uVar12,uVar5);
    if (uVar6 != 0) {
      uVar5 = *(uint *)(in_EDX + 0xc);
      if (uVar5 < *(uint *)(in_EDX + 8)) {
        uVar8 = *(uint *)(in_EDX + 8) - uVar5;
        if (uVar8 < uVar6) {
          uVar6 = uVar8;
        }
        if (uVar6 != 0) {
          FUN_004c2c30(_Memory_00,*(int *)(in_EDX + 4) + uVar5,uVar6);
          *(int *)(in_EDX + 0xc) = *(int *)(in_EDX + 0xc) + uVar6;
        }
      }
    }
    iVar10 = 0;
    if (uVar7 != 0xffffffff) {
      do {
        _Memory_00[iVar10] = _Memory_00[iVar10] << 8 | (ushort)_Memory_00[iVar10] >> 8;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)(uVar7 + 1));
    }
    if ((_Memory_00 == (short *)0x0) || (*_Memory_00 == 0)) {
      puVar11 = (undefined4 *)&DAT_00bfe12c;
    }
    else {
      iVar10 = FUN_0045ddd0(_Memory_00);
      uVar6 = iVar10 + 4U & 0xfffffffc;
      puVar9 = (undefined4 *)FUN_004bfe22(uVar6 + 0xb);
      puVar9[1] = uVar6;
      puVar11 = puVar9 + 2;
      *puVar9 = 0;
      FUN_0045e480(_Memory_00);
    }
    iVar10 = *in_ECX;
    *in_ECX = (int)puVar11;
    piVar1 = (int *)(iVar10 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        FID_conflict__free(piVar1);
      }
    }
    FID_conflict__free(_Memory_00);
  }
  else {
    uVar12 = 0;
    local_8 = 2;
    FID_conflict__free((void *)0x0);
    _Memory = (void *)FUN_004c5556(uVar6 + 1,1,uVar12,uVar5);
    if (uVar6 != 0) {
      uVar5 = *(uint *)(in_EDX + 0xc);
      if (uVar5 < *(uint *)(in_EDX + 8)) {
        uVar7 = *(uint *)(in_EDX + 8) - uVar5;
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
        if (uVar6 != 0) {
          FUN_004c2c30(_Memory,*(int *)(in_EDX + 4) + uVar5,uVar6);
          *(int *)(in_EDX + 0xc) = *(int *)(in_EDX + 0xc) + uVar6;
        }
      }
    }
    FUN_0045cb50(_Memory);
    iVar10 = *in_ECX;
    *in_ECX = (int)param_1;
    piVar1 = (int *)(iVar10 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        FID_conflict__free(piVar1);
      }
    }
    FID_conflict__free(_Memory);
  }
  FUN_00622c00(uVar2,0);
  ExceptionList = local_10;
  return in_ECX;
}

