// rea decompile_all
// name: FUN_004263a8
// address: 0x4263a8
// body: available
// range: 0x4263a8-0x42641a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004263a8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_8;
  
  piVar3 = param_1;
  local_8 = 0;
  iVar1 = *param_1;
  if ((*(byte *)(iVar1 + 8) & 2) != 0) {
    local_8 = (**(code **)(*(int *)(iVar1 + 0x214) + 0x94))(iVar1,param_2,&param_1);
    if (local_8 == 0) {
      iVar1 = FUN_0042635f(piVar3,param_1);
      return iVar1;
    }
    piVar3[0x1c] = -1;
  }
  FUN_0040f40c(*piVar3);
  if ((*(byte *)(*piVar3 + 8) & 1) != 0) {
    local_8 = FUN_004291aa(piVar3);
    piVar2 = piVar3 + 0xb;
    piVar3 = piVar3 + 3;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
  }
  return local_8;
}

