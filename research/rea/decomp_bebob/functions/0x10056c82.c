// rea decompile_all
// name: Create
// address: 0x10056c82
// body: available
// range: 0x10056c82-0x10056d2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CFrameWnd::Create(char const *,char const *,unsigned long,struct
   tagRECT const &,class CWnd *,char const *,unsigned long,struct CCreateContext *)
    public: virtual int __thiscall CFrameWnd::Create(wchar_t const *,wchar_t const *,unsigned
   long,struct tagRECT const &,class CWnd *,wchar_t const *,unsigned long,struct CCreateContext *)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall
Create(void *this,undefined4 param_1,short *param_2,undefined4 param_3,int *param_4,int param_5,
      LPCWSTR param_6,undefined4 param_7,undefined4 param_8)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  HMENU local_8;
  
  local_8 = (HMENU)0x0;
  if (param_6 != (LPCWSTR)0x0) {
    pAVar1 = AfxGetModuleState();
    local_8 = LoadMenuW(*(HINSTANCE *)(pAVar1 + 0xc),param_6);
    if (local_8 == (HMENU)0x0) {
      (**(code **)(*(int *)this + 0x120))();
      return 0;
    }
  }
  FUN_100022b0((void *)((int)this + 0xe4),param_2);
  if (param_5 == 0) {
    param_6 = (LPCWSTR)0x0;
  }
  else {
    param_6 = *(LPCWSTR *)(param_5 + 0x20);
  }
  iVar2 = (**(code **)(*(int *)this + 0x5c))
                    (param_7,param_1,param_2,param_3,*param_4,param_4[1],param_4[2] - *param_4,
                     param_4[3] - param_4[1],param_6,local_8,param_8);
  if (iVar2 == 0) {
    if (local_8 != (HMENU)0x0) {
      DestroyMenu(local_8);
    }
    return 0;
  }
  return 1;
}

