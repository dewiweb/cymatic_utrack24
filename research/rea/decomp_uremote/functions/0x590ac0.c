// rea decompile_all
// name: FUN_00590ac0
// address: 0x590ac0
// body: available
// range: 0x590ac0-0x590be6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00590ac0(char param_1)

{
  int iVar1;
  int in_ECX;
  
  if (param_1 != '\0') {
    *(undefined1 *)(*(int *)(in_ECX + 0x28) + 0x79) = 0;
    *(undefined1 *)
     (*(int *)(in_ECX + 0x28) + 0x7a + (uint)*(byte *)(*(int *)(in_ECX + 0x28) + 0x79)) = 0xf7;
    *(char *)(*(int *)(in_ECX + 0x28) + 0x79) = *(char *)(*(int *)(in_ECX + 0x28) + 0x79) + '\x01';
    *(undefined1 *)(*(int *)(in_ECX + 0x28) + 0x78) = 1;
  }
  iVar1 = FUN_00590a10(*(undefined4 *)(in_ECX + 0x28),1,1);
  if ((param_1 == '\0') && (iVar1 == 0x1e)) {
    *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x28);
    (*(code *)**(undefined4 **)
                (*(int *)(in_ECX + 0x2c) + 0x28 +
                *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x28) + 8)))();
    *(undefined4 *)(in_ECX + 0x48) = 0x10;
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x28 +
                       *(int *)(*(int *)(*(int *)(in_ECX + 0x28) + 0x28) + 8)) + 4))();
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  (**(code **)(**(int **)(in_ECX + 0x24) + 8))();
  return iVar1;
}

