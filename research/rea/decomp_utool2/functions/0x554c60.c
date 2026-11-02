// rea decompile_all
// name: FUN_00554c60
// address: 0x554c60
// body: available
// range: 0x554c60-0x554d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00554c60(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071101a;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_00c8a5e4 != 0) {
    FUN_005b5d40(0x1000);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x3c));
  puVar3 = *(undefined4 **)(in_ECX + 0x58);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x58) = 0;
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1,uVar4);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x3c));
  FUN_005b66b0();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (*(int *)(in_ECX + 0x30) == 0) {
    *(undefined4 *)(in_ECX + 0x2c) = 200;
    *(undefined4 *)(in_ECX + 0x30) = 200;
    local_8 = 0;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    FUN_00463c00(in_ECX + 0x28);
  }
  else {
    FUN_00463b90();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  ExceptionList = local_10;
  return;
}

