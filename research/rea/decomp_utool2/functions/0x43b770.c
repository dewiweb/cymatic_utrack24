// rea decompile_all
// name: FUN_0043b770
// address: 0x43b770
// body: available
// range: 0x43b770-0x43badd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043b770(void)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *in_ECX;
  int in_EDX;
  char *_Dst;
  longlong lVar4;
  size_t local_1c;
  
  uVar1 = FUN_0062c730("bwav coding history",*(undefined1 *)(in_EDX + 0x18),0);
  if (uVar1 < *(uint *)(in_EDX + 0x14)) {
    ppuVar3 = (undefined **)(*(int *)(in_EDX + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  iVar2 = FUN_0045d1e0(*ppuVar3);
  local_1c = iVar2 + 0x25eU & 0xfffffffc;
  _Dst = (char *)0x0;
  if (local_1c == 0) {
    local_1c = 0;
  }
  else {
    FID_conflict__free((void *)0x0);
    _Dst = (char *)FUN_004c554b(local_1c);
  }
  _memset(_Dst,0,local_1c);
  uVar1 = FUN_0062c730("bwav description",*(undefined1 *)(in_EDX + 0x18),0);
  if (uVar1 < *(uint *)(in_EDX + 0x14)) {
    ppuVar3 = (undefined **)(*(int *)(in_EDX + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  if (_Dst == (char *)0x0) {
    FUN_0045d1e0();
  }
  else {
    FUN_0045e320(*ppuVar3);
  }
  uVar1 = FUN_0062c730("bwav originator",*(undefined1 *)(in_EDX + 0x18),0);
  if (uVar1 < *(uint *)(in_EDX + 0x14)) {
    ppuVar3 = (undefined **)(*(int *)(in_EDX + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  if (_Dst == (char *)0xffffff00) {
    FUN_0045d1e0(*ppuVar3);
  }
  else {
    FUN_0045e320(*ppuVar3);
  }
  uVar1 = FUN_0062c730("bwav originator ref",*(undefined1 *)(in_EDX + 0x18),0);
  if (uVar1 < *(uint *)(in_EDX + 0x14)) {
    ppuVar3 = (undefined **)(*(int *)(in_EDX + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  if (_Dst == (char *)0xfffffee0) {
    FUN_0045d1e0(*ppuVar3);
  }
  else {
    FUN_0045e320(*ppuVar3);
  }
  uVar1 = FUN_0062c730("bwav origination date",*(undefined1 *)(in_EDX + 0x18),0);
  if (uVar1 < *(uint *)(in_EDX + 0x14)) {
    ppuVar3 = (undefined **)(*(int *)(in_EDX + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  if (_Dst == (char *)0xfffffec0) {
    FUN_0045d1e0(*ppuVar3);
  }
  else {
    FUN_0045e320(*ppuVar3);
  }
  uVar1 = FUN_0062c730("bwav origination time",*(undefined1 *)(in_EDX + 0x18),0);
  if (uVar1 < *(uint *)(in_EDX + 0x14)) {
    ppuVar3 = (undefined **)(*(int *)(in_EDX + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  if (_Dst == (char *)0xfffffeb6) {
    FUN_0045d1e0(*ppuVar3);
  }
  else {
    FUN_0045e320(*ppuVar3);
  }
  uVar1 = FUN_0062c730("bwav time reference",*(undefined1 *)(in_EDX + 0x18),0);
  if (uVar1 < *(uint *)(in_EDX + 0x14)) {
    ppuVar3 = (undefined **)(*(int *)(in_EDX + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  lVar4 = FID_conflict__atoll(*ppuVar3);
  *(longlong *)(_Dst + 0x152) = lVar4;
  uVar1 = FUN_0062c730("bwav coding history",*(undefined1 *)(in_EDX + 0x18),0);
  if (uVar1 < *(uint *)(in_EDX + 0x14)) {
    ppuVar3 = (undefined **)(*(int *)(in_EDX + 0xc) + uVar1 * 4);
  }
  else {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  if (_Dst + 0x25a == (char *)0x0) {
    FUN_0045d1e0();
  }
  else {
    FUN_0045e320(*ppuVar3);
  }
  if ((((*_Dst == '\0') && (_Dst[0x100] == '\0')) && (_Dst[0x140] == '\0')) &&
     (((_Dst[0x14a] == '\0' && (_Dst[0x25a] == '\0')) && (lVar4 == 0)))) {
    *in_ECX = 0;
    in_ECX[1] = 0;
    FID_conflict__free(_Dst);
    return;
  }
  *in_ECX = _Dst;
  in_ECX[1] = local_1c;
  FID_conflict__free((void *)0x0);
  return;
}

