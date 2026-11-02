// rea decompile_all
// name: CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage
// address: 0x100f3d54
// body: available
// range: 0x100f3d54-0x100f3e98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage(struct tagMSG
   *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage
          (CMFCAcceleratorKeyAssignCtrl *this,tagMSG *param_1)

{
  short sVar1;
  UINT UVar2;
  WPARAM WVar3;
  tagMSG *ptVar4;
  undefined **ppuVar5;
  int iVar6;
  uchar uVar7;
  int local_14;
  
  ptVar4 = param_1;
  UVar2 = param_1->message;
  local_14 = 0;
  if (UVar2 == 0x100) {
LAB_100f3dae:
    local_14 = 1;
    if (*(int *)(this + 0x74) != 0) {
      if (((uint)param_1->lParam >> 0x1e & 1) == 0) {
        ResetKey(this);
      }
      goto LAB_100f3dcb;
    }
LAB_100f3dd0:
    WVar3 = ptVar4->wParam;
    if (WVar3 == 0x10) {
      uVar7 = '\x04';
    }
    else if (WVar3 == 0x11) {
      uVar7 = '\b';
    }
    else {
      if (WVar3 != 0x12) {
        if (*(int *)(this + 0x88) == 0) {
          *(int *)(this + 0x88) = 1;
          return 1;
        }
        *(short *)(this + 0x7a) = (short)ptVar4->wParam;
        if (local_14 != 0) {
          this[0x78] = (CMFCAcceleratorKeyAssignCtrl)((byte)this[0x78] | 1);
          *(undefined4 *)(this + 0x74) = 1;
        }
        goto LAB_100f3e1b;
      }
      uVar7 = '\x10';
    }
    SetAccelFlag(this,uVar7,local_14);
  }
  else {
    if (UVar2 != 0x101) {
      if (UVar2 == 0x104) goto LAB_100f3dae;
      if (UVar2 != 0x105) {
        if (((UVar2 == 0x201) || (UVar2 == 0x204)) || (UVar2 == 0x207)) {
          *(undefined4 *)(this + 0x88) = 1;
          CWnd::SetFocus((CWnd *)this);
          return 1;
        }
        goto LAB_100f3e89;
      }
    }
LAB_100f3dcb:
    if (*(int *)(this + 0x74) == 0) goto LAB_100f3dd0;
  }
LAB_100f3e1b:
  if ((((byte)this[0x78] & 0x1c) == 0) && (((byte)this[0x78] & 1) != 0)) {
    sVar1 = *(short *)(this + 0x7a);
    if (sVar1 != 9) {
      if (sVar1 == 0x1b) {
        ResetKey(this);
        return 1;
      }
      if (sVar1 != 0xe5) goto LAB_100f3e3b;
    }
    ResetKey(this);
LAB_100f3e89:
    iVar6 = CWnd::PreTranslateMessage((CWnd *)this,ptVar4);
    return iVar6;
  }
LAB_100f3e3b:
  ppuVar5 = FUN_1000ad47();
  FUN_10005e00(&param_1,(int *)ppuVar5);
  CMFCAcceleratorKey::Format
            ((CMFCAcceleratorKey *)(this + 0x80),
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_1);
  CWnd::SetWindowTextW((CWnd *)this,(wchar_t *)param_1);
  FUN_10001030(&param_1[-1].lParam);
  return 1;
}

