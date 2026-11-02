// rea decompile_all
// name: CControlBar::OnSizeParent
// address: 0x10058132
// body: available
// range: 0x10058132-0x10058297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall CControlBar::OnSizeParent(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CControlBar::OnSizeParent(CControlBar *this,uint param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int local_28;
  int local_24;
  uint local_20;
  CControlBar *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_1c = this;
  local_20 = (**(code **)(*(int *)this + 400))(param_2);
  if (((local_20 & 0x10000000) != 0) && ((local_20 & 0xf000) != 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    CopyRect(&local_18,(RECT *)(param_2 + 4));
    iVar4 = local_18.right - local_18.left;
    iVar3 = local_18.bottom - local_18.top;
    bVar5 = *(int *)(param_2 + 0x1c) != 0;
    if (((*(uint *)(local_1c + 0xa4) & 4) == 0) || ((*(uint *)(local_1c + 0xa4) & 1) == 0)) {
      if ((local_20 & 0xa000) == 0) {
        bVar2 = bVar5 | 0x10;
      }
      else {
        bVar2 = bVar5 | 10;
      }
    }
    else {
      bVar2 = bVar5 | 6;
    }
    (**(code **)(*(int *)local_1c + 0x164))(&local_28,0xffffffff,bVar2);
    if (iVar4 <= local_28) {
      local_28 = iVar4;
    }
    if (iVar3 <= local_24) {
      local_24 = iVar3;
    }
    if ((local_20 & 0xa000) == 0) {
      if ((local_20 & 0x5000) != 0) {
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + local_28;
        iVar3 = *(int *)(param_2 + 0x18);
        if (*(int *)(param_2 + 0x18) <= local_24) {
          iVar3 = local_24;
        }
        *(int *)(param_2 + 0x18) = iVar3;
        if ((local_20 & 0x1000) == 0) {
          if ((local_20 & 0x4000) != 0) {
            local_18.left = local_18.right - local_28;
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - local_28;
          }
        }
        else {
          *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + local_28;
        }
      }
    }
    else {
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + local_24;
      iVar3 = *(int *)(param_2 + 0x14);
      if (*(int *)(param_2 + 0x14) <= local_28) {
        iVar3 = local_28;
      }
      *(int *)(param_2 + 0x14) = iVar3;
      if ((local_20 & 0x2000) == 0) {
        if ((local_20 & 0x8000) != 0) {
          local_18.top = local_18.bottom - local_24;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - local_24;
        }
      }
      else {
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + local_24;
      }
    }
    local_18.right = local_18.left + local_28;
    local_18.bottom = local_18.top + local_24;
    if (*(int *)param_2 != 0) {
      AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)param_2,*(HWND__ **)(local_1c + 0x20),&local_18);
    }
  }
  lVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar1;
}

