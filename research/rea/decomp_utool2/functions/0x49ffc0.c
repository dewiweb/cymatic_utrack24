// rea decompile_all
// name: FUN_0049ffc0
// address: 0x49ffc0
// body: available
// range: 0x49ffc0-0x4a01e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049ffc0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  wint_t wVar3;
  _locale_t _Locale;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  undefined4 extraout_ECX;
  uint uVar7;
  undefined4 in_XMM0_Da;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703158;
  local_10 = ExceptionList;
  _Locale = (_locale_t)(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x10) < 1) {
    return;
  }
  iVar6 = 0;
  param_1 = 0;
  ExceptionList = &local_10;
  if ((0 < *(int *)(in_ECX + 0x10)) &&
     (puVar1 = *(undefined4 **)(*(int *)(in_ECX + 8) + -4 + *(int *)(in_ECX + 0x10) * 4),
     puVar1 != (undefined4 *)0x0)) {
    if (*(char *)*puVar1 == '\0') {
      wVar3 = 0;
    }
    else {
      iVar6 = FUN_0044ec90();
      FUN_0044ebd0(iVar6 + -1);
      wVar3 = FUN_00426f70();
    }
    iVar6 = FID_conflict___iswspace_l(wVar3,_Locale);
    if (iVar6 == 0) {
      iVar6 = **(int **)(iVar2 + 8);
      FUN_0044ebd0(0);
      wVar3 = FUN_00426f70();
      iVar4 = FID_conflict___iswspace_l(wVar3,_Locale);
      if (iVar4 == 0) {
        FUN_00636ec0(iVar6);
        puVar1[2] = (uint)(ushort)(*(short *)(iVar6 + 8) + *(short *)(puVar1 + 2));
        uVar5 = FUN_0049fd60(&param_1,param_2);
        local_8 = 0;
        FUN_006831f0(uVar5);
        puVar1[1] = in_XMM0_Da;
        FUN_00637c10();
        FUN_004ac6e0(extraout_ECX);
        iVar6 = 1;
        param_1 = 1;
        goto LAB_004a00e3;
      }
    }
    iVar6 = 0;
  }
LAB_004a00e3:
  iVar4 = (*(int *)(in_ECX + 0x10) - iVar6) + *(int *)(iVar2 + 0x10);
  if (*(int *)(in_ECX + 0xc) < iVar4) {
    FUN_00409cf0(iVar4 / 2 + 8 + iVar4 & 0xfffffff8);
    iVar6 = param_1;
  }
  if (iVar6 < *(int *)(iVar2 + 0x10)) {
    do {
      param_2 = *(undefined4 *)(*(int *)(iVar2 + 8) + iVar6 * 4);
      iVar6 = *(int *)(in_ECX + 0x10);
      iVar4 = iVar6 + 1;
      if ((int)*(uint *)(in_ECX + 0xc) < iVar4) {
        if (iVar4 < 0) {
          iVar4 = iVar6 + 2;
        }
        uVar7 = iVar6 + 9 + (iVar4 >> 1) & 0xfffffff8;
        if (*(uint *)(in_ECX + 0xc) != uVar7) {
          if ((int)uVar7 < 1) {
            FID_conflict__free(*(void **)(in_ECX + 8));
            *(undefined4 *)(in_ECX + 8) = 0;
          }
          else if (*(int *)(in_ECX + 8) == 0) {
            uVar5 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 8) = uVar5;
          }
          else {
            uVar5 = FUN_004c553b(*(int *)(in_ECX + 8),uVar7 * 4);
            *(undefined4 *)(in_ECX + 8) = uVar5;
          }
          *(uint *)(in_ECX + 0xc) = uVar7;
        }
      }
      iVar6 = *(int *)(in_ECX + 0x10);
      *(int *)(in_ECX + 0x10) = iVar6 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 8) + iVar6 * 4) = param_2;
      iVar6 = param_1 + 1;
      param_1 = iVar6;
    } while (iVar6 < *(int *)(iVar2 + 0x10));
  }
  if (*(int *)(iVar2 + 0xc) != 0) {
    FID_conflict__free(*(void **)(iVar2 + 8));
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  *(undefined4 *)(iVar2 + 0x10) = 0;
  ExceptionList = local_10;
  return;
}

