// rea decompile_all
// name: CTooltipManager::CreateToolTip
// address: 0x1008a796
// body: available
// range: 0x1008a796-0x1008a8a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    public: static int __stdcall CTooltipManager::CreateToolTip(class CToolTipCtrl * &,class CWnd
   *,unsigned int)
   
   Library: Visual Studio 2010 Release */

int CTooltipManager::CreateToolTip(CToolTipCtrl **param_1,CWnd *param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  CToolTipCtrl *pCVar4;
  __POSITION *p_Var5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x1008a7a2;
  puVar7 = (undefined4 *)auStack_20;
  uVar3 = 1;
  iVar6 = 0;
  do {
    if (uVar3 == param_3) {
      if (iVar6 == -1) break;
      pCVar4 = *param_1;
      if (pCVar4 != (CToolTipCtrl *)0x0) {
        if (*(int *)(pCVar4 + 0x20) != 0) {
          puVar7 = &uStack_24;
          uStack_24 = 0x1008a7d7;
          (**(code **)(*(int *)pCVar4 + 0x60))();
        }
        if (*param_1 != (CToolTipCtrl *)0x0) {
          iVar1 = *(int *)*param_1;
          *(undefined4 *)((int)puVar7 + -4) = 1;
          pcVar2 = *(code **)(iVar1 + 4);
          puVar8 = (undefined4 *)((int)puVar7 + -8);
          puVar7 = (undefined4 *)((int)puVar7 + -8);
          *puVar8 = 0x1008a7e4;
          (*pcVar2)();
        }
        *param_1 = (CToolTipCtrl *)0x0;
      }
      if (DAT_101689e8 == (CTooltipManager *)0x0) {
        *(undefined4 *)((int)puVar7 + -4) = 0x90;
        *(undefined4 *)((int)puVar7 + -8) = 0x1008a807;
        pCVar4 = FUN_1000858a(*(size_t *)((int)puVar7 + -4));
        local_8 = 0;
        if (pCVar4 == (CToolTipCtrl *)0x0) {
          pCVar4 = (CToolTipCtrl *)0x0;
        }
        else {
          *(undefined4 *)((int)puVar7 + -4) = 0x1008a819;
          pCVar4 = (CToolTipCtrl *)CToolTipCtrl::CToolTipCtrl(pCVar4);
        }
        local_8 = 0xffffffff;
        *param_1 = pCVar4;
      }
      else {
        *(int *)((int)puVar7 + -4) = iVar6;
        *(CToolTipCtrl ***)((int)puVar7 + -8) = param_1;
        *(undefined4 *)((int)puVar7 + -0xc) = 0x1008a7f7;
        iVar6 = CreateToolTipObject(DAT_101689e8,*(CToolTipCtrl ***)((int)puVar7 + -8),
                                    *(uint *)((int)puVar7 + -4));
        if (iVar6 == 0) break;
      }
      iVar6 = *(int *)*param_1;
      *(undefined4 *)((int)puVar7 + -4) = 3;
      *(CWnd **)((int)puVar7 + -8) = param_2;
      pcVar2 = *(code **)(iVar6 + 0x160);
      puVar9 = (undefined4 *)((int)puVar7 + -0xc);
      puVar7 = (undefined4 *)((int)puVar7 + -0xc);
      *puVar9 = 0x1008a833;
      iVar6 = (*pcVar2)();
      if (iVar6 != 0) {
        pCVar4 = *param_1;
        *(undefined4 *)((int)puVar7 + -4) = 0;
        *(undefined4 *)((int)puVar7 + -8) = 1;
        *(undefined4 *)((int)puVar7 + -0xc) = 0x401;
        *(undefined4 *)((int)puVar7 + -0x10) = *(undefined4 *)(pCVar4 + 0x20);
        puVar10 = (undefined1 *)((int)puVar7 + -0x14);
        *(undefined4 *)((int)puVar7 + -0x14) = 0x1008a84c;
        SendMessageW(*(HWND *)((int)puVar7 + -0x10),*(UINT *)((int)puVar7 + -0xc),
                     *(WPARAM *)((int)puVar7 + -8),*(LPARAM *)((int)puVar7 + -4));
        puVar7 = (undefined4 *)puVar10;
        if (DAT_10166c64 != -1) {
          pCVar4 = *param_1;
          *(int *)(puVar10 + -4) = DAT_10166c64;
          *(undefined4 *)(puVar10 + -8) = 0;
          *(undefined4 *)(puVar10 + -0xc) = 0x418;
          *(undefined4 *)(puVar10 + -0x10) = *(undefined4 *)(pCVar4 + 0x20);
          puVar7 = (undefined4 *)(puVar10 + -0x14);
          *(undefined4 *)(puVar10 + -0x14) = 0x1008a865;
          SendMessageW(*(HWND *)(puVar10 + -0x10),*(UINT *)(puVar10 + -0xc),
                       *(WPARAM *)(puVar10 + -8),*(LPARAM *)(puVar10 + -4));
        }
        if (((param_2 != (CWnd *)0x0) && (iVar6 = *(int *)(param_2 + 0x20), iVar6 != 0)) &&
           (DAT_101689e8 != (CTooltipManager *)0x0)) {
          *(undefined4 *)((int)puVar7 + -4) = 0;
          *(int *)((int)puVar7 + -8) = iVar6;
          *(undefined4 *)((int)puVar7 + -0xc) = 0x1008a887;
          p_Var5 = CList<unsigned_int,unsigned_int>::Find
                             ((CList<unsigned_int,unsigned_int> *)(DAT_101689e8 + 0x26c),
                              *(uint *)((int)puVar7 + -8),*(__POSITION **)((int)puVar7 + -4));
          if (p_Var5 == (__POSITION *)0x0) {
            *(undefined4 *)((int)puVar7 + -4) = *(undefined4 *)(param_2 + 0x20);
            *(undefined4 *)((int)puVar7 + -8) = 0x1008a89f;
            CList<HWND__*,HWND__*>::AddTail
                      ((CList<HWND__*,HWND__*> *)(DAT_101689e8 + 0x26c),
                       *(HWND__ **)((int)puVar7 + -4));
          }
        }
        iVar6 = 1;
        goto LAB_1008a8a2;
      }
      break;
    }
    uVar3 = uVar3 * 2;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xb);
  iVar6 = 0;
LAB_1008a8a2:
  *(undefined4 *)((int)puVar7 + -4) = 0x1008a8a7;
  return iVar6;
}

