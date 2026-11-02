// rea decompile_all
// name: FUN_006e1ee0
// address: 0x6e1ee0
// body: available
// range: 0x6e1ee0-0x6e1f96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e1ee0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072830a;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x28) != 0) {
    piVar1 = (int *)(in_ECX + -0x78);
    cVar3 = FUN_0069a000(param_1);
    FUN_006e0e10(1);
    if (cVar3 != '\0') {
      if (piVar1 == (int *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_0040de70(piVar1);
      }
      if (puVar5 != (undefined4 *)0x0) {
        LOCK();
        puVar5[1] = puVar5[1] + 1;
        UNLOCK();
      }
      local_8 = 0;
      if (*(code **)(*piVar1 + 0xb4) != FUN_006e24b0) {
        (**(code **)(*piVar1 + 0xb4))(uVar4);
      }
      if (puVar5 != (undefined4 *)0x0) {
        if (puVar5[2] != 0) {
          FUN_00699ef0();
        }
        LOCK();
        piVar1 = puVar5 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar5)(1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

