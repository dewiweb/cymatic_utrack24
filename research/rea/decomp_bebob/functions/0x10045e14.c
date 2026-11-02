// rea decompile_all
// name: CVSListBoxBase::AddButton
// address: 0x10045e14
// body: available
// range: 0x10045e14-0x10046039 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CVSListBoxBase::AddButton(unsigned int,wchar_t const *,unsigned
   short,unsigned char,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CVSListBoxBase::AddButton
          (CVSListBoxBase *this,uint param_1,wchar_t *param_2,ushort param_3,uchar param_4,
          uint param_5)

{
  CMFCButton *this_00;
  undefined **ppuVar1;
  size_t sVar2;
  uint *puVar3;
  int iVar4;
  CMFCAcceleratorKey local_4c [8];
  tagACCEL local_44;
  CMFCButton *local_3c;
  wchar_t *local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x10045e20;
  local_38 = param_2;
  if ((this != (CVSListBoxBase *)0x0) && (*(int *)(this + 0x20) != 0)) {
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    SetRectEmpty(&local_34);
    local_3c = FUN_1000858a(0x750);
    local_8 = 0;
    if (local_3c == (CMFCButton *)0x0) {
      this_00 = (CMFCButton *)0x0;
    }
    else {
      this_00 = (CMFCButton *)CMFCButton::CMFCButton(local_3c);
    }
    local_8 = 0xffffffff;
    iVar4 = (**(code **)(*(int *)this_00 + 0x160))
                      (&PTR_1011d390,0x5000000b,&local_34,this,*(int *)(this + 0x80) + 2);
    if (iVar4 != 0) {
      *(undefined4 *)(this_00 + 0x74) = 1;
      *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0xd8);
      *(undefined4 *)(this_00 + 0x88) = 0;
      CMFCButton::SetImage(this_00,param_1,0,0);
      if (local_38 != (wchar_t *)0x0) {
        FUN_10006ce0(&local_3c,local_38);
        local_8 = 1;
        if (param_3 != 0) {
          local_44.cmd = 0;
          local_44.fVirt = param_4 | 1;
          local_44.key = param_3;
          CMFCAcceleratorKey::CMFCAcceleratorKey(local_4c,&local_44);
          local_8._0_1_ = 2;
          ppuVar1 = FUN_1000ad47();
          FUN_10005e00(&local_38,(int *)ppuVar1);
          local_8._0_1_ = 3;
          CMFCAcceleratorKey::Format
                    (local_4c,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_38);
          sVar2 = _wcslen(L"(");
          ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_3c,L"(",sVar2);
          ATL::CSimpleStringT<wchar_t,0>::Append
                    ((CSimpleStringT<wchar_t,0> *)&local_3c,local_38,*(int *)(local_38 + -6));
          sVar2 = _wcslen(L")");
          ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_3c,L")",sVar2);
          FUN_10001030((undefined4 *)(local_38 + -8));
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_100c185e((undefined4 *)local_4c);
        }
        SetTooltip(this_00,(wchar_t *)local_3c);
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_3c + -0x10));
      }
      (**(code **)(*(int *)this_00 + 0x16c))(local_4c,0);
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      GetWindowRect(*(HWND *)(this_00 + 0x20),&local_24);
      if (*(int *)(this + 0x80) == 0) {
        *(LONG *)(this + 0xe0) = local_24.right - local_24.left;
        *(LONG *)(this + 0xe4) = local_24.bottom - local_24.top;
      }
      CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0x74),(HWND__ *)this_00);
      if (param_3 == 0) {
        param_4 = '\0';
      }
      CList<HWND__*,HWND__*>::AddTail
                ((CList<HWND__*,HWND__*> *)(this + 0x90),(HWND__ *)(uint)CONCAT12(param_4,param_3));
      if (param_5 != 0) {
        puVar3 = (uint *)CMap<int,int,int,int>::operator[]
                                   ((CMap<int,int,int,int> *)(this + 0xac),
                                    *(int *)(this + 0x80) + -1);
        *puVar3 = param_5;
      }
      FUN_10044a41((CWnd *)this);
    }
  }
  iVar4 = FUN_100f90cf();
  return iVar4;
}

