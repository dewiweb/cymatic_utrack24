// rea decompile_all
// name: CControlBar::WindowProc
// address: 0x10058a35
// body: available
// range: 0x10058a35-0x10058b25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CControlBar::WindowProc(unsigned int,unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CControlBar::WindowProc(CControlBar *this,uint param_1,uint param_2,long param_3)

{
  int iVar1;
  LRESULT LVar2;
  CWnd *pCVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = param_3;
  if ((param_1 < 0x2b) ||
     ((((0x2f < param_1 && (param_1 != 0x39)) && (param_1 != 0x4e)) && (param_1 != 0x111))))
  goto LAB_10058b1a;
  iVar1 = (**(code **)(*(int *)this + 0x118))(param_1,param_2,param_3,&param_3);
  if (iVar1 != 0) {
    return param_3;
  }
  if ((*(int *)(this + 0x74) != 0) && (param_1 == 0x111)) {
    LVar2 = SendMessageW(*(HWND *)(*(int *)(this + 0x74) + 0x20),0x111,param_2,lVar4);
    return LVar2;
  }
  pCVar3 = CWnd::GetOwner((CWnd *)this);
  param_3 = SendMessageW(*(HWND *)(pCVar3 + 0x20),param_1,param_2,lVar4);
  if (param_1 != 0x4e) {
    return param_3;
  }
  if (*(int *)(lVar4 + 8) == -0x208) {
    if (*(int *)(lVar4 + 0x60) != 0) {
      return param_3;
    }
    if (*(char **)(lVar4 + 0xc) != (char *)0x0) {
      bVar5 = **(char **)(lVar4 + 0xc) == '\0';
      goto LAB_10058b06;
    }
  }
  else {
    if (*(int *)(lVar4 + 8) != -0x212) {
      return param_3;
    }
    if (*(int *)(lVar4 + 0xb0) != 0) {
      return param_3;
    }
    if (*(short **)(lVar4 + 0xc) != (short *)0x0) {
      bVar5 = **(short **)(lVar4 + 0xc) == 0;
LAB_10058b06:
      if (!bVar5) {
        return param_3;
      }
    }
  }
  param_1 = 0x4e;
LAB_10058b1a:
  lVar4 = CWnd::WindowProc((CWnd *)this,param_1,param_2,lVar4);
  return lVar4;
}

