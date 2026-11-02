// rea decompile_all
// name: FUN_005c1700
// address: 0x5c1700
// body: available
// range: 0x5c1700-0x5c198b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c1700(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a5cb;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar10 = param_1 * 2;
  if (param_1 * 2 < *(int *)(in_ECX + 0x24)) {
    iVar10 = *(int *)(in_ECX + 0x24);
  }
  if ((((double)CONCAT44(param_3,param_2) != *(double *)(in_ECX + 0xf8)) ||
      (iVar10 != *(int *)(in_ECX + 0x30))) || (*(char *)(in_ECX + 0x101) == '\0')) {
    FUN_006320f0();
    *(undefined1 *)(in_ECX + 0x101) = 1;
    *(ulonglong *)(in_ECX + 0xf8) = CONCAT44(param_3,param_2);
    (**(code **)(**(int **)(in_ECX + 0x18) + 4))(param_1,CONCAT44(param_3,param_2),uVar3);
    iVar2 = *(int *)(in_ECX + 0x28);
    local_8 = 0;
    if ((iVar10 != *(int *)(in_ECX + 0x30)) || (iVar2 != *(int *)(in_ECX + 0x2c))) {
      uVar3 = iVar10 + 3U & 0xfffffffc;
      iVar4 = uVar3 * iVar2;
      uVar9 = iVar2 * 4 + 0x13U & 0xfffffff0;
      iVar7 = uVar9 + 0x20 + iVar4 * 4;
      *(int *)(in_ECX + 0x34) = iVar7;
      FUN_00403500(iVar7,CONCAT31((int3)((uint)iVar4 >> 8),*(char *)(in_ECX + 0xc0) != '\0'));
      iVar4 = 0;
      iVar7 = *(int *)(in_ECX + 0x3c) + uVar9;
      *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x3c);
      if (0 < iVar2) {
        do {
          *(int *)(*(int *)(in_ECX + 0x38) + iVar4 * 4) = iVar7;
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + uVar3 * 4;
        } while (iVar4 < iVar2);
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x38) + iVar2 * 4) = 0;
      *(int *)(in_ECX + 0x30) = iVar10;
      *(int *)(in_ECX + 0x2c) = iVar2;
    }
    FUN_004032e0();
    *(undefined4 *)(in_ECX + 0xe0) = 0;
    *(undefined4 *)(in_ECX + 0xe4) = 0;
    *(undefined4 *)(in_ECX + 0xe8) = 0;
    *(undefined4 *)(in_ECX + 0xec) = 0;
    FUN_00632170(in_ECX + 8,extraout_ECX);
    uVar9 = *(int *)(in_ECX + 0x30) / 2;
    uVar8 = (int)(((int)(double)CONCAT44(param_3,param_2) >> 0x1f & 3U) +
                 (int)(double)CONCAT44(param_3,param_2)) >> 2;
    uVar3 = uVar8;
    if ((int)uVar9 < (int)uVar8) {
      uVar3 = uVar9;
    }
    iVar10 = (*(int *)(in_ECX + 0xec) - *(int *)(in_ECX + 0xe4)) -
             (uint)(*(uint *)(in_ECX + 0xe8) < *(uint *)(in_ECX + 0xe0));
    if ((iVar10 <= (int)uVar3 >> 0x1f) &&
       ((iVar10 < (int)uVar3 >> 0x1f ||
        (*(uint *)(in_ECX + 0xe8) - *(uint *)(in_ECX + 0xe0) < uVar3)))) {
      do {
        iVar10 = *(int *)(in_ECX + 0x20);
        EnterCriticalSection((LPCRITICAL_SECTION)(iVar10 + 0x58));
        piVar6 = *(int **)(iVar10 + 0x70);
        piVar1 = piVar6 + *(int *)(iVar10 + 0x78);
        for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
          if (in_ECX + 8 == *piVar6) {
            puVar5 = (undefined4 *)FUN_00633420();
            *(undefined4 *)(in_ECX + 0x10) = *puVar5;
            *(undefined4 *)(in_ECX + 0x14) = puVar5[1];
            SetEvent(*(HANDLE *)(iVar10 + 0x2c));
            break;
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(iVar10 + 0x58));
        if (DAT_00c8a8f0 == (HANDLE)0x0) {
          Sleep(5);
        }
        else {
          WaitForSingleObject(DAT_00c8a8f0,5);
        }
        uVar9 = *(int *)(in_ECX + 0x30) / 2;
        uVar3 = uVar8;
        if ((int)uVar9 < (int)uVar8) {
          uVar3 = uVar9;
        }
        iVar10 = (*(int *)(in_ECX + 0xec) - *(int *)(in_ECX + 0xe4)) -
                 (uint)(*(uint *)(in_ECX + 0xe8) < *(uint *)(in_ECX + 0xe0));
      } while ((iVar10 < (int)uVar3 >> 0x1f) ||
              ((iVar10 <= (int)uVar3 >> 0x1f &&
               (*(uint *)(in_ECX + 0xe8) - *(uint *)(in_ECX + 0xe0) < uVar3))));
    }
  }
  ExceptionList = local_10;
  return;
}

