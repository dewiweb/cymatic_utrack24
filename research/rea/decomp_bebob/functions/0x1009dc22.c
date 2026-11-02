// rea decompile_all
// name: CDrawingManager::_FillGradient
// address: 0x1009dc22
// body: available
// range: 0x1009dc22-0x1009dec8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDrawingManager::_FillGradient(class CRect,unsigned long,unsigned
   long,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDrawingManager::_FillGradient
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,uint param_6,
          uint param_7,int param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_40;
  int local_34;
  int local_30;
  int local_24;
  undefined **local_20;
  HBRUSH local_1c;
  RECT local_18;
  uint local_8;
  
  uVar2 = param_7;
  uVar1 = param_6;
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_6 == param_7) {
    CBrush::CBrush((CBrush *)&local_20,param_6);
    FillRect(*(HDC *)(*(int *)(this + 4) + 4),(RECT *)&param_2,local_1c);
    local_20 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_20);
  }
  else {
    if (0 < param_9) {
      local_18.left = param_2;
      local_18.top = param_3;
      local_18.right = param_4;
      local_18.bottom = param_5;
      if (param_8 == 0) {
        param_2 = ((param_4 - param_2) * param_9) / 100 + param_2;
        uVar4 = param_6;
        local_18.right = param_2;
      }
      else {
        param_3 = ((param_5 - param_3) * param_9) / 100 + param_3;
        uVar4 = param_7;
        local_18.bottom = param_3;
      }
      CBrush::CBrush((CBrush *)&local_20,uVar4);
      FillRect(*(HDC *)(*(int *)(this + 4) + 4),&local_18,local_1c);
      local_20 = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_20);
    }
    if (0 < param_10) {
      local_18.left = param_2;
      local_18.top = param_3;
      local_18.right = param_4;
      local_18.bottom = param_5;
      if (param_8 == 0) {
        param_4 = param_4 - ((param_4 - param_2) * param_10) / 100;
        uVar4 = uVar2;
        local_18.left = param_4;
      }
      else {
        param_5 = param_5 - ((param_5 - param_3) * param_10) / 100;
        uVar4 = uVar1;
        local_18.top = param_5;
      }
      CBrush::CBrush((CBrush *)&local_20,uVar4);
      FillRect(*(HDC *)(*(int *)(this + 4) + 4),&local_18,local_1c);
      local_20 = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_20);
    }
    if (param_9 + param_10 < 0x65) {
      local_34 = 0;
      local_30 = 0;
      local_40 = (uVar1 & 0xff) << 6;
      local_24 = 0x40;
      do {
        CBrush::CBrush((CBrush *)&local_20,
                       (((int)((uVar2 >> 0x10 & 0xff) * local_34 + (uVar1 >> 0x10 & 0xff) * local_24
                              ) >> 6 & 0xffU) << 8 |
                       (int)((uVar1 >> 8 & 0xff) * local_24 + (uVar2 >> 8 & 0xff) * local_34) >> 6 &
                       0xffU) << 8 | local_40 + local_30 >> 6 & 0xffU);
        local_18.left = param_2;
        local_18.top = param_3;
        local_18.right = param_4;
        local_18.bottom = param_5;
        if (param_8 == 0) {
          local_18.left = ((param_4 - param_2) * local_34 >> 6) + param_2;
          local_18.right = ((param_4 - param_2) * (local_34 + 1) >> 6) + param_2;
          iVar3 = local_18.right - local_18.left;
        }
        else {
          local_18.bottom = param_5 - ((param_5 - param_3) * local_34 >> 6);
          local_18.top = param_5 - ((local_34 + 1) * (param_5 - param_3) >> 6);
          iVar3 = local_18.bottom - local_18.top;
        }
        local_34 = local_34 + 1;
        if (0 < iVar3) {
          FillRect(*(HDC *)(*(int *)(this + 4) + 4),&local_18,local_1c);
        }
        local_20 = CBrush::vftable;
        CImageList::~CImageList((CImageList *)&local_20);
        local_40 = local_40 - (uVar1 & 0xff);
        local_24 = local_24 + -1;
        local_30 = local_30 + (uVar2 & 0xff);
      } while (0 < local_24);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

