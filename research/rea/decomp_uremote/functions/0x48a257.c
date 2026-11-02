// rea decompile_all
// name: FUN_0048a257
// address: 0x48a257
// body: available
// range: 0x48a257-0x48a2e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a257(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x18c);
  puVar1 = (uint *)(iVar2 + 0x18);
  if (*puVar1 == 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x14),
                       *(undefined4 *)(iVar2 + 0x10),1);
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
  }
  uVar3 = *puVar1;
  (**(code **)(*(int *)(param_1 + 0x1a0) + 4))
            (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0xc),puVar1,
             *(undefined4 *)(iVar2 + 0x10));
  if (uVar3 < *puVar1) {
    iVar5 = *puVar1 - uVar3;
    (**(code **)(*(int *)(param_1 + 0x1a8) + 4))(param_1,*(int *)(iVar2 + 0xc) + uVar3 * 4,0,iVar5);
    *param_6 = *param_6 + iVar5;
  }
  if (*(uint *)(iVar2 + 0x10) <= *puVar1) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *(uint *)(iVar2 + 0x10);
    *puVar1 = 0;
  }
  return;
}

