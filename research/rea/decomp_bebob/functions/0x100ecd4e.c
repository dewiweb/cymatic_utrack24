// rea decompile_all
// name: FUN_100ecd4e
// address: 0x100ecd4e
// body: available
// range: 0x100ecd4e-0x100ecf0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_100ecd4e(void *this,CDC *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  double dVar1;
  CDC *this_00;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  ulonglong uVar6;
  CDrawingManager local_34 [4];
  CDC *local_30;
  undefined **local_2c;
  HBRUSH local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x100ecd5a;
  local_30 = param_1;
  if (*(int *)((int)this + 0x368) == 0) {
    dVar1 = 1.0;
    local_24.left = param_3;
    local_24.top = param_4;
    local_24.right = param_5;
    local_24.bottom = param_6;
    iVar3 = 5;
    if (DAT_10166c84 != 0) {
      dVar1 = _DAT_10166c7c;
    }
    if (dVar1 != 1.0) {
      uVar6 = FUN_100f8660(DAT_10166c84,5);
      iVar3 = (int)uVar6;
    }
    local_24.top = (param_6 - iVar3) + 1;
    uVar2 = *(int *)((int)this + 0x20) - *(int *)((int)this + 0x18) & 0x80000001;
    bVar5 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar5 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar5) {
      local_24.left = local_24.left + 1;
      local_24.right = local_24.right + 1;
    }
    OffsetRect((LPRECT)&param_3,0,-1);
    FUN_100ba96b(this,local_30,param_2,param_3,param_4,param_5,param_6);
    iVar3 = (**(code **)(*(int *)this + 0x38))();
    local_28 = DAT_10166af0;
    if ((iVar3 == 0) &&
       (local_28 = *(HBRUSH *)((int)this + 0x30c),
       *(HBRUSH *)((int)this + 0x30c) == (HBRUSH)0xffffffff)) {
      local_28 = *(HBRUSH *)((int)this + 0x314);
    }
    uVar4 = 0xffffffff;
    if ((*(int *)((int)this + 0x35c) != 0) && (*(int *)((int)this + 0x30c) == -1)) {
      uVar4 = 0xc5c5c5;
    }
    if (DAT_1016891c == 0) {
      CBrush::CBrush((CBrush *)&local_2c,
                     (((uint)local_28 >> 0x10 & 0xff | 0x200) << 8 | (uint)local_28 >> 8 & 0xff) <<
                     8 | (uint)local_28 & 0xff);
      this_00 = local_30;
      local_8 = 1;
      FillRect(*(HDC *)(local_30 + 4),&local_24,local_28);
      if (uVar4 != 0xffffffff) {
        CDC::Draw3dRect(this_00,&local_24,uVar4,uVar4);
      }
      local_8 = 0xffffffff;
      local_2c = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_2c);
    }
    else {
      CDrawingManager::CDrawingManager(local_34,local_30);
      local_8 = 0;
      InflateRect(&local_24,-1,-1);
      CDrawingManager::DrawRect(local_34,(CRect *)&local_24,(ulong)local_28,uVar4);
      local_8 = 0xffffffff;
      FUN_1009c588((undefined4 *)local_34);
    }
  }
  else {
    FUN_100ba96b(this,param_1,param_2,param_3,param_4,param_5,param_6);
  }
  FUN_100f90cf();
  return;
}

