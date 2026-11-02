// rea decompile_all
// name: FUN_004fdcbd
// address: 0x4fdcbd
// body: available
// range: 0x4fdcbd-0x4fdd55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fdcbd(void)

{
  int *piVar1;
  code *pcVar2;
  int in_EAX;
  float10 fVar3;
  
  FUN_00467142();
  FUN_004ff5a1();
  FUN_004fa638();
  FUN_004fe22e();
  *(undefined4 *)(*(int *)(in_EAX + 0x40) + 0x10) = *(undefined4 *)(in_EAX + 0x44);
  glViewport(0,0,*(undefined4 *)(*(int *)(in_EAX + 0x48) + 0x18),
             *(undefined4 *)(*(int *)(in_EAX + 0x48) + 0x1c));
  FUN_004fa093();
  pcVar2 = *(code **)(*(int *)(in_EAX + 0x40) + 0x18);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(1);
  }
  fVar3 = (float10)FUN_004fcb72();
  *(bool *)(in_EAX + 0xa8) = (float10)0.0 < fVar3;
  piVar1 = (int *)(*(int *)(in_EAX + 0x44) + 0xc4);
  if (*piVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004fdd4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)*piVar1 + 4))();
    return;
  }
  return;
}

