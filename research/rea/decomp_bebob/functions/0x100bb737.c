// rea decompile_all
// name: FUN_100bb737
// address: 0x100bb737
// body: available
// range: 0x100bb737-0x100bb924 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_100bb737(void *this,CDC *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  CMFCVisualManager *pCVar5;
  DWORD DVar6;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  IMAGES_IDS local_5c;
  CDC *local_58;
  tagRECT local_54;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_58 = param_1;
  uVar1 = *(undefined4 *)((int)this + 0x78);
  local_8 = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  local_24.left = param_4;
  local_24.top = param_5;
  local_24.right = param_4 + param_3;
  local_24.bottom = param_7;
  (**(code **)(*(int *)this + 0x70))(&local_6c,1);
  if ((local_6c == 0) && (local_68 == 0)) {
    if (*(int *)((int)this + 0x98) != 0) {
      pCVar5 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar5 + 0x260))
                (local_58,local_24.left,local_24.top,local_24.right,local_24.bottom,0,0,0);
    }
  }
  else {
    InflateRect(&local_24,-1,0);
    iVar4 = ((local_24.bottom - local_24.top) - local_68) / 2;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    local_24.top = local_24.top + iVar4;
    local_24.bottom = local_24.top + local_68;
    (**(code **)(*(int *)this + 0x7c))
              (local_58,1,local_24.left,local_24.top,local_24.right,local_24.bottom);
  }
  local_34.left = param_4;
  local_34.top = param_5;
  local_34.right = param_6;
  local_34.bottom = param_7;
  iVar4 = (**(code **)(*(int *)this + 0x98))();
  if (iVar4 != 0) {
    local_54.left = (param_6 - param_7) + param_5;
    iStack_40 = param_5;
    iStack_3c = param_6;
    iStack_38 = param_7;
    local_54.top = param_5;
    local_54.right = param_6;
    local_54.bottom = param_7;
    bVar3 = 1;
    local_44 = local_54.left;
    OffsetRect(&local_54,0,1);
    if ((((param_9 != 0) && (DVar6 = GetSysColor(0xe), 0x80 < (byte)DVar6)) &&
        (0x80 < (byte)(DVar6 >> 8))) && (0x80 < (byte)(DVar6 >> 0x10))) {
      bVar3 = 0;
    }
    dVar2 = 1.0;
    if (DAT_10166c84 != 0) {
      dVar2 = _DAT_10166c7c;
    }
    local_5c = 0xe;
    if (dVar2 <= 1.0) {
      local_5c = 1;
    }
    local_64 = 0;
    local_60 = 0;
    CMenuImages::Draw(local_58,local_5c,(CRect *)&local_54,-(uint)bVar3 & 3,(CSize *)&local_64);
    local_64 = 0;
    local_60 = 0;
    CMenuImages::Draw(local_58,local_5c,(CRect *)&local_44,(-(uint)bVar3 & 0xfffffffd) + 3,
                      (CSize *)&local_64);
    local_34.right = local_44;
  }
  local_34.left = local_34.left + param_3;
  InflateRect(&local_34,-3,0);
  (**(code **)(*(int *)local_58 + 0x68))(param_2,*(undefined4 *)(param_2 + -0xc),&local_34,0x824);
  *(undefined4 *)((int)this + 0x78) = uVar1;
  FUN_10001030((undefined4 *)(param_2 + -0x10));
  FUN_100f90cf();
  return;
}

