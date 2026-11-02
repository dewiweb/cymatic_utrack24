// rea decompile_all
// name: FUN_005661f0
// address: 0x5661f0
// body: available
// range: 0x5661f0-0x56629a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unable to track spacebase fully for stack */

void FUN_005661f0(void)

{
  code *pcVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  local_c = in_ECX;
  if (*(int *)(in_ECX + 0x118) != 0) {
    FUN_00526c80(in_ECX,*(undefined4 *)(*(int *)(in_ECX + 0x118) + 0x4c));
  }
  piVar3 = &local_c;
  for (local_8 = *(int *)(local_c + 0x11c); local_8 != 0; local_8 = *(int *)(local_8 + 0x120)) {
    pcVar1 = (code *)**(undefined4 **)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8));
    piVar2 = piVar3 + -1;
    piVar3[-1] = 0x56625c;
    (*pcVar1)();
    *(undefined4 *)((int)piVar2 + -4) = 0x566264;
    FUN_005661f0();
    pcVar1 = *(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)) + 4);
    piVar3 = (int *)((int)piVar2 + -4);
    *(undefined4 *)((int)piVar2 + -4) = 0x566289;
    (*pcVar1)();
  }
  return;
}

