// rea decompile_all
// name: FUN_00441387
// address: 0x441387
// body: available
// range: 0x441387-0x441521 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441387(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x2b0) == '\0') {
    *(undefined1 *)(in_ECX + 0x2b0) = 1;
    (**(code **)(**(int **)(in_ECX + 0xac) + 0xb0))
              (*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c));
    iVar1 = *(int *)(in_ECX + 0xb0);
    if (*(int *)(in_ECX + 0x18) < *(int *)(*(int *)(in_ECX + 0xac) + 0x18)) {
      (**(code **)(iVar1 + 0x28))(1);
      FUN_004c09cc(0,*(int *)(in_ECX + 0x1c) + -0x14,0x14);
      (**(code **)(**(int **)(in_ECX + 0xac) + 0xb0))
                (*(undefined4 *)(in_ECX + 0x18),*(int *)(in_ECX + 0x1c) + -0x14);
    }
    else {
      (**(code **)(iVar1 + 0x28))(0);
    }
    iVar1 = *(int *)(in_ECX + 0x1b0);
    if (*(int *)(in_ECX + 0x1c) < *(int *)(*(int *)(in_ECX + 0xac) + 0x1c)) {
      (**(code **)(iVar1 + 0x28))(1);
      FUN_004c09cc();
      (**(code **)(**(int **)(in_ECX + 0xac) + 0xb0))
                (*(int *)(in_ECX + 0x18) + -0x14,(*(int **)(in_ECX + 0xac))[7]);
    }
    else {
      (**(code **)(iVar1 + 0x28))(0);
    }
    iVar1 = *(int *)(in_ECX + 0xac);
    *(undefined4 *)(in_ECX + 0x88) = 0;
    *(undefined4 *)(in_ECX + 0x94) = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x1c);
      if (*(int *)(in_ECX + 0x18) < *(int *)(iVar1 + 0x18)) {
        *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x18) - *(int *)(iVar1 + 0x18);
      }
      if (*(int *)(in_ECX + 0x1c) < iVar2) {
        *(int *)(in_ECX + 0x94) = *(int *)(in_ECX + 0x1c) - iVar2;
      }
    }
    *(float *)(in_ECX + 0xa4) = (float)(*(int *)(in_ECX + 0x7c) * *(int *)(in_ECX + 0x78));
    *(float *)(in_ECX + 0xa8) = (float)(*(int *)(in_ECX + 0x84) * *(int *)(in_ECX + 0x80));
    FUN_004d1174((int *)(in_ECX + 0xb0),0,(double)*(int *)(iVar1 + 0x18));
    FUN_004d1174((int *)(in_ECX + 0x1b0),0,(double)*(int *)(*(int *)(in_ECX + 0xac) + 0x1c));
    FUN_004419ce();
    *(undefined1 *)(in_ECX + 0x2b0) = 0;
  }
  return;
}

