// rea decompile_all
// name: CMFCPropertyGridProperty::SetModifiedFlag
// address: 0x10047d4c
// body: available
// range: 0x10047d4c-0x10047f0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridProperty::SetModifiedFlag(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPropertyGridProperty::SetModifiedFlag(CMFCPropertyGridProperty *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  CFont *pCVar5;
  WPARAM wParam;
  int iVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar3 = (**(code **)(*(int *)this + 0xa4))();
  if ((*(int *)(this + 0x74) != iVar3) || (*(int *)(this + 0x68) != 0)) {
    iVar6 = *(int *)(this + 0xc4);
    *(int *)(this + 0x74) = iVar3;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x68) != 0)) {
      if (iVar3 == 0) {
        *(undefined4 *)(iVar6 + 0x74) = 0;
        iVar6 = *(int *)(this + 0xc4);
        puVar4 = *(undefined4 **)(iVar6 + 0xcc);
        do {
          if (puVar4 == (undefined4 *)0x0) goto LAB_10047db9;
          piVar1 = puVar4 + 2;
          puVar4 = (undefined4 *)*puVar4;
        } while (*(int *)(*piVar1 + 0x74) == 0);
      }
      *(undefined4 *)(iVar6 + 0x74) = 1;
    }
LAB_10047db9:
    if (*(int *)(this + 0x68) != 0) {
      puVar4 = *(undefined4 **)(this + 0xcc);
      do {
        if (puVar4 == (undefined4 *)0x0) goto LAB_10047ddd;
        piVar1 = puVar4 + 2;
        puVar4 = (undefined4 *)*puVar4;
      } while (*(int *)(*piVar1 + 0x74) == 0);
      *(undefined4 *)(this + 0x74) = 1;
    }
LAB_10047ddd:
    puVar4 = *(undefined4 **)(this + 0xcc);
    while (puVar4 != (undefined4 *)0x0) {
      puVar2 = puVar4 + 2;
      puVar4 = (undefined4 *)*puVar4;
      SetModifiedFlag((CMFCPropertyGridProperty *)*puVar2);
    }
    if (*(int *)(*(int *)(this + 0xc0) + 0x2cc) != 0) {
      (**(code **)(*(int *)this + 0x6c))
                (*(undefined4 *)(this + 0x2c),*(undefined4 *)(this + 0x30),
                 *(undefined4 *)(this + 0x34),*(undefined4 *)(this + 0x38));
      iVar3 = *(int *)(this + 0xb4);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
        if (*(int *)(this + 0x74) == 0) {
          pCVar5 = CWnd::GetFont(*(CWnd **)(this + 0xc0));
          iVar3 = *(int *)(this + 0xb4);
        }
        else {
          pCVar5 = (CFont *)(*(int *)(this + 0xc0) + 0x2e0);
        }
        if (pCVar5 == (CFont *)0x0) {
          wParam = 0;
        }
        else {
          wParam = *(WPARAM *)(pCVar5 + 4);
        }
        SendMessageW(*(HWND *)(iVar3 + 0x20),0x30,wParam,1);
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(*(int *)(this + 0xb4) + 0x20),&local_18);
        CWnd::ScreenToClient(*(CWnd **)(this + 0xc0),&local_18);
        iVar3 = *(int *)(*(int *)(this + 0xc0) + 0x308) - *(int *)(*(int *)(this + 0xc0) + 0x304);
        if (*(int *)(this + 0x74) != 0) {
          iVar3 = -iVar3;
        }
        iVar6 = (**(code **)(*(int *)this + 0x94))();
        if (iVar6 != 0) {
          (**(code **)(*(int *)this + 0x78))();
          local_18.right = *(LONG *)(this + 0x3c);
        }
        CWnd::SetWindowPos(*(CWnd **)(this + 0xb4),(CWnd *)0x0,local_18.left + iVar3,local_18.top,
                           (local_18.right - local_18.left) - iVar3,local_18.bottom - local_18.top,
                           0x14);
      }
      Redraw(this);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

