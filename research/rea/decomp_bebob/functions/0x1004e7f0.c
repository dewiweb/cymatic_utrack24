// rea decompile_all
// name: CMFCMaskedEdit::OnKeyDown
// address: 0x1004e7f0
// body: available
// range: 0x1004e7f0-0x1004ebdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCMaskedEdit::OnKeyDown(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCMaskedEdit::OnKeyDown(CMFCMaskedEdit *this,uint param_1,uint param_2,uint param_3)

{
  SHORT SVar1;
  uint *puVar2;
  CMFCMaskedEdit *pCVar3;
  CMFCMaskedEdit *pCVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  CMFCMaskedEdit *local_c;
  CMFCMaskedEdit *local_8;
  
  local_c = this;
  local_8 = this;
  GetGroupBounds(this,(int *)&local_8,(int *)&local_c,0,1);
  if (local_8 == (CMFCMaskedEdit *)0xffffffff) goto LAB_1004e817;
  if (param_1 < 0x27) {
    if (param_1 < 0x25) {
      if (param_1 == 8) {
        OnCharBackspace(this,8,param_2,param_3);
        return;
      }
      if (param_1 == 0x23) {
        SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&param_2,(LPARAM)&param_3);
        GetGroupBounds(this,(int *)&param_2,(int *)&param_3,param_3,1);
        pCVar3 = (CMFCMaskedEdit *)param_3;
        pCVar4 = (CMFCMaskedEdit *)param_3;
        if (param_2 != 0xffffffff) goto LAB_1004e8d2;
        iVar7 = 0;
        iVar6 = *(int *)(*(int *)(this + 0x74) + -0xc);
        puVar5 = &param_3;
        puVar2 = &param_2;
      }
      else {
        if (param_1 != 0x24) goto LAB_1004ea7e;
        SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&param_3,(LPARAM)&param_2);
        GetGroupBounds(this,(int *)&param_3,(int *)&param_2,param_3,0);
        pCVar3 = (CMFCMaskedEdit *)param_3;
        pCVar4 = (CMFCMaskedEdit *)param_3;
        if (param_3 != 0xffffffff) goto LAB_1004e8d2;
        iVar7 = 1;
        puVar5 = &param_2;
        iVar6 = 0;
        puVar2 = &param_3;
      }
      GetGroupBounds(this,(int *)puVar2,(int *)puVar5,iVar6,iVar7);
      pCVar3 = (CMFCMaskedEdit *)param_3;
      pCVar4 = (CMFCMaskedEdit *)param_3;
      goto LAB_1004e8d2;
    }
    SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&param_3,(LPARAM)&param_2);
    GetGroupBounds(this,(int *)&param_3,(int *)&param_2,param_3,0);
    if (param_3 == 0xffffffff) {
      GetGroupBounds(this,(int *)&param_3,(int *)&param_2,0,1);
    }
    SVar1 = GetKeyState(0x10);
    if ((char)SVar1 < '\0') {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_8,(LPARAM)&param_1);
      pCVar3 = local_8 + -1;
      pCVar4 = (CMFCMaskedEdit *)param_1;
      if (*(int *)(this + 0x90) != 0) {
        if ((int)pCVar3 <= (int)param_3) {
          pCVar3 = (CMFCMaskedEdit *)param_3;
        }
        if ((int)param_2 <= (int)pCVar3) {
          pCVar3 = (CMFCMaskedEdit *)param_2;
        }
      }
      goto LAB_1004e8d2;
    }
    SVar1 = GetKeyState(0x11);
    if ((char)SVar1 < '\0') {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&param_1,(LPARAM)&local_8);
      if (1 < (int)param_1) {
        GetGroupBounds(this,(int *)&param_3,(int *)&param_2,param_1 - 1,0);
      }
      if ((param_3 == 0xffffffff) ||
         ((pCVar3 = (CMFCMaskedEdit *)param_3, pCVar4 = (CMFCMaskedEdit *)param_2,
          param_3 == param_1 && ((CMFCMaskedEdit *)param_2 == local_8)))) {
LAB_1004e817:
        MessageBeep(0xffffffff);
        return;
      }
      goto LAB_1004e8d2;
    }
    SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&param_1,(LPARAM)&local_8);
    if (((CMFCMaskedEdit *)param_1 == local_8) && (param_1 == param_3)) {
      if (1 < (int)param_1) {
        GetGroupBounds(this,(int *)&param_3,(int *)&param_2,param_1 - 1,0);
      }
      if ((param_3 == 0xffffffff) ||
         (pCVar3 = (CMFCMaskedEdit *)param_2, pCVar4 = (CMFCMaskedEdit *)param_2,
         (int)param_1 <= (int)param_2)) goto LAB_1004e817;
      goto LAB_1004e8d2;
    }
    pCVar3 = (CMFCMaskedEdit *)(param_1 - 1);
    if ((int)(param_1 - 1) <= (int)param_3) {
      pCVar3 = (CMFCMaskedEdit *)param_3;
    }
    pCVar4 = pCVar3;
    if ((int)pCVar3 < (int)param_2) goto LAB_1004e8d2;
  }
  else {
    if (param_1 < 0x27) {
LAB_1004ea7e:
      CWnd::Default((CWnd *)this);
      return;
    }
    if (0x28 < param_1) {
      if (param_1 == 0x2d) {
        SVar1 = GetKeyState(0x11);
        if (((-1 < (char)SVar1) && (SVar1 = GetKeyState(0x10), -1 < (char)SVar1)) &&
           (*(int *)(*(int *)(this + 0x78) + -0xc) != 0)) {
          return;
        }
      }
      else if ((param_1 == 0x2e) && (SVar1 = GetKeyState(0x10), -1 < (char)SVar1)) {
        OnCharDelete(this,0x2e,param_2,param_3);
        return;
      }
      goto LAB_1004ea7e;
    }
    SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&param_2,(LPARAM)&param_3);
    GetGroupBounds(this,(int *)&param_2,(int *)&param_3,param_3,1);
    if (param_2 == 0xffffffff) {
      GetGroupBounds(this,(int *)&param_2,(int *)&param_3,*(int *)(*(int *)(this + 0x74) + -0xc),0);
    }
    SVar1 = GetKeyState(0x10);
    if ((char)SVar1 < '\0') {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_8,(LPARAM)&param_1);
      pCVar4 = (CMFCMaskedEdit *)(param_1 + 1);
      pCVar3 = local_8;
      if (*(int *)(this + 0x90) != 0) {
        if ((int)param_3 <= (int)pCVar4) {
          pCVar4 = (CMFCMaskedEdit *)param_3;
        }
        if ((int)pCVar4 <= (int)param_2) {
          pCVar4 = (CMFCMaskedEdit *)param_2;
        }
      }
      goto LAB_1004e8d2;
    }
    SVar1 = GetKeyState(0x11);
    if ((char)SVar1 < '\0') {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_8,(LPARAM)&param_1);
      if ((int)param_1 < *(int *)(*(int *)(this + 0x74) + -0xc) + -1) {
        GetGroupBounds(this,(int *)&param_2,(int *)&param_3,param_1 + 1,1);
      }
      if ((param_2 == 0xffffffff) ||
         ((pCVar3 = (CMFCMaskedEdit *)param_2, pCVar4 = (CMFCMaskedEdit *)param_3,
          (CMFCMaskedEdit *)param_2 == local_8 &&
          (pCVar4 = (CMFCMaskedEdit *)param_3, param_3 == param_1)))) goto LAB_1004e817;
      goto LAB_1004e8d2;
    }
    SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_8,(LPARAM)&param_1);
    if ((local_8 == (CMFCMaskedEdit *)param_1) && (param_1 == param_3)) {
      if ((int)param_1 < *(int *)(*(int *)(this + 0x74) + -0xc) + -1) {
        GetGroupBounds(this,(int *)&param_2,(int *)&param_3,(int)(local_8 + 1),1);
      }
      if ((param_2 == 0xffffffff) ||
         (pCVar3 = (CMFCMaskedEdit *)param_2, pCVar4 = (CMFCMaskedEdit *)param_2,
         (int)param_2 <= (int)param_1)) goto LAB_1004e817;
      goto LAB_1004e8d2;
    }
    pCVar3 = (CMFCMaskedEdit *)(param_1 + 1);
    if ((int)param_3 <= (int)(param_1 + 1)) {
      pCVar3 = (CMFCMaskedEdit *)param_3;
    }
    pCVar4 = pCVar3;
    if ((int)param_2 < (int)pCVar3) goto LAB_1004e8d2;
  }
  pCVar3 = (CMFCMaskedEdit *)param_2;
  pCVar4 = (CMFCMaskedEdit *)param_2;
LAB_1004e8d2:
  CEdit::SetSel((CEdit *)this,(int)pCVar3,(int)pCVar4,0);
  return;
}

