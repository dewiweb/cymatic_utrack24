// rea decompile_all
// name: CDrawingManager::DrawLine
// address: 0x1009e8e4
// body: available
// range: 0x1009e8e4-0x1009eb95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009ea2f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CDrawingManager::DrawLine(int,int,int,int,unsigned long)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDrawingManager::DrawLine
          (CDrawingManager *this,int param_1,int param_2,int param_3,int param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  HDC pHVar3;
  int iVar4;
  HBITMAP pHVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  CDC local_68 [4];
  HDC__ *local_64;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined **local_38;
  void *local_34;
  HBITMAP__ *local_30;
  CGdiObject *local_2c;
  CDrawingManager *local_28;
  void *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x1009e8f0;
  if (param_5 != 0xffffffff) {
    iVar9 = param_3 - param_1;
    local_14 = param_1;
    local_28 = this;
    lVar2 = _labs(iVar9);
    local_24 = (void *)(param_4 - param_2);
    local_18 = _labs((long)local_24);
    if (iVar9 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = (uint)(0 < iVar9) * 2 + -1;
    }
    if (local_24 == (void *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = (uint)(0 < (int)local_24) * 2 + -1;
    }
    if ((lVar2 != 0) || (local_18 != 0)) {
      local_50 = param_3;
      local_58 = param_1;
      local_54 = param_2;
      local_4c = param_4;
      CRect::NormalizeRect((CRect *)&local_58);
      iVar9 = local_54;
      local_50 = local_50 + 1;
      local_4c = local_4c + 1;
      iVar8 = local_4c - local_54;
      local_40 = local_50 - local_58;
      if ((local_40 != 0) && (iVar8 != 0)) {
        local_3c = iVar8;
        FUN_1001714b((undefined4 *)local_68);
        local_8 = 0;
        pHVar3 = (HDC)0x0;
        if (*(int *)(local_28 + 4) != 0) {
          pHVar3 = *(HDC *)(*(int *)(local_28 + 4) + 4);
        }
        pHVar3 = CreateCompatibleDC(pHVar3);
        iVar4 = CDC::Attach(local_68,pHVar3);
        if (iVar4 != 0) {
          local_34 = (void *)0x0;
          local_38 = CBitmap::vftable;
          local_8._0_1_ = 1;
          pHVar5 = CreateCompatibleBitmap(*(HDC *)(*(int *)(local_28 + 4) + 4),local_40,iVar8);
          iVar8 = CMenu::Attach((CMenu *)&local_38,(HMENU__ *)pHVar5);
          if (iVar8 != 0) {
            local_2c = CDC::SelectGdiObject(local_64,local_34);
            if (local_2c == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_10009068();
            }
            local_30 = CreateBitmap_32((CSize *)&local_40,&local_24);
            if ((local_30 != (HBITMAP__ *)0x0) && (local_24 != (void *)0x0)) {
              SelectObject(local_64,local_30);
              bVar1 = lVar2 < local_18;
              param_1 = lVar2;
              if (bVar1) {
                param_1 = local_18;
                local_18 = lVar2;
              }
              local_18 = local_18 * 2;
              iVar8 = -param_1;
              uVar6 = ((param_5 & 0xff | 0xffffff00) << 8 | param_5 >> 8 & 0xff) << 8 |
                      param_5 >> 0x10 & 0xff;
              param_4 = 1;
              do {
                *(uint *)((int)local_24 +
                         ((((iVar9 - param_2) + -1 + local_3c) * local_40 - local_58) + local_14) *
                         4) = uVar6;
                for (iVar8 = local_18 + iVar8; -1 < iVar8; iVar8 = iVar8 + param_1 * -2) {
                  if (bVar1) {
                    local_14 = local_14 + local_20;
                  }
                  else {
                    param_2 = param_2 + local_1c;
                  }
                }
                if (bVar1) {
                  param_2 = param_2 + local_1c;
                }
                else {
                  local_14 = local_14 + local_20;
                }
                param_4 = param_4 + 1;
              } while (param_4 <= param_1);
              *(uint *)((int)local_24 +
                       ((((iVar9 - param_2) + -1 + local_3c) * local_40 - local_58) + local_14) * 4)
                   = uVar6;
              local_48 = 0;
              local_44 = 0;
              DrawAlpha(local_28,*(CDC **)(local_28 + 4),(CRect *)&local_58,local_68,
                        (CRect *)&local_48);
              if (local_2c == (CGdiObject *)0x0) {
                pvVar7 = (void *)0x0;
              }
              else {
                pvVar7 = *(void **)(local_2c + 4);
              }
              CDC::SelectGdiObject(local_64,pvVar7);
              DeleteObject(local_30);
            }
          }
          local_8 = (uint)local_8._1_3_ << 8;
          local_38 = CBitmap::vftable;
          CImageList::~CImageList((CImageList *)&local_38);
        }
        local_8 = 0xffffffff;
        CDC::~CDC(local_68);
      }
    }
  }
  return;
}

