// rea decompile_all
// name: FUN_004f9fc1
// address: 0x4f9fc1
// body: available
// range: 0x4f9fc1-0x4fa037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9fc1(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iStack_20;
  int iStack_1c;
  
  iStack_20 = in_ECX + 0x28;
  iStack_1c = iStack_20;
  FUN_00467adf();
  FUN_00467e6f();
  FUN_00467ff2(&iStack_20);
  FUN_00467eb1();
  cVar1 = FUN_00468061();
  if (cVar1 == '\0') {
    iStack_1c = 0x4fa01b;
    FUN_004c4e62();
    iStack_1c = 0x4fa020;
    iVar2 = FUN_004c5088();
    if (iVar2 <= *(int *)(in_ECX + 0x30)) {
      return;
    }
  }
  if ((undefined4 *)(in_ECX + -0x70) != (undefined4 *)0x0) {
    iStack_1c = 1;
    iStack_20 = 0x4fa032;
    (*(code *)**(undefined4 **)(in_ECX + -0x70))();
  }
  return;
}

