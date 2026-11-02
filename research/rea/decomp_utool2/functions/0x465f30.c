// rea decompile_all
// name: FUN_00465f30
// address: 0x465f30
// body: available
// range: 0x465f30-0x465fe9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00465f30(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined1 local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701008;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  iVar3 = in_ECX[10];
  while (0 < iVar3) {
    iVar3 = iVar3 + -1;
    if (((int)in_ECX[10] <= iVar3) && (iVar3 = in_ECX[10] + -1, iVar3 < 0)) break;
    FUN_00410536();
  }
  operator_new(0x14);
  if (in_ECX != (undefined4 *)0x0) {
    LOCK();
    in_ECX[1] = in_ECX[1] + 1;
    UNLOCK();
  }
  local_8 = 1;
  local_14 = 1;
  uVar2 = FUN_00673fa0(local_18);
  if (in_ECX != (undefined4 *)0x0) {
    LOCK();
    piVar1 = in_ECX + 1;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*in_ECX)(1);
    }
  }
  ExceptionList = local_10;
  return uVar2;
}

