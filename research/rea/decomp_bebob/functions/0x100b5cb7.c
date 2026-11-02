// rea decompile_all
// name: CMFCRibbonPanel::RecalcWidths
// address: 0x100b5cb7
// body: available
// range: 0x100b5cb7-0x100b5f2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanel::RecalcWidths(class CDC *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanel::RecalcWidths(CMFCRibbonPanel *this,CDC *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_3c [4];
  int local_38;
  int local_30;
  int local_2c;
  int local_28 [8];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  SystemParametersInfoW(0x30,0,local_28,0);
  (**(code **)(*(int *)(this + 0xb8) + 0xe0))(param_1);
  piVar1 = (int *)(**(code **)(*(int *)(this + 0xb8) + 0x54))(local_3c,param_1);
  local_38 = *piVar1;
  CArray<int,int>::SetSize((CArray<int,int> *)(this + 0x240),0,-1);
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x224));
  local_2c = -1;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x10) = 1;
  if ((*(int *)(this + 0x14) == 0) || (*(int *)(this + 0x24) != 0)) {
    if (*(int *)(this + 0x28) == 0) {
      local_30 = 1;
      do {
        local_28[4] = 0;
        local_28[5] = 0;
        local_28[7] = param_2;
        iVar2 = local_38 + 1;
        local_28[6] = iVar2;
        while (iVar2 < local_28[2] - local_28[0]) {
          (**(code **)(*(int *)this + 0x48))(param_1,local_28 + 4);
          if ((local_2c != -1) && (local_2c < *(int *)(this + 0x48))) goto LAB_100b5ef9;
          if ((*(int *)(this + 0x4c) == local_30) && (0 < *(int *)(this + 0x48))) {
            if ((*(int *)(this + 0x4c) == 2) && (*(int *)(this + 0x24) == 0)) {
              CArray<int,int>::SetSize((CArray<int,int> *)(this + 0x240),0,-1);
            }
            CArray<int,int>::SetAtGrow
                      ((CArray<int,int> *)(this + 0x240),*(int *)(this + 0x248),
                       *(int *)(this + 0x48));
            iVar2 = local_28[6] - local_28[4];
            piVar1 = CMap<int,int,int,int>::operator[]
                               ((CMap<int,int,int,int> *)(this + 0x224),
                                *(int *)(this + 0x50) + *(int *)(this + 0x48));
            *piVar1 = iVar2;
            local_2c = *(int *)(this + 0x48);
            goto LAB_100b5ef9;
          }
          local_28[6] = local_28[6] + 0x10;
          iVar2 = local_28[6] - local_28[4];
        }
        if (*(int *)(this + 0x248) == 0) {
          CArray<int,int>::SetAtGrow
                    ((CArray<int,int> *)(this + 0x240),*(int *)(this + 0x248),0x7fff);
        }
LAB_100b5ef9:
        local_30 = local_30 + 1;
      } while (local_30 < 4);
    }
    else {
      local_28[6] = (local_28[2] - local_28[0]) + -10;
      local_28[7] = param_2;
      local_28[4] = 0;
      local_28[5] = 0;
      (**(code **)(*(int *)this + 0x48))(param_1,local_28 + 4);
      CArray<int,int>::SetAtGrow
                ((CArray<int,int> *)(this + 0x240),*(int *)(this + 0x248),*(int *)(this + 0x48));
    }
  }
  else {
    local_28[4] = 0;
    local_28[5] = 0;
    local_28[6] = 0x7fff;
    local_28[7] = param_2;
    do {
      (**(code **)(*(int *)this + 0x48))(param_1,local_28 + 4);
      if (*(int *)(this + 4) == 0) break;
      if ((local_2c == -1) || (*(int *)(this + 0x48) < local_2c)) {
        iVar2 = *(int *)(this + 0x48);
        local_2c = iVar2;
        if ((iVar2 <= local_38) || ((iVar2 <= (local_38 * 3) / 2 && (*(int *)(this + 0x25c) == 1))))
        {
          if (*(int *)(this + 0x248) == 0) goto LAB_100b5f09;
          break;
        }
        CArray<int,int>::SetAtGrow((CArray<int,int> *)(this + 0x240),*(int *)(this + 0x248),iVar2);
        local_28[6] = local_2c;
      }
      local_28[6] = local_28[6] + -0x10;
    } while (*(int *)(this + 0x50) * 2 < local_28[6] - local_28[4]);
  }
  iVar2 = local_38;
LAB_100b5f09:
  CArray<int,int>::SetAtGrow((CArray<int,int> *)(this + 0x240),*(int *)(this + 0x248),iVar2);
  *(undefined4 *)(this + 0x10) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

