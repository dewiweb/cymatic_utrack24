// rea decompile_all
// name: CMDIChildWndEx::RegisterTaskbarTab
// address: 0x10020fb1
// body: available
// range: 0x10020fb1-0x100211bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    public: virtual void __thiscall CMDIChildWndEx::RegisterTaskbarTab(class CMDIChildWndEx *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIChildWndEx::RegisterTaskbarTab(CMDIChildWndEx *this,CMDIChildWndEx *param_1)

{
  CMDIChildWndEx *pCVar1;
  int iVar2;
  undefined **ppuVar3;
  ITaskbarList3 *pIVar4;
  CFrameWnd *pCVar5;
  CObject *pCVar6;
  CMDIChildWndEx *pCVar7;
  CMDIChildWnd *pCVar8;
  HMODULE hModule;
  FARPROC pFVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_34;
  CMDIChildWndEx *local_30;
  int local_2c;
  int local_28 [8];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x10020fbd;
  local_30 = param_1;
  iVar2 = IsTaskbarTabsSupportEnabled(this);
  if ((iVar2 == 0) ||
     ((pCVar1 = this + 0x43c, pCVar1 != (CMDIChildWndEx *)0x0 && (*(int *)(this + 0x45c) != 0))))
  goto LAB_100211b4;
  local_28[3] = 0xffff830a;
  local_28[4] = 0xffff830a;
  local_28[1] = 0xffff8300;
  local_28[2] = 0xffff8300;
  *(CMDIChildWndEx **)(this + 0x4b0) = this;
  RegisterWindowClass(&local_2c,0x101204a8);
  local_8 = 0;
  ppuVar3 = FUN_1000ad47();
  FUN_10005e00(local_28,(int *)ppuVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  CWnd::GetWindowTextW
            ((CWnd *)this,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_28);
  iVar2 = (**(code **)(*(int *)pCVar1 + 0x58))
                    (0x8000080,local_2c,local_28[0],0x80cf0000,local_28 + 1,0,0,0);
  if (iVar2 != 0) {
    pIVar4 = AFX_GLOBAL_DATA::GetITaskbarList3((AFX_GLOBAL_DATA *)&DAT_10166aa0);
    if (pIVar4 == (ITaskbarList3 *)0x0) {
LAB_10021182:
      *(undefined4 *)(this + 0x4b4) = 1;
      iVar2 = IsRegisteredWithTaskbarTabs(this);
      if (iVar2 != 0) {
        InvalidateIconicBitmaps(this);
      }
    }
    else {
      pCVar5 = CWnd::GetTopLevelFrame((CWnd *)this);
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar5)
      ;
      uVar10 = 0;
      if (pCVar6 != (CObject *)0x0) {
        uVar10 = *(undefined4 *)(pCVar6 + 0x20);
      }
      if (pCVar1 == (CMDIChildWndEx *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined4 *)(this + 0x45c);
      }
      iVar2 = (**(code **)(*(int *)pIVar4 + 0x2c))(pIVar4,uVar11,uVar10);
      if (-1 < iVar2) {
        if (local_30 == (CMDIChildWndEx *)0x0) {
          if (*(int *)(this + 0x438) != 0) {
            local_30 = CMDIClientAreaWnd::FindNextRegisteredWithTaskbarMDIChild
                                 ((CMDIClientAreaWnd *)(*(int *)(this + 0x438) + 0x440),this);
            if (local_30 != (CMDIChildWndEx *)0x0) goto LAB_100210d2;
          }
          pCVar7 = (CMDIChildWndEx *)0x0;
        }
        else {
LAB_100210d2:
          pCVar7 = local_30 + 0x43c;
        }
        uVar10 = 0;
        if (pCVar7 != (CMDIChildWndEx *)0x0) {
          uVar10 = *(undefined4 *)(pCVar7 + 0x20);
        }
        if (pCVar1 == (CMDIChildWndEx *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(this + 0x45c);
        }
        iVar2 = (**(code **)(*(int *)pIVar4 + 0x34))(pIVar4,uVar11,uVar10);
        if (-1 < iVar2) {
          if (*(CMDIFrameWnd **)(this + 0x438) != (CMDIFrameWnd *)0x0) {
            pCVar8 = CMDIFrameWnd::MDIGetActive(*(CMDIFrameWnd **)(this + 0x438),(int *)0x0);
            if (pCVar8 == (CMDIChildWnd *)this) {
              SetTaskbarTabActive(this);
            }
          }
          local_34 = 1;
          hModule = GetModuleHandleW(L"DWMAPI");
          if (hModule != (HMODULE)0x0) {
            pFVar9 = GetProcAddress(hModule,"DwmSetWindowAttribute");
            if (pFVar9 != (FARPROC)0x0) {
              if (pCVar1 == (CMDIChildWndEx *)0x0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined4 *)(this + 0x45c);
              }
              (*pFVar9)(uVar10,10,&local_34,4);
              uVar10 = 0;
              if (pCVar1 != (CMDIChildWndEx *)0x0) {
                uVar10 = *(undefined4 *)(this + 0x45c);
              }
              (*pFVar9)(uVar10,7,&local_34,4);
            }
          }
          SetTaskbarTabProperties(this,DAT_101601dc);
          (**(code **)(*(int *)this + 0x218))(local_28[0]);
          goto LAB_10021182;
        }
      }
      UnregisterTaskbarTab(this,1);
    }
  }
  FUN_10001030((undefined4 *)(local_28[0] + -0x10));
  FUN_10001030((undefined4 *)(local_2c + -0x10));
LAB_100211b4:
  FUN_100f90cf();
  return;
}

