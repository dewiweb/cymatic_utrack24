// rea decompile_all
// name: CDockSite::CreateEx
// address: 0x10091694
// body: available
// range: 0x10091694-0x100917d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDockSite::CreateEx(unsigned long,unsigned long,struct tagRECT
   const &,class CWnd *,unsigned long,struct CCreateContext *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CDockSite::CreateEx(CDockSite *this,ulong param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,
                   ulong param_5,CCreateContext *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100916a0;
  uVar1 = (**(code **)(*(int *)this + 0x194))();
  (**(code **)(*(int *)this + 0x1e8))(uVar1 | param_2);
  (**(code **)(*(int *)this + 0x1dc))(param_2);
  CopyRect(&local_34,param_3);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(param_4 + 0x20),&local_24);
  local_34.left = local_24.left;
  local_34.top = local_24.top;
  local_34.right = local_24.right;
  local_34.bottom = local_24.bottom;
  iVar2 = (**(code **)(*(int *)this + 400))();
  if (iVar2 == 0x1000) {
    local_34.right = 0;
    *(undefined4 *)(this + 0x138) = 0xe81c;
  }
  else if (iVar2 == 0x2000) {
    local_34.bottom = local_24.top;
    *(undefined4 *)(this + 0x138) = 0xe81b;
  }
  else if (iVar2 == 0x4000) {
    local_34.left = local_24.right;
    *(undefined4 *)(this + 0x138) = 0xe81d;
  }
  else if (iVar2 == 0x8000) {
    local_34.top = local_24.bottom;
    *(undefined4 *)(this + 0x138) = 0xe81e;
  }
  *(ulong *)(this + 0x94) = param_5;
  *(CWnd **)(this + 0x98) = param_4;
  puVar3 = RegisterWindowClass(&local_38,0x1012e108);
  local_8 = 0;
  ::CreateEx(this,0,*puVar3,0,param_2 | 0x46000000,&local_34.left,(int)param_4,
             *(undefined4 *)(this + 0x138),param_6);
  FUN_10001030((undefined4 *)(local_38 + -0x10));
  iVar2 = FUN_100f90cf();
  return iVar2;
}

