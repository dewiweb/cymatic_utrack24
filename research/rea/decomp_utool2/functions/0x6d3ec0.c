// rea decompile_all
// name: FUN_006d3ec0
// address: 0x6d3ec0
// body: available
// range: 0x6d3ec0-0x6d3fb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006d3ec0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007271b6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_006e6420(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (((cVar1 != '\0') && (FUN_0068b060(), (*(byte *)(in_ECX + 0x68) & 1) != 0)) &&
     (iVar2 = FUN_006d1d80(), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(in_ECX + 0xd8);
  }
  if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
    cVar1 = *(char *)(in_ECX + 0x86);
  }
  else {
    piVar3 = (int *)FUN_006d1d80();
    if (piVar3 == (int *)0x0) goto LAB_006d3f5b;
    cVar1 = (**(code **)(*piVar3 + 0x3c))();
  }
  if (cVar1 != '\0') {
    FUN_0068b100();
  }
LAB_006d3f5b:
  uVar4 = FUN_004af780(local_18);
  local_8 = 0;
  FUN_00637690(uVar4);
  piVar3 = (int *)(local_18[0] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

