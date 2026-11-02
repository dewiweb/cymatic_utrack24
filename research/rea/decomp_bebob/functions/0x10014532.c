// rea decompile_all
// name: CWnd::ExecuteDlgInit
// address: 0x10014532
// body: available
// range: 0x10014532-0x100146c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CWnd::ExecuteDlgInit(void *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CWnd::ExecuteDlgInit(CWnd *this,void *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ulong wParam;
  short sVar3;
  CMFCControlContainer *pCVar4;
  UINT Msg;
  LRESULT LVar5;
  int iVar6;
  ushort *lParam;
  int *piVar7;
  undefined4 local_40;
  int local_3c [8];
  CMFCControlContainer *local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x1001453e;
  if (*(int *)(this + 0x70) == 0) {
    local_1c = FUN_1000858a(0x38);
    local_8 = 0;
    if (local_1c == (CMFCControlContainer *)0x0) {
      pCVar4 = (CMFCControlContainer *)0x0;
    }
    else {
      pCVar4 = (CMFCControlContainer *)CMFCControlContainer::CMFCControlContainer(local_1c,this);
    }
    local_8 = 0xffffffff;
    *(CMFCControlContainer **)(this + 0x70) = pCVar4;
    CMFCControlContainer::SubclassDlgControls(pCVar4);
  }
  local_14 = 1;
  if (param_1 != (void *)0x0) {
    do {
      uVar1 = *(ushort *)param_1;
      pCVar4 = (CMFCControlContainer *)(uint)uVar1;
      if (uVar1 == 0) break;
      wParam = *(ulong *)((int)param_1 + 4);
      uVar2 = *(ushort *)((int)param_1 + 2);
      Msg = (UINT)uVar2;
      lParam = (ushort *)((int)param_1 + 8);
      local_1c = pCVar4;
      if (uVar2 == 0x1234) {
LAB_100145da:
        piVar7 = local_3c;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        local_3c[0] = -1;
        local_40 = 1;
        FUN_10006ce0(&local_18,(short *)lParam);
        local_3c[1] = local_18;
        LVar5 = SendDlgItemMessageW(*(HWND *)(this + 0x20),(uint)local_1c & 0xffff,0x40b,0,
                                    (LPARAM)&local_40);
        if (LVar5 == -1) {
          local_14 = 0;
        }
        FUN_10001030((undefined4 *)(local_18 + -0x10));
      }
      else if (uVar2 == 0x401) {
        Msg = 0x180;
LAB_10014677:
        LVar5 = SendDlgItemMessageA(*(HWND *)(this + 0x20),(int)pCVar4,Msg,0,(LPARAM)lParam);
        if (LVar5 == -1) {
          local_14 = 0;
        }
      }
      else {
        if (uVar2 == 0x403) {
          Msg = 0x143;
        }
        sVar3 = (short)Msg;
        if (sVar3 == 0x40b) goto LAB_100145da;
        if (sVar3 == 0x37c) {
          LVar5 = SendDlgItemMessageW(*(HWND *)(this + 0x20),(int)pCVar4,0x37c,wParam,(LPARAM)lParam
                                     );
          if (LVar5 == -1) {
            local_14 = 0;
          }
          if (*(CMFCControlContainer **)(this + 0x70) != (CMFCControlContainer *)0x0) {
            CMFCControlContainer::SetControlData
                      (*(CMFCControlContainer **)(this + 0x70),uVar1,wParam,(uchar *)lParam);
          }
        }
        else if ((sVar3 == 0x180) || (sVar3 == 0x143)) goto LAB_10014677;
      }
      param_1 = (void *)((int)lParam + wParam);
    } while (local_14 != 0);
    if (local_14 == 0) {
      return 0;
    }
  }
  SendMessageToDescendants(*(HWND__ **)(this + 0x20),0x364,0,0,0,0);
  return local_14;
}

