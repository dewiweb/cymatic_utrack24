// rea decompile_all
// name: CMFCToolBar::CreateEx
// address: 0x1002bfb2
// body: available
// range: 0x1002bfb2-0x1002c09b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Removing unreachable block (ram,0x1002c022) */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::CreateEx(class CWnd *,unsigned long,unsigned
   long,class CRect,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBar::CreateEx
          (CMFCToolBar *this,CObject *param_1,uint param_2,uint param_3,int param_5,int param_6,
          undefined4 param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1002bfbe;
  if (param_5 < 1) {
    param_5 = 1;
  }
  if (param_6 < 1) {
    param_6 = 1;
  }
  CPane::SetBorders((CPane *)this,(tagRECT *)&param_5);
  uVar1 = param_3 & 0x40ffff | 0x400000;
  *(uint *)(this + 0x90) = uVar1;
  (**(code **)(*(int *)this + 0x1dc))(uVar1);
  if (param_9 == 0xe800) {
    *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 8;
  }
  AfxEndDeferRegisterClass(0x10);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  SetRectEmpty(&local_24);
  puVar2 = RegisterWindowClass(&local_28,0x1012187c);
  local_8 = 0;
  ::Create(this,(short *)*puVar2,param_3 & 0xffbf0000 | (param_2 | 0x4e) & 0xfffffffd,&local_24,
           param_1,param_9,0,0);
  FUN_10001030((undefined4 *)(local_28 + -0x10));
  iVar3 = FUN_100f90cf();
  return iVar3;
}

