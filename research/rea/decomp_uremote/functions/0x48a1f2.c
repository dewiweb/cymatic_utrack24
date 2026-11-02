// rea decompile_all
// name: FUN_0048a1f2
// address: 0x48a1f2
// body: available
// range: 0x48a1f2-0x48a256 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a1f2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = param_6;
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x18c);
  uVar4 = param_7 - *param_6;
  if (*(uint *)(iVar1 + 0x10) < (uint)(param_7 - *param_6)) {
    uVar4 = *(uint *)(iVar1 + 0x10);
  }
  param_1 = 0;
  (**(code **)(*(int *)(iVar2 + 0x1a0) + 4))
            (iVar2,param_2,param_3,param_4,*(undefined4 *)(iVar1 + 0xc),&param_1,uVar4);
  (**(code **)(*(int *)(iVar2 + 0x1a8) + 4))
            (iVar2,*(undefined4 *)(iVar1 + 0xc),param_5 + *piVar3 * 4,param_1);
  *piVar3 = *piVar3 + param_1;
  return;
}

