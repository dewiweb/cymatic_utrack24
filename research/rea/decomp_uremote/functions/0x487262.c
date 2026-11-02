// rea decompile_all
// name: FUN_00487262
// address: 0x487262
// body: available
// range: 0x487262-0x4872c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00487262(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x184);
  if (*(char *)(iVar2 + 0x30) == '\0') {
    iVar4 = (**(code **)(*(int *)(param_1 + 0x188) + 0xc))(param_1,iVar2 + 8);
    if (iVar4 == 0) {
      return;
    }
    *(undefined1 *)(iVar2 + 0x30) = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x118);
  puVar1 = (uint *)(iVar2 + 0x34);
  (**(code **)(*(int *)(param_1 + 0x18c) + 4))
            (param_1,iVar2 + 8,puVar1,uVar3,param_2,param_3,param_4);
  if (uVar3 <= *puVar1) {
    *puVar1 = 0;
    *(undefined1 *)(iVar2 + 0x30) = 0;
  }
  return;
}

