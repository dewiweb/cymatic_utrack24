// rea decompile_all
// name: FUN_004ef30c
// address: 0x4ef30c
// body: available
// range: 0x4ef30c-0x4ef37a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ef30c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  bool bVar3;
  undefined4 local_c;
  
  if (*(int *)(unaff_ESI + 0xd8) != unaff_EDI) {
    bVar3 = *(int *)(unaff_ESI + 0x78) != 0;
    *(int *)(unaff_ESI + 0xd8) = unaff_EDI;
    if ((bVar3) || (local_c = 0, *(int *)(unaff_ESI + 0x7c) != 0)) {
      local_c = 1;
    }
    puVar1 = *(undefined4 **)(unaff_ESI + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x78) = 0;
      (**(code **)*puVar1)(1);
    }
    puVar1 = *(undefined4 **)(unaff_ESI + 0x7c);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x7c) = 0;
      (**(code **)*puVar1)(1);
    }
    FUN_004ef162(local_c,bVar3);
    iVar2 = FUN_004c0453();
    if (iVar2 != 0) {
      FUN_004eda3e();
    }
  }
  return;
}

