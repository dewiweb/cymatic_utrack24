// rea decompile_all
// name: CMFCHeaderCtrl::OnDrawItem
// address: 0x100cf2b5
// body: available
// range: 0x100cf2b5-0x100cf5fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCHeaderCtrl::OnDrawItem(class CDC *,int,class
   CRect,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCHeaderCtrl::OnDrawItem
          (CMFCHeaderCtrl *this,CDC *param_1,WPARAM param_2,int param_4,int param_5,int param_6,
          int param_7,int param_8,undefined4 param_9)

{
  tagPOINT tVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  LRESULT LVar4;
  CImageList *this_00;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 local_28c [4];
  int local_288;
  int local_284;
  undefined4 local_274 [2];
  short *local_26c;
  void *local_268;
  undefined4 local_264;
  uint local_260;
  int local_258;
  CDC *local_244;
  CGdiObject *local_240;
  int local_23c;
  int local_238;
  tagRECT local_234;
  tagRECT local_224;
  short local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x27c;
  local_8 = 0x100cf2c4;
  local_244 = param_1;
  pCVar2 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar2 + 0x154))(this,param_1,&param_4,param_8,param_9);
  if (-1 < (int)param_2) {
    local_238 = 0;
    iVar3 = CMap<int,int,int,int>::Lookup((CMap<int,int,int,int> *)(this + 0x74),param_2,&local_238)
    ;
    if ((iVar3 != 0) && (local_238 != 0)) {
      local_224.left = param_4;
      local_224.top = param_5;
      local_224.right = param_6;
      local_224.bottom = param_7;
      InflateRect(&local_224,-5,-5);
      local_224.left = (local_224.top - local_224.bottom) + local_224.right;
      if (param_8 != 0) {
        local_224.right = local_224.right + 1;
        local_224.bottom = local_224.bottom + 1;
      }
      local_23c = local_224.right - local_224.left;
      param_6 = local_224.left + -1;
      uVar8 = FUN_100f8660(local_23c,param_6);
      InflateRect(&local_224,0,-(int)uVar8);
      *(uint *)(this + 0x98) = (uint)(0 < local_238);
      (**(code **)(*(int *)this + 0x174))
                (local_244,local_224.left,local_224.top,local_224.right,local_224.bottom);
    }
    _memset(local_274,0,0x30);
    local_26c = local_214;
    local_274[0] = 0x36;
    local_264 = 0xff;
    LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x120b,param_2,(LPARAM)local_274);
    if (LVar4 != 0) {
      if (((local_260 & 0x800) != 0) && (-1 < local_258)) {
        this_00 = CHeaderCtrl::GetImageList((CHeaderCtrl *)this,0);
        if (this_00 != (CImageList *)0x0) {
          local_23c = 0;
          local_238 = 0;
          ImageList_GetIconSize(*(HIMAGELIST *)(this_00 + 4),&local_23c,&local_238);
          local_224.right = param_4;
          local_224.bottom = param_5;
          tVar1.y = ((param_7 - local_238) + param_5) / 2;
          tVar1.x = param_4 + 1;
          CImageList::Draw(this_00,local_244,local_258,tVar1,0);
          param_4 = param_4 + local_23c;
        }
      }
      if (((local_260 & 0x3000) != 0) && (local_268 != (void *)0x0)) {
        local_240 = CGdiObject::FromHandle(local_268);
        GetObjectW(*(HANDLE *)(local_240 + 4),0x18,local_28c);
        local_224.left = param_4;
        local_224.top = param_5;
        local_224.right = param_6;
        local_224.bottom = param_7;
        if ((local_260 & 0x1000) == 0) {
          iVar7 = param_4 + 1;
          iVar3 = iVar7 + local_288;
          param_4 = iVar3;
        }
        else {
          iVar3 = param_6 + -1;
          iVar7 = iVar3 - local_288;
          param_6 = iVar7;
        }
        iVar5 = ((param_7 - param_5) - local_284) / 2;
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        CDC::DrawState(local_244,iVar7,param_5 + iVar5,iVar3 - iVar7,local_284,local_240,0,0);
      }
      if (((local_260 & 0x4000) != 0) && (local_26c != (short *)0x0)) {
        local_234.left = param_4;
        local_234.top = param_5;
        local_234.right = param_6;
        local_234.bottom = param_7;
        InflateRect(&local_234,-5,0);
        FUN_10006ce0(&local_240,local_26c);
        local_8 = 0;
        uVar6 = 0x8824;
        if ((local_260 & 2) == 0) {
          if ((local_260 & 1) != 0) {
            uVar6 = 0x8826;
          }
        }
        else {
          uVar6 = 0x8825;
        }
        (**(code **)(*(int *)local_244 + 0x68))
                  (local_240,*(undefined4 *)(local_240 + -0xc),&local_234,uVar6);
        FUN_10001030((undefined4 *)(local_240 + -0x10));
      }
    }
  }
  FUN_100f90cf();
  return;
}

