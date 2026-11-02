// rea decompile_all
// name: CSmartDockingGroupGuide::Draw
// address: 0x100de1d0
// body: available
// range: 0x100de1d0-0x100de468 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CSmartDockingGroupGuide::Draw(class CDC &,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CSmartDockingGroupGuide::Draw(CSmartDockingGroupGuide *this,CDC *param_1,int param_2)

{
  int iVar1;
  AFX_SMARTDOCK_THEME AVar2;
  CPen *pCVar3;
  LONG LVar4;
  undefined4 uVar5;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [4];
  CMFCToolBarImages *local_24;
  CPen *local_20;
  CDC *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(this + 0x2b8);
  local_1c = param_1;
  if (((iVar1 != 0) || (*(int *)(this + 0x2c0) != 0)) ||
     (local_20 = (CPen *)0x1, *(int *)(this + 0x224) != 0)) {
    local_20 = (CPen *)0x0;
  }
  if ((iVar1 == 0) || (local_24 = (CMFCToolBarImages *)(this + 0x19c), *(int *)(this + 0x224) == 0))
  {
    local_24 = (CMFCToolBarImages *)(this + 0x90);
  }
  if ((param_2 != 0) && (iVar1 == 0)) {
    local_38 = *(int *)(this + 0x2dc);
    local_34 = *(int *)(this + 0x2e0);
    local_2c = *(int *)(local_24 + 0x54) + local_34;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_30 = *(int *)(local_24 + 0x50) + local_38;
    CMFCToolBarImages::DrawEx
              (local_24,param_1,local_38,local_34,local_30,local_2c,0,0,0,0,0,0,0,0xc0);
    goto LAB_100de458;
  }
  CMFCToolBarImages::PrepareDrawImage(local_24,&local_34,0,0,local_20);
  CMFCToolBarImages::Draw
            (local_24,param_1,*(int *)(this + 0x2dc),*(int *)(this + 0x2e0),0,0,0,0,0,(int)local_20,
             0xff);
  CMFCToolBarImages::EndDrawImage(local_24,(tagAFXDrawState *)&local_34);
  if (*(int *)(this + 0x2c0) == 0) goto LAB_100de458;
  AVar2 = GetVMTheme();
  if (AVar2 == 2) goto LAB_100de458;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetRgnBox(*(HRGN *)(this + 0x2ac),&local_18);
  pCVar3 = (CPen *)(this + 0x2d4);
  if (*(int *)(this + 0x2b8) == 0) {
    pCVar3 = (CPen *)(this + 0x2cc);
  }
  local_20 = CDC::SelectObject(param_1,pCVar3);
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 4) {
    local_18.right = local_18.right + -7;
    CDC::MoveTo(param_1,(int)local_50,local_18.right);
    CDC::LineTo(param_1,local_18.left,local_18.top);
    CDC::LineTo(param_1,local_18.left,local_18.bottom);
    LVar4 = local_18.right;
LAB_100de432:
    CDC::LineTo(param_1,LVar4,local_18.bottom);
    uVar5 = 0;
LAB_100de43a:
    param_1 = local_1c;
    ShadeRect(local_18.left,local_18.top,local_18.right,local_18.bottom,uVar5);
  }
  else {
    if (iVar1 == 5) {
      local_18.left = local_18.left + 7;
      CDC::MoveTo(param_1,(int)local_48,local_18.left);
      CDC::LineTo(param_1,local_18.right + -1,local_18.top);
      CDC::LineTo(param_1,local_18.right + -1,local_18.bottom);
      LVar4 = local_18.left;
      goto LAB_100de432;
    }
    if (iVar1 == 6) {
      local_18.bottom = local_18.bottom + -7;
      CDC::MoveTo(param_1,(int)local_40,local_18.left);
      CDC::LineTo(param_1,local_18.left,local_18.top);
      CDC::LineTo(param_1,local_18.right,local_18.top);
      LVar4 = local_18.bottom;
LAB_100de37d:
      CDC::LineTo(param_1,local_18.right,LVar4);
      uVar5 = 1;
      goto LAB_100de43a;
    }
    if (iVar1 == 7) {
      local_18.top = local_18.top + 7;
      CDC::MoveTo(param_1,(int)local_28,local_18.left);
      CDC::LineTo(param_1,local_18.left,local_18.bottom + -1);
      CDC::LineTo(param_1,local_18.right,local_18.bottom + -1);
      LVar4 = local_18.top;
      goto LAB_100de37d;
    }
  }
  CDC::SelectObject(param_1,local_20);
LAB_100de458:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

