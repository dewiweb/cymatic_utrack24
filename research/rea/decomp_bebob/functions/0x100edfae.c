// rea decompile_all
// name: CMFCTasksPane::DoPaint
// address: 0x100edfae
// body: available
// range: 0x100edfae-0x100ee07f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTasksPane::DoPaint(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTasksPane::DoPaint(CMFCTasksPane *this,CDC *param_1)

{
  int iVar1;
  BOOL BVar2;
  CMFCVisualManager *pCVar3;
  undefined1 *puVar4;
  CMemDC local_70 [4];
  undefined1 *local_6c;
  int local_68;
  undefined1 local_60 [44];
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x100edfba;
  CMemDC::CMemDC(local_70,param_1,(CWnd *)this);
  local_8 = 0;
  puVar4 = local_60;
  if (local_68 == 0) {
    puVar4 = local_6c;
  }
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  local_34.left = local_24.left;
  local_34.top = local_24.top;
  local_34.right = local_24.right;
  local_34.bottom = local_24.bottom;
  SetRectEmpty(&local_34);
  iVar1 = (**(code **)(*(int *)this + 0x3c8))();
  if (iVar1 != 0) {
    local_34.left = local_24.left;
    local_34.top = local_24.top;
    local_34.right = local_24.right;
    local_34.bottom = local_24.bottom;
    InflateRect(&local_24,-1,-1);
  }
  (**(code **)(*(int *)this + 0x3d0))
            (puVar4,local_24.left,local_24.top,local_24.right,local_24.bottom);
  BVar2 = IsRectEmpty(&local_34);
  if (BVar2 == 0) {
    pCVar3 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar3 + 0x17c))(puVar4,&local_34);
  }
  local_8 = 0xffffffff;
  CMemDC::~CMemDC(local_70);
  FUN_100f90cf();
  return;
}

