// rea decompile_all
// name: FUN_1002093c
// address: 0x1002093c
// body: available
// range: 0x1002093c-0x10020c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_1002093c(void *this,int param_1,int param_2,int param_3)

{
  CWnd *pCVar1;
  HDC pHVar2;
  undefined1 *puVar3;
  int iVar4;
  HGDIOBJ h;
  undefined4 extraout_ECX;
  ulonglong uVar5;
  ulonglong uVar6;
  CImage local_e0 [4];
  HGDIOBJ local_dc;
  CClientDC local_ac [4];
  HDC local_a8;
  CImage local_98 [4];
  HGDIOBJ local_94;
  int local_90;
  int local_88;
  int local_84;
  CDC local_64 [4];
  HDC local_60;
  int local_54;
  void *local_50;
  int local_4c;
  CWnd *local_48;
  CDC local_44 [4];
  HDC local_40;
  int local_3c;
  HGDIOBJ local_38;
  tagRECT local_34;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xd0;
  local_8 = 0x1002094b;
  local_54 = param_1;
  local_50 = this;
  if (((*(int *)((int)this + 0x74) != 0) && (0 < param_1)) && (0 < param_2)) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    pCVar1 = (CWnd *)(**(code **)(**(int **)((int)this + 0x74) + 0x1f8))();
    local_48 = pCVar1;
    GetWindowRect(*(HWND *)(pCVar1 + 0x20),&local_24);
    OffsetRect(&local_24,-local_24.left,-local_24.top);
    if ((local_24.right != local_24.left && -1 < local_24.right - local_24.left) &&
       (local_24.bottom != local_24.top && -1 < local_24.bottom - local_24.top)) {
      ATL::CImage::CImage(local_98);
      local_8 = 0;
      ATL::CImage::CreateEx
                (local_98,local_24.right - local_24.left,local_24.bottom - local_24.top,0x20,0,
                 (ulong *)0x0,1);
      CClientDC::CClientDC(local_ac,pCVar1);
      local_8._0_1_ = 1;
      FUN_1001714b((undefined4 *)local_64);
      local_8 = CONCAT31(local_8._1_3_,2);
      pHVar2 = CreateCompatibleDC(local_a8);
      CDC::Attach(local_64,pHVar2);
      if (local_94 == (HGDIOBJ)0x0) {
        local_38 = (HGDIOBJ)0x0;
      }
      else {
        local_38 = SelectObject(local_60,local_94);
      }
      local_4c = 0;
      (**(code **)(*(int *)pCVar1 + 0x90))
                (local_64,local_24.left,local_24.top,local_24.right,local_24.bottom,param_1,param_2,
                 param_3,&local_4c);
      if (local_38 != (HGDIOBJ)0x0) {
        SelectObject(local_60,local_38);
      }
      if (local_4c == 0) {
        if (local_84 < 0) {
          local_90 = (local_88 + -1) * local_84 + local_90;
        }
        local_38 = (HGDIOBJ)0x0;
        if (0 < (local_24.bottom - local_24.top) * (local_24.right - local_24.left)) {
          puVar3 = (undefined1 *)(local_90 + 3);
          do {
            *puVar3 = 0xff;
            puVar3 = puVar3 + 4;
            local_38 = (HGDIOBJ)((int)local_38 + 1);
          } while ((int)local_38 <
                   (local_24.bottom - local_24.top) * (local_24.right - local_24.left));
        }
      }
      local_3c = local_24.right - local_24.left;
      local_48 = (CWnd *)(local_24.bottom - local_24.top);
      uVar5 = FUN_100f8660(local_48,local_3c);
      uVar6 = FUN_100f8660(extraout_ECX,(int)(uVar5 >> 0x20));
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = (int)uVar5;
      local_34.bottom = (int)uVar6;
      ATL::CImage::CImage(local_e0);
      local_8 = CONCAT31(local_8._1_3_,3);
      ATL::CImage::CreateEx(local_e0,(int)uVar5,-(int)uVar6,0x20,0,(ulong *)0x0,1);
      if ((param_3 == 0) ||
         (iVar4 = (**(code **)(**(int **)((int)local_50 + 0x74) + 500))
                            (local_dc,&local_34,local_94,&local_24), iVar4 == 0)) {
        FUN_1001714b((undefined4 *)local_44);
        local_8 = CONCAT31(local_8._1_3_,4);
        pHVar2 = CreateCompatibleDC(local_a8);
        CDC::Attach(local_44,pHVar2);
        if (local_dc == (HGDIOBJ)0x0) {
          h = (HGDIOBJ)0x0;
        }
        else {
          h = SelectObject(local_40,local_dc);
        }
        ATL::CImage::AlphaBlend(local_98,local_40,&local_34,&local_24,0xff,'\0');
        if (h != (HGDIOBJ)0x0) {
          SelectObject(local_40,h);
        }
        local_8 = CONCAT31(local_8._1_3_,3);
        CDC::~CDC(local_44);
      }
      ATL::CImage::Detach(local_e0);
      ATL::CImage::~CImage(local_e0);
      local_8._0_1_ = 1;
      CDC::~CDC(local_64);
      local_8 = (uint)local_8._1_3_ << 8;
      CClientDC::~CClientDC(local_ac);
      ATL::CImage::~CImage(local_98);
    }
  }
  FUN_100f90cf();
  return;
}

