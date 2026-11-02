// rea decompile_all
// name: FUN_00416170
// address: 0x416170
// body: available
// range: 0x416170-0x41628e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416170(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  undefined4 *in_EDX;
  undefined8 uVar3;
  undefined4 **ppuVar4;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  undefined4 *local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fcab6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  uVar3 = FUN_0045d060(*in_EDX,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  ppuVar4 = &local_1c;
  FUN_00416340(ppuVar4,uVar3);
  FUN_004165b0(ppuVar4,uVar3);
  local_8 = 0;
  if (local_1c != (undefined4 *)0x0) {
    FUN_00636970(&local_34);
    FUN_00410ea0(&local_20);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_18 = 1;
    FUN_00636970(&local_2c);
    if ((local_2c == local_34) && (local_11 = '\x01', local_28 == local_30)) goto LAB_0041621a;
  }
  local_11 = '\0';
LAB_0041621a:
  if (((local_18 & 1) != 0) && (piVar2 = (int *)(local_20 + -8), piVar2 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  if (local_11 != '\0') {
    *in_ECX = local_1c;
    ExceptionList = local_10;
    return;
  }
  *in_ECX = 0;
  if (local_1c != (undefined4 *)0x0) {
    LOCK();
    piVar2 = local_1c + 1;
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_1c)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

