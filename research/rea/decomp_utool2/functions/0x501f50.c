// rea decompile_all
// name: FUN_00501f50
// address: 0x501f50
// body: available
// range: 0x501f50-0x5021ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00501f50(int param_1)

{
  void *_Memory;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double in_XMM0_Qa;
  double dVar8;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _local_34 = (double)CONCAT44(0x501f85,local_34);
  FUN_004182e0();
  if (*(int *)(param_1 + 0x2c) != 0) {
    _local_34 = (double)CONCAT44(*(void **)(param_1 + 0x28),0x501f95);
    FID_conflict__free(*(void **)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (0 < *(int *)(in_ECX + 0x374)) {
    bVar7 = *(int *)(in_ECX + 0x374) != 0;
    do {
      if (bVar7) {
        piVar4 = *(int **)(*(int *)(in_ECX + 0x36c) + uVar6 * 4);
      }
      else {
        piVar4 = (int *)0x0;
      }
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        iVar1 = piVar4[1];
        if (iVar1 == 0) {
          dVar8 = 0.0;
          if ((piVar4[2] == 0) || (iVar1 = *(int *)(piVar4[2] + 0x18), iVar1 == 0))
          goto LAB_0050203b;
          _local_34 = (double)CONCAT44(0x502075,local_34);
          FUN_006f56f0();
          in_XMM0_Qa = in_XMM0_Qa / (double)iVar1;
        }
        else {
          _local_34 = (double)CONCAT44(0x502014,local_34);
          FUN_006f56f0();
          dVar8 = in_XMM0_Qa / (double)*(int *)(iVar1 + 0x38);
          in_XMM0_Qa = *(double *)(iVar1 + 0x88);
          if ((in_XMM0_Qa <= 0.0) || (in_XMM0_Qa <= dVar8)) {
LAB_0050203b:
            in_XMM0_Qa = dVar8;
          }
        }
      }
      else {
        in_XMM0_Qa = *(double *)(iVar1 + 0x68);
        if ((in_XMM0_Qa <= 0.0) ||
           (in_XMM0_Qa < *(double *)(iVar1 + 0x38) || in_XMM0_Qa == *(double *)(iVar1 + 0x38))) {
          in_XMM0_Qa = *(double *)(iVar1 + 0x38);
        }
      }
      if (uVar6 < *(uint *)(in_ECX + 0x374)) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x36c) + uVar6 * 4);
      }
      else {
        iVar1 = 0;
      }
      uStack_38 = *(undefined4 *)(iVar1 + 0xc);
      if (uVar6 < *(uint *)(in_ECX + 0x374)) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x36c) + uVar6 * 4);
      }
      else {
        iVar1 = 0;
      }
      uStack_3c = *(undefined4 *)(iVar1 + 0xc);
      if (uVar6 < *(uint *)(in_ECX + 0x374)) {
        uStack_40 = *(undefined4 *)(*(int *)(in_ECX + 0x36c) + uVar6 * 4);
      }
      else {
        uStack_40 = 0;
      }
      local_14 = (undefined1 *)&uStack_40;
      puStack_44 = (undefined1 *)&uStack_40;
      _local_34 = in_XMM0_Qa;
      FUN_00500da0();
      local_8 = 0;
      if (uVar6 < *(uint *)(in_ECX + 0x374)) {
        puStack_44 = *(undefined1 **)(*(int *)(in_ECX + 0x36c) + uVar6 * 4);
      }
      else {
        puStack_44 = (undefined1 *)0x0;
      }
      FUN_00503750(&puStack_44);
      FUN_00411070(&local_18);
      local_8 = CONCAT31((int3)((uint)local_8 >> 8),2);
      local_14 = (undefined1 *)FUN_00558420();
      iVar1 = *(int *)(param_1 + 0x30);
      iVar2 = iVar1 + 1;
      if (*(int *)(param_1 + 0x2c) < iVar2) {
        if (iVar2 < 0) {
          iVar2 = iVar1 + 2;
        }
        uVar5 = iVar1 + 9 + (iVar2 >> 1) & 0xfffffff8;
        if (*(uint *)(param_1 + 0x2c) != uVar5) {
          if ((int)uVar5 < 1) {
            _Memory = *(void **)(param_1 + 0x28);
            _local_34 = (double)CONCAT44(_Memory,0x502168);
            FID_conflict__free(_Memory);
            *(undefined4 *)(param_1 + 0x28) = 0;
          }
          else {
            iVar1 = *(int *)(param_1 + 0x28);
            if (iVar1 == 0) {
              _local_34 = (double)CONCAT44(uVar5 * 4,0x502141);
              uVar3 = FUN_004c554b();
              *(undefined4 *)(param_1 + 0x28) = uVar3;
            }
            else {
              _local_34 = (double)CONCAT44(uVar5 * 4,iVar1);
              uStack_38 = 0x502154;
              uVar3 = FUN_004c553b();
              *(undefined4 *)(param_1 + 0x28) = uVar3;
            }
          }
          *(uint *)(param_1 + 0x2c) = uVar5;
        }
      }
      iVar1 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      local_8 = 0xffffffff;
      *(undefined1 **)(*(int *)(param_1 + 0x28) + iVar1 * 4) = local_14;
      piVar4 = (int *)(local_18 + -8);
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          _local_34 = (double)CONCAT44(piVar4,0x5021c4);
          FID_conflict__free(piVar4);
        }
      }
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < *(uint *)(in_ECX + 0x374);
    } while ((int)uVar6 < (int)*(uint *)(in_ECX + 0x374));
  }
  ExceptionList = local_10;
  return;
}

