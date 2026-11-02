// rea decompile_all
// name: CreateEx
// address: 0x1007829d
// body: available
// range: 0x1007829d-0x100783a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CDockablePane::CreateEx(unsigned long,char const *,class CWnd
   *,struct tagRECT const &,int,unsigned int,unsigned long,unsigned long,unsigned long,struct
   CCreateContext *)
    public: virtual int __thiscall CDockablePane::CreateEx(unsigned long,wchar_t const *,class CWnd
   *,struct tagRECT const &,int,unsigned int,unsigned long,unsigned long,unsigned long,struct
   CCreateContext *)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall
CreateEx(void *this,undefined4 param_1,wchar_t *param_2,CObject *param_3,RECT *param_4,int param_5,
        int param_6,uint param_7,byte param_8,undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_7 & 0x40) != 0) {
    *(undefined ***)((int)this + 0x178) = &PTR_s_CMultiPaneFrameWnd_10162338;
  }
  if ((param_8 & 0x40) == 0) {
    if ((param_8 & 0x20) != 0) {
      *(undefined ***)((int)this + 0x334) = &PTR_s_CTabbedPane_101621c4;
    }
  }
  else {
    *(undefined ***)((int)this + 0x334) = &PTR_s_CMFCOutlookBar_10135f0e_2_101623c0;
  }
  if (((param_7 & 0xc00000) != 0) || (param_5 != 0)) {
    param_5 = 1;
    *(undefined4 *)((int)this + 0x2c4) = 1;
    param_7 = param_7 & 0xff3fffff;
  }
  iVar1 = CreateEx(this,param_1,(short *)0x0,param_7,param_4,param_3,param_6,param_9,param_10);
  uVar2 = 0;
  if (iVar1 != 0) {
    CopyRect((LPRECT)((int)this + 0x2f8),param_4);
    (**(code **)(*(int *)this + 0x1dc))(param_7 & 0xf000);
    (**(code **)(*(int *)this + 0x1ec))(param_5);
    iVar1 = CSize::operator!=((CSize *)((int)this + 0xbc),(tagSIZE)0x0);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)this + 0x1a0))();
      *(int *)((int)this + 0xc0) = *(int *)((int)this + 0xc0) + iVar1;
      *(int *)((int)this + 0x300) = *(int *)((int)this + 0xbc) + ((LPRECT)((int)this + 0x2f8))->left
      ;
      *(int *)((int)this + 0x304) = *(int *)((int)this + 0x2fc) + *(int *)((int)this + 0xc0);
    }
    if (param_2 != (wchar_t *)0x0) {
      CWnd::SetWindowTextW(this,param_2);
    }
    uVar2 = 1;
  }
  return uVar2;
}

