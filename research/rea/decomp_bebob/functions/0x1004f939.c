// rea decompile_all
// name: CMFCFontComboBox::Setup
// address: 0x1004f939
// body: available
// range: 0x1004f939-0x1004fab2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004f970 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCFontComboBox::Setup(int,unsigned char,unsigned char)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCFontComboBox::Setup(CMFCFontComboBox *this,int param_1,uchar param_2,uchar param_3)

{
  BOOL BVar1;
  short *psVar2;
  LRESULT LVar3;
  CMFCFontInfo *this_00;
  WPARAM wParam;
  int iVar4;
  LPARAM local_120;
  int local_11c;
  CMFCFontInfo *local_118;
  CMFCToolBarFontComboBox local_114 [268];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x114;
  local_8 = 0x1004f948;
  local_120 = CONCAT31(local_120._1_3_,param_2);
  local_118 = (CMFCFontInfo *)CONCAT31(local_118._1_3_,param_3);
  BVar1 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar1 != 0) {
    if (*(int *)(this + 0x7c) == 0) {
      CleanUp(this);
      CMFCToolBarFontComboBox::CMFCToolBarFontComboBox
                (local_114,0,-1,param_1,(uchar)local_120,2,0,(uchar)local_118);
      local_8 = 0;
      local_11c = 0;
      iVar4 = FUN_100cf65a((int)local_114);
      if (0 < iVar4) {
        do {
          psVar2 = (short *)GetItem(local_114,local_11c);
          FUN_10006ce0(&local_120,psVar2);
          local_8._0_1_ = 1;
          local_118 = (CMFCFontInfo *)
                      CMFCToolBarComboBoxButton::GetItemData
                                ((CMFCToolBarComboBoxButton *)local_114,local_11c);
          LVar3 = SendMessageW(*(HWND *)(this + 0x20),0x158,0xffffffff,local_120);
          if (LVar3 < 1) {
            this_00 = FUN_1000858a(0x14);
            local_8._0_1_ = 2;
            if (this_00 == (CMFCFontInfo *)0x0) {
              local_118 = (CMFCFontInfo *)0x0;
            }
            else {
              local_118 = (CMFCFontInfo *)CMFCFontInfo::CMFCFontInfo(this_00,local_118);
            }
            wParam = SendMessageW(*(HWND *)(this + 0x20),0x143,0,local_120);
            SendMessageW(*(HWND *)(this + 0x20),0x151,wParam,(LPARAM)local_118);
          }
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10001030((undefined4 *)(local_120 + -0x10));
          local_11c = local_11c + 1;
          iVar4 = FUN_100cf65a((int)local_114);
        } while (local_11c < iVar4);
      }
      local_8 = 0xffffffff;
      CMFCToolBarFontComboBox::~CMFCToolBarFontComboBox(local_114);
    }
    iVar4 = FUN_100f90cf();
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

