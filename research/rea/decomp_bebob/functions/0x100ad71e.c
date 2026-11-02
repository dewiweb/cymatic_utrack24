// rea decompile_all
// name: FUN_100ad71e
// address: 0x100ad71e
// body: available
// range: 0x100ad71e-0x100ad8b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100ad71e(void *this,undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  int iVar12;
  int iVar13;
  CMFCVisualManager *pCVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  (**(code **)(*(int *)this + 0x1ec))(param_1);
  uVar10 = *(undefined4 *)((int)this + 0x6c);
  if (*(int *)((int)this + 0x70) != 0) {
    *(undefined4 *)((int)this + 0x6c) = 1;
  }
  iVar12 = (**(code **)(*(int *)this + 0x38))();
  if (iVar12 != 0) {
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  piVar1 = (int *)((int)this + 0x18);
  iVar12 = *piVar1;
  uVar3 = *(undefined4 *)((int)this + 0x1c);
  uVar4 = *(undefined4 *)((int)this + 0x20);
  uVar5 = *(undefined4 *)((int)this + 0x24);
  piVar2 = (int *)((int)this + 0xd4);
  iVar6 = *piVar2;
  uVar7 = *(undefined4 *)((int)this + 0xd8);
  uVar8 = *(undefined4 *)((int)this + 0xdc);
  uVar9 = *(undefined4 *)((int)this + 0xe0);
  if (*(int *)((int)this + 100) == 0) {
    iVar13 = *(int *)((int)this + 0x164);
  }
  else {
    iVar13 = *(int *)((int)this + 0x168);
  }
  dVar11 = 1.0;
  if (DAT_10166c84 != 0) {
    dVar11 = _DAT_10166c7c;
  }
  if (1.0 < dVar11) {
    uVar16 = FUN_100f8660(piVar1,piVar2);
    iVar13 = (int)uVar16;
  }
  iVar13 = *(int *)((int)this + 0x20) - iVar13;
  *piVar1 = iVar13;
  *piVar2 = iVar13;
  pCVar14 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar14 + 0x230))(param_1,this);
  if ((*(int *)((int)this + 400) == 0) || (*(int *)(*(int *)((int)this + 400) + 0x20) == 0)) {
    local_18.left = *piVar2;
    local_18.top = *(LONG *)((int)this + 0xd8);
    local_18.right = *(LONG *)((int)this + 0xdc);
    local_18.bottom = *(LONG *)((int)this + 0xe0);
    InflateRect(&local_18,-*(int *)((int)this + 0xbc),-*(int *)((int)this + 0xc0));
    uVar15 = 0x824;
    if (*(int *)((int)this + 0x174) == 1) {
      uVar15 = 0x825;
    }
    else if (*(int *)((int)this + 0x174) == 2) {
      uVar15 = 0x826;
    }
    (**(code **)(*(int *)this + 0x1bc))
              (param_1,(int)this + 0x18c,local_18.left,local_18.top,local_18.right,local_18.bottom,
               uVar15,0xffffffff);
  }
  pCVar14 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar14 + 0x238))(param_1,this);
  *piVar1 = iVar12;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  *(undefined4 *)((int)this + 0x20) = uVar4;
  *(undefined4 *)((int)this + 0x24) = uVar5;
  *piVar2 = iVar6;
  *(undefined4 *)((int)this + 0xd8) = uVar7;
  *(undefined4 *)((int)this + 0xdc) = uVar8;
  *(undefined4 *)((int)this + 0xe0) = uVar9;
  *(undefined4 *)((int)this + 0x6c) = uVar10;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

