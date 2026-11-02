// rea decompile_all
// name: CCheckListBox::PreDrawItemNonThemed
// address: 0x100e99a6
// body: available
// range: 0x100e99a6-0x100e9b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e99dd to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CCheckListBox::PreDrawItemNonThemed(class CDC *,struct
   tagDRAWITEMSTRUCT &,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CCheckListBox::PreDrawItemNonThemed
          (CCheckListBox *this,CDC *param_1,tagDRAWITEMSTRUCT *param_2,int param_3,int param_4)

{
  RECT *lprcSrc;
  bool bVar1;
  CDC *this_00;
  CNoTrackObject *pCVar2;
  HDC pHVar3;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  undefined **local_74;
  HBRUSH local_70;
  ulong local_6c;
  CDC *local_68;
  HGDIOBJ local_64;
  RECT *local_60;
  CDC local_5c [4];
  HDC local_58;
  tagDRAWITEMSTRUCT *local_4c;
  CCheckListBox *local_48;
  int local_44;
  int local_40;
  tagRECT local_34;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x100e99b2;
  local_68 = param_1;
  local_4c = param_2;
  local_48 = this;
  pCVar2 = CProcessLocalObject::GetData
                     ((CProcessLocalObject *)&DAT_10169dfc,(_func_CNoTrackObject_ptr *)&LAB_100e997a
                     );
  if (pCVar2 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  FUN_1001714b((undefined4 *)local_5c);
  local_8 = 0;
  pHVar3 = (HDC)0x0;
  if (param_1 != (CDC *)0x0) {
    pHVar3 = *(HDC *)(param_1 + 4);
  }
  pHVar3 = CreateCompatibleDC(pHVar3);
  iVar4 = CDC::Attach(local_5c,pHVar3);
  if (iVar4 == 0) goto LAB_100e9b8c;
  local_6c = FUN_10017086((int)local_5c);
  CDC::SetLayout(local_5c,0);
  local_64 = SelectObject(local_58,*(HGDIOBJ *)(pCVar2 + 4));
  lprcSrc = (RECT *)(param_2 + 0x1c);
  local_60 = lprcSrc;
  CopyRect(&local_24,lprcSrc);
  local_24.left = local_24.left + 1;
  iVar4 = (param_4 - *(int *)(pCVar2 + 0xc)) / 2;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  local_24.top = local_24.top + 1 + iVar4;
  local_24.right = *(int *)(pCVar2 + 8) + local_24.left;
  local_24.bottom = *(int *)(pCVar2 + 0xc) + local_24.top;
  CopyRect(&local_34,lprcSrc);
  local_34.right = *(int *)(pCVar2 + 8) + 2 + local_34.left;
  (**(code **)(*(int *)local_48 + 0x17c))
            (&local_44,local_34.left,local_34.top,local_34.right,local_34.bottom,local_24.left,
             local_24.top,local_24.right,local_24.bottom);
  DVar5 = GetSysColor(5);
  iVar4 = CWnd::IsWindowEnabled((CWnd *)local_48);
  if (iVar4 == 0) {
LAB_100e9add:
    bVar1 = true;
  }
  else {
    iVar4 = IsEnabled(local_48,*(int *)(local_4c + 8));
    if (iVar4 == 0) goto LAB_100e9add;
    bVar1 = false;
  }
  if ((((byte)local_4c[0x10] & 1) != 0) && (!bVar1)) {
    DVar5 = GetSysColor(0xd);
  }
  CBrush::CBrush((CBrush *)&local_74,DVar5);
  this_00 = local_68;
  local_8._0_1_ = 1;
  FillRect(*(HDC *)(local_68 + 4),&local_34,local_70);
  uVar6 = FUN_10017086((int)this_00);
  CDC::SetLayout(this_00,uVar6 | 8);
  BitBlt(*(HDC *)(this_00 + 4),local_44,local_40,*(int *)(pCVar2 + 8),*(int *)(pCVar2 + 0xc),
         local_58,*(int *)(pCVar2 + 8) * param_3,0,0xcc0020);
  CDC::SetLayout(this_00,uVar6);
  CDC::SetLayout(local_5c,local_6c);
  SelectObject(local_58,local_64);
  local_60->left = local_60->left + *(int *)(pCVar2 + 8) + 3;
  local_8 = (uint)local_8._1_3_ << 8;
  local_74 = CBrush::vftable;
  CImageList::~CImageList((CImageList *)&local_74);
LAB_100e9b8c:
  local_8 = 0xffffffff;
  CDC::~CDC(local_5c);
  FUN_100f90cf();
  return;
}

