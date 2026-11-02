// rea decompile_all
// name: CControlBar::DrawBorders
// address: 0x10058298
// body: available
// range: 0x10058298-0x100584fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CControlBar::DrawBorders(class CDC *,class CRect &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CControlBar::DrawBorders(CControlBar *this,CDC *param_1,CRect *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  BOOL BVar8;
  long lVar9;
  COLORREF CVar10;
  int local_4c;
  int local_48;
  int local_38;
  int local_30;
  tagRECT local_18;
  uint local_8;
  
  uVar6 = DAT_10164b4c;
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uVar5 = *(uint *)(this + 0xa4);
  if ((uVar5 & 0xf00) == 0) goto LAB_100584ec;
  local_4c = *(int *)(param_2 + 8);
  local_48 = *(int *)(param_2 + 0xc);
  local_38 = *(int *)(param_2 + 4);
  local_30 = *(int *)(param_2 + 0xc);
  if ((uVar5 & 0x80) != 0) {
    local_4c = local_4c + -1;
    local_48 = local_48 + -1;
  }
  uVar1 = uVar5 & 0x200;
  if (uVar1 != 0) {
    local_38 = local_38 + DAT_10164b34;
  }
  uVar2 = uVar5 & 0x800;
  if (uVar2 != 0) {
    local_30 = local_30 - DAT_10164b34;
  }
  iVar7 = CObject::IsKindOf((CObject *)this,(CRuntimeClass *)&PTR_s_CToolBar_1011fca8);
  if ((iVar7 != 0) && (uVar2 != 0)) {
    local_18.right = *(LONG *)(param_2 + 8);
    local_18.top = *(LONG *)(param_2 + 4);
    local_18.bottom = *(LONG *)(param_2 + 0xc);
    local_18.left = 0;
    if (*(HTHEME *)(this + 0x9c) != (HTHEME)0x0) {
      BVar8 = FID_conflict_IsThemeBackgroundPartiallyTransparent(*(HTHEME *)(this + 0x9c),6,0);
      if (BVar8 != 0) {
        FID_conflict_IsThemeBackgroundPartiallyTransparent
                  (*(HTHEME *)(this + 0x20),*(int *)(param_1 + 4),(int)&local_18);
      }
      lVar9 = CThemeHelper::DrawThemeBackground
                        (*(void **)(this + 0x9c),*(HDC__ **)(param_1 + 4),6,0,&local_18,
                         (tagRECT *)0x0);
      if (-1 < lVar9) goto LAB_100583c0;
    }
    CVar10 = GetBkColor(*(HDC *)(param_1 + 8));
    CDC::FillSolidRect(param_1,&local_18,CVar10);
  }
LAB_100583c0:
  uVar3 = uVar5 & 0x100;
  if (uVar3 != 0) {
    CDC::FillSolidRect(param_1,0,local_38,1,local_30 - local_38,uVar6);
  }
  if (uVar1 != 0) {
    CDC::FillSolidRect(param_1,0,0,*(int *)(param_2 + 8),1,uVar6);
  }
  uVar4 = uVar5 & 0x400;
  if (uVar4 != 0) {
    CDC::FillSolidRect(param_1,local_4c,local_38,-1,local_30 - local_38,uVar6);
  }
  if (uVar2 != 0) {
    CDC::FillSolidRect(param_1,0,local_48,*(int *)(param_2 + 8),-1,uVar6);
  }
  uVar6 = DAT_10164b50;
  if ((uVar5 & 0x80) != 0) {
    if (uVar3 != 0) {
      CDC::FillSolidRect(param_1,1,local_38,1,local_30 - local_38,DAT_10164b50);
    }
    if (uVar1 != 0) {
      CDC::FillSolidRect(param_1,0,1,*(int *)(param_2 + 8),1,uVar6);
    }
    if (uVar4 != 0) {
      CDC::FillSolidRect(param_1,*(int *)(param_2 + 8),local_38,-1,local_30 - local_38,uVar6);
    }
    if (uVar2 != 0) {
      CDC::FillSolidRect(param_1,0,*(int *)(param_2 + 0xc),*(int *)(param_2 + 8),-1,uVar6);
    }
  }
  if (uVar3 != 0) {
    *(int *)param_2 = *(int *)param_2 + DAT_10164b30;
  }
  if (uVar1 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + DAT_10164b34;
  }
  if (uVar4 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) - DAT_10164b30;
  }
  if (uVar2 != 0) {
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - DAT_10164b34;
  }
LAB_100584ec:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

