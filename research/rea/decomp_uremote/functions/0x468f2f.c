// rea decompile_all
// name: FUN_00468f2f
// address: 0x468f2f
// body: available
// range: 0x468f2f-0x468fd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00468f2f(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 uVar3;
  
  if (((unaff_ESI == 0) || (iVar1 = *(int *)(unaff_ESI + 0x1c), iVar1 == 0)) ||
     (((iVar2 = *(int *)(iVar1 + 4), iVar2 != 0x2a &&
       (((iVar2 != 0x45 && (iVar2 != 0x49)) && (iVar2 != 0x5b)))) &&
      (((iVar2 != 0x67 && (iVar2 != 0x71)) && (iVar2 != 0x29a)))))) {
    uVar3 = 0xfffffffe;
  }
  else {
    if (*(int *)(iVar1 + 8) != 0) {
      (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),*(int *)(iVar1 + 8));
    }
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x1c) + 0x44);
    if (iVar1 != 0) {
      (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),iVar1);
    }
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x1c) + 0x40);
    if (iVar1 != 0) {
      (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),iVar1);
    }
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x1c) + 0x38);
    if (iVar1 != 0) {
      (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),iVar1);
    }
    (**(code **)(unaff_ESI + 0x24))
              (*(undefined4 *)(unaff_ESI + 0x28),*(undefined4 *)(unaff_ESI + 0x1c));
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    if (iVar2 != 0x71) {
      return 0;
    }
    uVar3 = 0xfffffffd;
  }
  return uVar3;
}

