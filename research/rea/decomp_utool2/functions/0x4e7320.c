// rea decompile_all
// name: FUN_004e7320
// address: 0x4e7320
// body: available
// range: 0x4e7320-0x4e74e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e7320(int *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007048d8;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xf5));
  local_8 = 0;
  local_18 = 0;
  if (0 < *(int *)(in_ECX + 0x1d0)) {
    bVar9 = *(int *)(in_ECX + 0x1d0) != 0;
    do {
      if (bVar9) {
        uVar7 = *(uint *)(*(int *)(in_ECX + 0x1c8) + local_18 * 4);
      }
      else {
        uVar7 = 0;
      }
      iVar5 = param_1[2];
      while (iVar5 <= (int)uVar7) {
        iVar5 = param_1[2];
        iVar6 = iVar5 + 1;
        if (param_1[1] < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar5 + 2;
          }
          uVar8 = iVar5 + 9 + (iVar6 >> 1) & 0xfffffff8;
          if (param_1[1] != uVar8) {
            if ((int)uVar8 < 1) {
              FID_conflict__free((void *)*param_1);
              *param_1 = 0;
            }
            else if (*param_1 == 0) {
              iVar5 = FUN_004c554b();
              *param_1 = iVar5;
            }
            else {
              iVar5 = FUN_004c553b(*param_1,uVar8 * 4,uVar4);
              *param_1 = iVar5;
            }
            param_1[1] = uVar8;
          }
        }
        iVar5 = param_1[2];
        param_1[2] = iVar5 + 1;
        puVar1 = (undefined4 *)(*param_1 + iVar5 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
        }
        iVar5 = param_1[2];
      }
      for (puVar2 = *(uint **)(*(int *)(in_ECX + 0x250) +
                              ((int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) %
                              *(int *)(in_ECX + 600)) * 4); puVar2 != (uint *)0x0;
          puVar2 = (uint *)puVar2[2]) {
        if (*puVar2 == uVar7) {
          uVar8 = puVar2[1];
          goto LAB_004e7446;
        }
      }
      uVar8 = 0;
LAB_004e7446:
      uVar3 = param_1[2];
      if (uVar7 < uVar3) {
        *(uint *)(*param_1 + uVar7 * 4) = uVar8;
      }
      else if (-1 < (int)uVar7) {
        iVar5 = uVar3 + 1;
        if (param_1[1] < iVar5) {
          if (iVar5 < 0) {
            iVar5 = uVar3 + 2;
          }
          FUN_00409cf0((iVar5 >> 1) + uVar3 + 9 & 0xfffffff8);
        }
        iVar5 = param_1[2];
        param_1[2] = iVar5 + 1;
        puVar2 = (uint *)(*param_1 + iVar5 * 4);
        if (puVar2 != (uint *)0x0) {
          *puVar2 = uVar8;
        }
      }
      FUN_004095f0(uVar7);
      local_18 = local_18 + 1;
      bVar9 = local_18 < *(uint *)(in_ECX + 0x1d0);
    } while ((int)local_18 < (int)*(uint *)(in_ECX + 0x1d0));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xf5));
  ExceptionList = local_10;
  return;
}

