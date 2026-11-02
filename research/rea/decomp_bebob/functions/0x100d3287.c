// rea decompile_all
// name: CMiniDockFrameWnd::Create
// address: 0x100d3287
// body: available
// range: 0x100d3287-0x100d33f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMiniDockFrameWnd::Create(class CWnd *,unsigned long)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMiniDockFrameWnd::Create(CMiniDockFrameWnd *this,CWnd *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  HMENU pHVar4;
  CMenu *pCVar5;
  undefined **ppuVar6;
  HMODULE pHVar7;
  uint uVar8;
  
  uVar1 = param_2;
  *(undefined4 *)(this + 0xe8) = 1;
  uVar2 = 0x80c83b00;
  if ((param_2 & 4) != 0) {
    uVar2 = 0x80c83300;
  }
  iVar3 = CreateEx(this,0,(_AFX_THREAD_STATE *)0x0,(wchar_t *)&PTR_1011d390,uVar2,
                   (int *)&DAT_10160d98,(int)param_1,(HMENU__ *)0x0);
  if (iVar3 == 0) {
    *(undefined4 *)(this + 0xe8) = 0;
    uVar8 = 0;
  }
  else {
    pHVar4 = GetSystemMenu(*(HWND *)(this + 0x20),0);
    pCVar5 = CMenu::FromHandle(pHVar4);
    if (pCVar5 != (CMenu *)0x0) {
      DeleteMenu(*(HMENU *)(pCVar5 + 4),0xf000,0);
      DeleteMenu(*(HMENU *)(pCVar5 + 4),0xf020,0);
      DeleteMenu(*(HMENU *)(pCVar5 + 4),0xf030,0);
      DeleteMenu(*(HMENU *)(pCVar5 + 4),0xf120,0);
      ppuVar6 = FUN_1000ad47();
      FUN_10005e00(&param_2,(int *)ppuVar6);
      pHVar7 = (HMODULE)FUN_1000ac62();
      if (pHVar7 != (HMODULE)0x0) {
        iVar3 = FUN_10006200(&param_2,pHVar7,0xf011);
        if (iVar3 != 0) {
          DeleteMenu(*(HMENU *)(pCVar5 + 4),0xf060,0);
          AppendMenuW(*(HMENU *)(pCVar5 + 4),0,0xf060,(LPCWSTR)param_2);
        }
      }
      FUN_10001030((undefined4 *)(param_2 - 0x10));
    }
    iVar3 = (**(code **)(*(int *)(this + 0x120) + 0x1a0))
                      (param_1,(-(uint)((uVar1 & 0x5000) != 0) & 0xfffff000) + 0x2000 | uVar1 & 0x40
                               | 0x50000000,0xe81f);
    if (iVar3 != 0) {
      CWnd::SetParent((CWnd *)(this + 0x120),(CWnd *)this);
    }
    uVar8 = (uint)(iVar3 != 0);
    *(undefined4 *)(this + 0xe8) = 0;
  }
  return uVar8;
}

