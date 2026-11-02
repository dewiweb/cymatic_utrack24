// rea decompile_all
// name: FUN_1008c058
// address: 0x1008c058
// body: available
// range: 0x1008c058-0x1008c128 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1008c058(void *this,int *param_1,CSize *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  tagSIZE tVar5;
  ulonglong uVar6;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  if (((*(int *)((int)this + 0x20) == 0) && (*(void **)((int)this + 0x70) != (void *)0x0)) &&
     (iVar4 = FUN_100261ef(*(void **)((int)this + 0x70),0), iVar4 != 0)) {
    CMFCDropDownToolbarButton::SetDefaultCommand(this,*(uint *)(iVar4 + 0x20));
  }
  uVar1 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)this + 0x80);
  *(undefined4 *)((int)this + 0xc) = 1;
  tVar5 = CMFCToolBarButton::OnCalculateSize(this,(CDC *)&local_c,param_2,param_3);
  dVar3 = 1.0;
  iVar2 = *(int *)tVar5.cx;
  local_8 = (void *)((int *)tVar5.cx)[1];
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  iVar4 = 7;
  if (DAT_10166c84 != 0) {
    dVar3 = _DAT_10166c7c;
  }
  if (dVar3 != 1.0) {
    uVar6 = FUN_100f8660(DAT_10166c84,7);
    iVar4 = (int)uVar6;
  }
  if (DAT_10166e5c == 0) {
    iVar4 = iVar4 / 2 + 1;
  }
  else {
    iVar4 = iVar4 + 2;
  }
  *param_1 = iVar2 + iVar4;
  param_1[1] = (int)local_8;
  return;
}

