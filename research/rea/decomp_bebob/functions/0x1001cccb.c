// rea decompile_all
// name: CFileDialog::ApplyOFNToShellDialog
// address: 0x1001cccb
// body: available
// range: 0x1001cccb-0x1001d1f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001cd10 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001cdb9 to 0x10009030 FUN_10009030 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001d004 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CFileDialog::ApplyOFNToShellDialog(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFileDialog::ApplyOFNToShellDialog(CFileDialog *this)

{
  longlong lVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  int *piVar10;
  int *local_24;
  int *local_20;
  void *local_1c;
  wchar_t *local_18;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1001ccd7;
  if (*(int *)(this + 0x98) != 1) {
    return;
  }
  if ((*(int *)(*(int *)(this + 0x94) + 0x30) != 0) &&
     (iVar2 = (**(code **)(**(int **)(this + 0xa4) + 0x44))
                        (*(int **)(this + 0xa4),*(undefined4 *)(*(int *)(this + 0x94) + 0x30)),
     iVar2 < 0)) goto LAB_1001cd10;
  if (*(int *)(*(int *)(this + 0x94) + 0x3c) != 0) {
    FUN_10006ce0(&local_20,*(short **)(*(int *)(this + 0x94) + 0x3c));
    local_8 = 0;
    iVar2 = (**(code **)(**(int **)(this + 0xa4) + 0x58))(*(int **)(this + 0xa4),local_20);
    if (iVar2 < 0) goto LAB_1001cd10;
    local_8 = 0xffffffff;
    FUN_10001030(local_20 + -4);
  }
  if (*(int *)(*(int *)(this + 0x94) + 0xc) != 0) {
    pwVar9 = *(wchar_t **)(*(int *)(this + 0x94) + 0xc);
    piVar10 = (int *)0x0;
    if (*pwVar9 != L'\0') {
      do {
        sVar3 = _wcslen(pwVar9);
        sVar4 = _wcslen(pwVar9 + sVar3 + 1);
        pwVar9 = pwVar9 + sVar3 + 1 + sVar4 + 1;
        piVar10 = (int *)((int)piVar10 + 1);
      } while (*pwVar9 != L'\0');
      local_24 = piVar10;
      if (piVar10 != (int *)0x0) {
        pvVar5 = FUN_1000858a(-(uint)((int)(ZEXT48(piVar10) * 8 >> 0x20) != 0) |
                              (uint)(ZEXT48(piVar10) * 8));
        if (pvVar5 == (void *)0x0) {
LAB_1001cdb9:
                    /* WARNING: Subroutine does not return */
          FUN_10009030();
        }
        local_20 = (int *)0x0;
        pwVar9 = *(wchar_t **)(*(int *)(this + 0x94) + 0xc);
        if (local_24 != (int *)0x0) {
          do {
            ppuVar6 = FUN_1000ad47();
            FUN_10005e00(&local_1c,(int *)ppuVar6);
            local_8 = 1;
            sVar3 = _wcslen(pwVar9);
            lVar1 = (ulonglong)(sVar3 + 1) * 2;
            local_18 = FUN_1000858a(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
            if (local_18 == (wchar_t *)0x0) goto LAB_1001cdb9;
            FUN_100022b0(&local_1c,pwVar9);
            _memcpy_s(local_18,*(int *)((int)local_1c + -0xc) * 2 + 2,local_1c,
                      *(int *)((int)local_1c + -0xc) * 2 + 2);
            pwVar9 = pwVar9 + sVar3 + 1;
            *(wchar_t **)((int)pvVar5 + (int)local_20 * 8) = local_18;
            sVar3 = _wcslen(pwVar9);
            lVar1 = (ulonglong)(sVar3 + 1) * 2;
            local_18 = FUN_1000858a(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
            if (local_18 == (wchar_t *)0x0) goto LAB_1001cdb9;
            FUN_100022b0(&local_1c,pwVar9);
            _memcpy_s(local_18,*(int *)((int)local_1c + -0xc) * 2 + 2,local_1c,
                      *(int *)((int)local_1c + -0xc) * 2 + 2);
            local_8 = 0xffffffff;
            *(wchar_t **)((int)pvVar5 + (int)local_20 * 8 + 4) = local_18;
            local_20 = (int *)((int)local_20 + 1);
            pwVar9 = pwVar9 + sVar3 + 1;
            FUN_10001030((undefined4 *)((int)local_1c + -0x10));
          } while (local_20 < local_24);
        }
        iVar2 = (**(code **)(**(int **)(this + 0xa4) + 0x10))
                          (*(int **)(this + 0xa4),local_24,pvVar5);
        piVar10 = (int *)0x0;
        if (iVar2 < 0) goto LAB_1001cd10;
        if (local_24 != (int *)0x0) {
          do {
            FUN_100085b9(*(void **)((int)pvVar5 + (int)piVar10 * 8));
            FUN_100085b9(*(void **)((int)pvVar5 + (int)piVar10 * 8 + 4));
            piVar10 = (int *)((int)piVar10 + 1);
          } while (piVar10 < local_24);
        }
        FUN_100085b9(pvVar5);
        uVar8 = 1;
        if (1 < *(uint *)(*(int *)(this + 0x94) + 0x18)) {
          uVar8 = *(undefined4 *)(*(int *)(this + 0x94) + 0x18);
        }
        iVar2 = (**(code **)(**(int **)(this + 0xa4) + 0x14))(*(int **)(this + 0xa4),uVar8);
        if (iVar2 < 0) goto LAB_1001cd10;
      }
    }
  }
  if ((*(int *)(*(int *)(this + 0x94) + 0x1c) != 0) || (*(int *)(*(int *)(this + 0x94) + 0x2c) != 0)
     ) {
    ppuVar6 = FUN_1000ad47();
    FUN_10005e00(&local_18,(int *)ppuVar6);
    local_8 = 2;
    pwVar9 = local_18;
    if (*(int *)(*(int *)(this + 0x94) + 0x1c) != 0) {
      FUN_10006ce0(&local_24,*(short **)(*(int *)(this + 0x94) + 0x1c));
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_10007c90(&local_18,&local_24);
      if (1 < *(int *)(local_18 + -2)) {
        FUN_10001130(&local_18,*(int *)(local_18 + -6));
      }
      pwVar9 = local_18;
      PathRemoveFileSpecW(local_18);
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_18,-1);
      iVar2 = *(int *)(pwVar9 + -6);
      if ((iVar2 < 0) || (local_24[-3] < iVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_10001000((undefined4 *)0x80070057);
      }
      if (*(short *)((int)local_24 + iVar2 * 2) == 0x5c) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = (**(code **)(**(int **)(this + 0xa4) + 0x3c))
                        (*(int **)(this + 0xa4),(int)local_24 + iVar2 * 2);
      if (iVar2 < 0) goto LAB_1001cd10;
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_10001030(local_24 + -4);
    }
    if (*(int *)(*(int *)(this + 0x94) + 0x2c) == 0) {
LAB_1001d02c:
      if (*(int *)(pwVar9 + -6) != 0) goto LAB_1001d031;
    }
    else {
      if (*(int *)(pwVar9 + -6) == 0) {
        FUN_100022b0(&local_18,*(short **)(*(int *)(this + 0x94) + 0x2c));
        pwVar9 = local_18;
        goto LAB_1001d02c;
      }
LAB_1001d031:
      local_24 = (int *)0x0;
      lVar7 = AFX_GLOBAL_DATA::ShellCreateItemFromParsingName
                        ((AFX_GLOBAL_DATA *)&DAT_10166aa0,pwVar9,(IBindCtx *)0x0,
                         (_GUID *)&DAT_1011fc84,&local_24);
      if (-1 < lVar7) {
        iVar2 = (**(code **)(**(int **)(this + 0xa4) + 0x30))(*(int **)(this + 0xa4),local_24);
        if (iVar2 < 0) goto LAB_1001cd10;
        (**(code **)(*local_24 + 8))(local_24);
      }
    }
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(pwVar9 + -8));
  }
  local_14[0] = 0;
  iVar2 = (**(code **)(**(int **)(this + 0xa4) + 0x28))(*(int **)(this + 0xa4),local_14);
  if (-1 < iVar2) {
    iVar2 = *(int *)(this + 0x94);
    if ((*(uint *)(iVar2 + 0x34) & 0x200) == 0) {
      local_14[0] = local_14[0] & 0xfffffdff;
    }
    else {
      local_14[0] = local_14[0] | 0x200;
    }
    if ((*(uint *)(iVar2 + 0x34) & 0x2000) == 0) {
      local_14[0] = local_14[0] & 0xffffdfff;
    }
    else {
      local_14[0] = local_14[0] | 0x2000;
    }
    if ((*(uint *)(iVar2 + 0x34) & 0x2000000) == 0) {
      local_14[0] = local_14[0] & 0xfdffffff;
    }
    else {
      local_14[0] = local_14[0] | 0x2000000;
    }
    if ((*(uint *)(iVar2 + 0x34) & 0x1000) == 0) {
      local_14[0] = local_14[0] & 0xffffefff;
    }
    else {
      local_14[0] = local_14[0] | 0x1000;
    }
    if ((*(uint *)(iVar2 + 0x34) & 0x10000000) == 0) {
      local_14[0] = local_14[0] & 0xefffffff;
    }
    else {
      local_14[0] = local_14[0] | 0x10000000;
    }
    if ((*(byte *)(iVar2 + 0x34) & 8) == 0) {
      local_14[0] = local_14[0] & 0xfffffff7;
    }
    else {
      local_14[0] = local_14[0] | 8;
    }
    if ((*(uint *)(iVar2 + 0x34) & 0x100000) == 0) {
      local_14[0] = local_14[0] & 0xffefffff;
    }
    else {
      local_14[0] = local_14[0] | 0x100000;
    }
    if ((*(uint *)(iVar2 + 0x34) & 0x8000) == 0) {
      local_14[0] = local_14[0] & 0xffff7fff;
    }
    else {
      local_14[0] = local_14[0] | 0x8000;
    }
    if ((*(uint *)(iVar2 + 0x34) & 0x10000) == 0) {
      local_14[0] = local_14[0] & 0xfffeffff;
    }
    else {
      local_14[0] = local_14[0] | 0x10000;
    }
    if ((*(uint *)(iVar2 + 0x34) & 0x100) == 0) {
      local_14[0] = local_14[0] & 0xfffffeff;
    }
    else {
      local_14[0] = local_14[0] | 0x100;
    }
    if ((*(byte *)(iVar2 + 0x34) & 2) == 0) {
      local_14[0] = local_14[0] & 0xfffffffd;
    }
    else {
      local_14[0] = local_14[0] | 2;
    }
    if ((*(uint *)(iVar2 + 0x34) & 0x800) == 0) {
      local_14[0] = local_14[0] & 0xfffff7ff;
    }
    else {
      local_14[0] = local_14[0] | 0x800;
    }
    if ((*(uint *)(iVar2 + 0x34) & 0x4000) == 0) {
      local_14[0] = local_14[0] & 0xffffbfff;
    }
    else {
      local_14[0] = local_14[0] | 0x4000;
    }
    if ((*(byte *)(iVar2 + 0x54) & 1) == 0) {
      local_14[0] = local_14[0] & 0xfffbffff;
    }
    else {
      local_14[0] = local_14[0] | 0x40000;
    }
    if (*(int *)(this + 0x9c) == 0) {
      local_14[0] = local_14[0] & 0xffffffdf;
    }
    else {
      local_14[0] = local_14[0] | 0x20;
    }
    iVar2 = (**(code **)(**(int **)(this + 0xa4) + 0x24))(*(int **)(this + 0xa4),local_14[0]);
    if (-1 < iVar2) {
      return;
    }
  }
LAB_1001cd10:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

