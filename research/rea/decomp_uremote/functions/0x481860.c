// rea decompile_all
// name: FUN_00481860
// address: 0x481860
// body: available
// range: 0x481860-0x4818ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481860(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  
  iVar2 = *(int *)(param_1 + 0x140);
  if (*(uint *)(iVar2 + 8) < *(uint *)(param_1 + 0xe0)) {
    puVar1 = (uint *)(iVar2 + 0xc);
    do {
      uVar3 = *puVar1;
      if (uVar3 < 8) {
        (**(code **)(*(int *)(param_1 + 0x144) + 4))
                  (param_1,param_2,param_3,param_4,iVar2 + 0x18,puVar1,8);
        uVar3 = *puVar1;
      }
      if (uVar3 != 8) {
        return;
      }
      cVar4 = (**(code **)(*(int *)(param_1 + 0x148) + 4))(param_1,iVar2 + 0x18);
      if (cVar4 == '\0') {
        if (*(char *)(iVar2 + 0x10) != '\0') {
          return;
        }
        *param_3 = *param_3 + -1;
        *(undefined1 *)(iVar2 + 0x10) = 1;
        return;
      }
      if (*(char *)(iVar2 + 0x10) != '\0') {
        *param_3 = *param_3 + 1;
        *(undefined1 *)(iVar2 + 0x10) = 0;
      }
      *puVar1 = 0;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    } while (*(uint *)(iVar2 + 8) < *(uint *)(param_1 + 0xe0));
  }
  return;
}

