// rea decompile_all
// name: FUN_006864b0
// address: 0x6864b0
// body: available
// range: 0x6864b0-0x6865d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006864b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720d4f;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = GetSystemMetrics(0xd);
  local_1c = GetSystemMetrics(0xe);
  local_14 = (undefined4 *)*in_ECX;
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    local_14[1] = local_14[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_20 = in_ECX[1];
  iVar5 = in_ECX[2];
  if (local_14 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = local_14[3];
  }
  if (iVar3 <= local_18) {
    if (local_14 == (undefined4 *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = local_14[4];
    }
    if (iVar3 <= local_1c) goto LAB_00686599;
  }
  piVar4 = (int *)FUN_006735f0(&local_24,local_18,local_1c,local_20);
  puVar1 = (undefined4 *)*piVar4;
  *piVar4 = (int)local_14;
  local_14 = puVar1;
  if (local_24 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_24 + 1;
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*local_24)(1,uVar2);
    }
  }
  iVar3 = *in_ECX;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar3 + 0xc);
  }
  local_20 = (local_20 * local_18) / iVar7;
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 0x10);
  }
  iVar5 = (iVar5 * local_1c) / iVar7;
LAB_00686599:
  uVar6 = FUN_00687270(local_20,iVar5);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_14 + 1;
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  ExceptionList = local_10;
  return uVar6;
}

