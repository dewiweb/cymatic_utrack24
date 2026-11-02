// rea decompile_all
// name: CSmartDockingStandaloneGuideWnd::Create
// address: 0x100df133
// body: available
// range: 0x100df133-0x100df1a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CSmartDockingStandaloneGuideWnd::Create(struct tagRECT *,struct HBITMAP__
   *,struct HRGN__ *,class CWnd *,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CSmartDockingStandaloneGuideWnd::Create
          (CSmartDockingStandaloneGuideWnd *this,tagRECT *param_1,HBITMAP__ *param_2,HRGN__ *param_3
          ,CWnd *param_4,int param_5,int param_6)

{
  char *pcVar1;
  int iVar2;
  CMFCVisualManager *pCVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  CWnd *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  uVar7 = 0;
  iVar2 = *(int *)this;
  *(HBITMAP__ **)(this + 0x74) = param_2;
  *(int *)(this + 0x7c) = param_5;
  uVar5 = 0x80000000;
  ppuVar4 = &PTR_1011d390;
  *(int *)(this + 0x84) = param_6;
  pCVar6 = param_4;
  pcVar1 = GetSmartDockingWndClassName<2080>();
  iVar2 = (**(code **)(iVar2 + 0x58))(0,pcVar1,ppuVar4,uVar5,param_1,pCVar6,uVar7,uVar8);
  if (iVar2 != 0) {
    SetWindowRgn(*(HWND *)(this + 0x20),param_3,0);
  }
  pCVar3 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar3 + 0x1cc))(&param_2,this + 0x78);
  return iVar2;
}

